#pragma once

#include "interface.hpp"

namespace vlex {

typedef enum _op_type {
    EQUAL = 0,      // == (both for numerics and text)
    NEQUAL = 12,    // != (both for numerics and text)
    ISNULL = 5,     // IS NULL
    ISNOTNULL = 6,  // IS NOT NULL
    LESS = 17,      // < (only for numerics)
    LESSEQ = 18,    // <= (only for numerics)
    GREATEQ = 29,   // >= (only for numerics)
    GREATER = 30,   // > (only for numerics)
    REGEXP = 31,    // LIKE, REGEXP (only for text)
    ADD = 1,
    SUB = 2,
    MUL = 3,
    DIV = 4
} OpType;
typedef enum _op_eval_type { OP, VAR, CONST, AGGFUNC } OpEvalType;
typedef enum _pred_eval_type { COND, PRED, CPRED } PredEvalType;
typedef enum _cond_type { DEFAULT, AND, OR, NOT } CondType;
typedef enum _aggregate_function_type {
    DISTINCT,
    COUNT,
    SUM,
    AVG,
    MAX,
    MIN
} AggFuncType;

struct OpTree {
    OpEvalType evalType;
    vlex::Type type;

    OpTree *left;   // only for OP
    OpTree *right;  // only for OP
    OpType opType;  // only for OP

    AggFuncType ftype;   // only for AGGFUNC
    int aggId;           // only for AGGFUNC
    std::string varKey;  // only for VAR/AGGFUNC
    int varKeyId;        // only for VAR/AGGFUNC

    data64 constData;  // only for CONSTANT
};

struct PredTree {
    PredEvalType evalType;

    CondType ctype;   // only for COND
    PredTree *left;   // only for COND
    PredTree *right;  // only for COND

    OpTree *pred;  // only for PRED

    bool cvalue;  // only for CONST
};

struct Statement {
    OpTree *expr;
    char *name;

    bool isProjection;  // distinguish COUNT(*) and *
    bool isWildCard;
};

struct StatementList {
    Statement *stmt;
    StatementList *next;
};

struct Aggregation {
    Type type;
    AggFuncType ftype;
    int keyId;
};

struct StringList {
    char *str;
    StringList *next;
};

class QueryContext {
   private:
    std::vector<vlex::Type> keyTypes;
    int limit;
    PredTree *pTree;
    StatementList *output;
    StringList *tablenames;
    StringList *gKeys;
    StringList *oKeys;
    std::vector<Key> gKeyVec;
    std::vector<Key> oKeyVec;
    int errorno = 0;

    Type addTypeOp(OpTree *tree) {
        if (tree->evalType == OP) {
            Type lt = addTypeOp(tree->left);
            Type rt = addTypeOp(tree->right);
            if (lt == INT && rt == INT) {
                tree->type = INT;
            } else if (lt == TEXT && rt == TEXT) {
                tree->type = TEXT;
            } else if ((lt == INT && rt == DOUBLE) ||
                       (lt == DOUBLE && rt == INT) ||
                       (lt == DOUBLE && rt == DOUBLE)) {
                tree->type = DOUBLE;
            } else {
                tree->type = INVALID;
            }
        }
        return tree->type;
    }

    void mapOpTree(OpTree *tree, KeyMap *keyMap) {
        OpTree *t;
        std::queue<OpTree *> bfsQueue;
        bfsQueue.push(tree);
        while (!bfsQueue.empty()) {
            t = bfsQueue.front();
            if (t->left != NULL) {
                bfsQueue.push(t->left);
            }
            if (t->right != NULL) {
                bfsQueue.push(t->right);
            }

            if (t->evalType == VAR || t->evalType == AGGFUNC) {
                if (keyMap->find(t->varKey)) {
                    Key &key = keyMap->at(t->varKey);
                    t->varKeyId = key.id;
                    if (t->evalType == AGGFUNC && t->ftype == COUNT) {
                        t->type = INT;
                    } else {
                        t->type = key.type;
                    }
                } else {
                    return;
                }
            }
            bfsQueue.pop();
        }
    }

    void mapPredTree(PredTree *tree, KeyMap *keyMap) {
        PredTree *t;
        std::queue<PredTree *> bfsQueue;
        bfsQueue.push(tree);
        while (!bfsQueue.empty()) {
            t = bfsQueue.front();
            if (t->left != NULL) {
                bfsQueue.push(t->left);
            }
            if (t->right != NULL) {
                bfsQueue.push(t->right);
            }

            if (t->evalType == PRED) {
                mapOpTree(t->pred, keyMap);
                addTypeOp(t->pred);
            }
            bfsQueue.pop();
        }
    }

   public:
    QueryContext() {}
    void mapping(KeyMap *keyMap) {
        for (StatementList *s = output; s != NULL; s = s->next) {
            mapOpTree(s->stmt->expr, keyMap);
            addTypeOp(s->stmt->expr);
        }
        if (pTree != NULL) {
            mapPredTree(pTree, keyMap);
        }
        for (StringList *k = gKeys; k != NULL; k = k->next) {
            std::string s(k->str, strlen(k->str));
            gKeyVec.push_back(keyMap->at(s));
        }
        for (StringList *k = oKeys; k != NULL; k = k->next) {
            std::string s(k->str, strlen(k->str));
            oKeyVec.push_back(keyMap->at(s));
        }
    }
    inline StatementList *getStatements() { return output; }
    inline StringList *getTables() { return tablenames; }
    inline PredTree *getPredTree() { return pTree; }
    inline std::vector<Key> &getGKeys() { return gKeyVec; }
    inline std::vector<Key> &getOKeys() { return oKeyVec; }
    inline std::vector<vlex::Type> &getKeyTypes() { return keyTypes; }
    inline int getLimit() { return limit; }
    inline bool isError() { return errorno; }
    void assignStmts(StatementList *_stmts) { output = _stmts; }
    void assignTables(StringList *_tables) { tablenames = _tables; }
    void assignPredTree(PredTree *_ptree) { pTree = _ptree; }
    void assignGroupKeys(StringList *_keys) { gKeys = _keys; }
    void assignOrderKeys(StringList *_keys) { oKeys = _keys; }
    void assignLimit(int _limit) { limit = _limit; }
    void grammarError(const char *s) {
        printf("ERROR: %s\n\n", s);
        errorno = 1;
    }
};

}  // namespace vlex