#pragma once

#include "common.hpp"
#include "executor/executor.hpp"
#include "general/ios.hpp"
#include "interface.hpp"
#include "parser/nfa.hpp"
#include "parser/query.hpp"
#include "scanner/dfa.hpp"
#include "scanner/vfa.hpp"

#define PARTITION_SIZE (SIZE_TYPE)(1 << 31)  // 1024MB

namespace vlex {
class RuntimeBase {
   public:
    RuntimeBase(const Table& table);
    void constructVFA(double lr);
    void iexec(QueryContext* query);
    void exec(QueryContext* query);

   protected:
    void makePartitions(SIZE_TYPE size);

    Executor* executor;
    ioStream* ios;
    DFAGenerator* dfag;
    DFAMerger* dfam;
    const Table& table;
    DFA* dfa;
    VectFA* vfa;

    DATA_TYPE* data;
    SIZE_TYPE size;
    std::vector<SIZE_TYPE> partitions;
};

class RuntimeExpression : public RuntimeBase {
    using RuntimeBase::RuntimeBase;

   public:
    void constructDFA(const NFA* nfa, const NFA* regexNFA);
};

class RuntimeKeys : public RuntimeBase {
    using RuntimeBase::RuntimeBase;

   public:
    void constructDFA(NFA** keyNFAs, NFA** keyRegexNFAs);

   private:
    std::vector<std::map<int, int>> createStateMaps(DFA** keyDFAs, int keySize);
    void mergeKeys(DFA** keyDFAs, int keySize);
};
}  // namespace vlex
