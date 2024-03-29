/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         QUERY_YYSTYPE
/* Substitute the variable and function names.  */
#define yyparse         query_yyparse
#define yylex           query_yylex
#define yyerror         query_yyerror
#define yydebug         query_yydebug
#define yynerrs         query_yynerrs

#define yylval          query_yylval
#define yychar          query_yychar

/* Copy the first part of user declarations.  */
#line 2 "generator/query.ypp" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

#line 82 "queryParser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "queryParser.hpp".  */
#ifndef YY_QUERY_YY_QUERYPARSER_HPP_INCLUDED
# define YY_QUERY_YY_QUERYPARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef QUERY_YYDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define QUERY_YYDEBUG 1
#  else
#   define QUERY_YYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define QUERY_YYDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined QUERY_YYDEBUG */
#if QUERY_YYDEBUG
extern int query_yydebug;
#endif
/* "%code requires" blocks.  */
#line 24 "generator/query.ypp" /* yacc.c:355  */

#include "parser/query.hpp"

#line 124 "queryParser.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef QUERY_YYTOKENTYPE
# define QUERY_YYTOKENTYPE
  enum query_yytokentype
  {
    EOF_TK = 0,
    DOUBLE_TK = 258,
    INT_TK = 259,
    IDENTIFIER_TK = 260,
    STRING_TK = 261,
    SELECT_TK = 262,
    SUM_TK = 263,
    COUNT_TK = 264,
    AVG_TK = 265,
    MIN_TK = 266,
    MAX_TK = 267,
    DISTINCT_TK = 268,
    AS_TK = 269,
    FROM_TK = 270,
    WHERE_TK = 271,
    AND_TK = 272,
    OR_TK = 273,
    IS_TK = 274,
    NOT_TK = 275,
    NIL_TK = 276,
    BETWEEN_TK = 277,
    REGEXP_TK = 278,
    LIKE_TK = 279,
    EQ_TK = 280,
    NOTEQ_TK = 281,
    LESS_TK = 282,
    GREAT_TK = 283,
    LESSEQ_TK = 284,
    GREATEQ_TK = 285,
    GROUP_TK = 286,
    BY_TK = 287,
    ORDER_TK = 288,
    LIMIT_TK = 289
  };
#endif

/* Value type.  */
#if ! defined QUERY_YYSTYPE && ! defined QUERY_YYSTYPE_IS_DECLARED

union QUERY_YYSTYPE
{
#line 29 "generator/query.ypp" /* yacc.c:355  */

    vlex::OpTree *opt;
    vlex::PredTree *prt;
    vlex::Statement *stmt;
    vlex::StatementList *stmts;
    double dvalue;
    int ivalue;
    char *svalue;
    vlex::StringList *slist;

#line 183 "queryParser.cpp" /* yacc.c:355  */
};

typedef union QUERY_YYSTYPE QUERY_YYSTYPE;
# define QUERY_YYSTYPE_IS_TRIVIAL 1
# define QUERY_YYSTYPE_IS_DECLARED 1
#endif


extern QUERY_YYSTYPE query_yylval;

int query_yyparse (vlex::QueryContext& ctx);
/* "%code provides" blocks.  */
#line 12 "generator/query.ypp" /* yacc.c:355  */

typedef union QUERY_YYSTYPE QUERY_YYSTYPE;

#ifndef YY_DECL
#define YY_DECL int query_yylex(QUERY_YYSTYPE &yylval)
YY_DECL;
#endif

int query_yyerror(vlex::QueryContext &ctx, const char *s);

#line 207 "queryParser.cpp" /* yacc.c:355  */

#endif /* !YY_QUERY_YY_QUERYPARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 39 "generator/query.ypp" /* yacc.c:358  */

#include "parser/query/queryNode.hpp"

#line 216 "queryParser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined QUERY_YYSTYPE_IS_TRIVIAL && QUERY_YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   324

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  205

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    17,     2,     2,
      11,    12,     8,    14,     9,    15,    13,    16,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    10,
       2,     7,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45
};

#if QUERY_YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    64,    64,    66,    67,    68,    69,    72,    73,    74,
      77,    78,    81,    82,    83,    84,    85,    86,    89,    90,
      93,    94,    97,    99,   100,   103,   104,   107,   108,   111,
     112,   115,   116,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   130,   131,   132,   133,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   159,   160,   161,
     162,   163,   164,   165,   171,   172,   175,   176,   177,   178,
     179,   180,   181,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   201,   202,   205,
     207,   208,   209,   212,   213,   216
};
#endif

#if QUERY_YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "EOF_TK", "error", "$undefined", "DOUBLE_TK", "INT_TK", "IDENTIFIER_TK",
  "STRING_TK", "'='", "'*'", "','", "';'", "'('", "')'", "'.'", "'+'",
  "'-'", "'/'", "'%'", "SELECT_TK", "SUM_TK", "COUNT_TK", "AVG_TK",
  "MIN_TK", "MAX_TK", "DISTINCT_TK", "AS_TK", "FROM_TK", "WHERE_TK",
  "AND_TK", "OR_TK", "IS_TK", "NOT_TK", "NIL_TK", "BETWEEN_TK",
  "REGEXP_TK", "LIKE_TK", "EQ_TK", "NOTEQ_TK", "LESS_TK", "GREAT_TK",
  "LESSEQ_TK", "GREATEQ_TK", "GROUP_TK", "BY_TK", "ORDER_TK", "LIMIT_TK",
  "$accept", "line", "statements", "agg_statements", "proj_statements",
  "agg_func", "agg_statement", "statement", "from_clauses",
  "selection_clauses", "agg_clauses", "sort_clauses", "limit_clauses",
  "conds", "cond", "ccond", "pred", "cpred", "null_pred", "cexpression",
  "expression", "identifiers", "identifier", "number", "unsigned_number",
  "string", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,    61,    42,    44,
      59,    40,    41,    46,    43,    45,    47,    37,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289
};
# endif

#define YYPACT_NINF -96

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-96)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,   255,    18,   -96,   -96,   -96,   -96,   -96,   214,     9,
       9,    22,    29,    47,    51,    53,    62,    78,    91,   102,
      63,   -96,   -96,   207,     0,   -96,   -96,   -96,   -96,   -96,
     236,   303,   -96,   -96,   166,    84,   166,   166,   166,   166,
     166,   -96,   124,   277,   166,   214,   214,   214,   214,   214,
     214,   214,   214,   166,   -96,   -96,   161,   163,   165,   170,
     174,   178,   195,    -8,   -96,   197,   -96,   -96,   -96,   -96,
     -96,   -96,     1,    27,     1,    27,   -96,   -96,   -96,   -96,
       1,    27,     1,    27,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   166,   -96,   227,   184,   192,   212,
     -96,   -96,   -96,   -96,   166,   -96,   227,    10,    -5,    74,
     -96,   -96,   -96,   173,    79,   209,   166,   166,   230,    -2,
      94,   164,    45,   -96,   227,   227,   227,   227,   299,   214,
     214,   214,   214,   214,   214,   299,   299,   299,   214,   214,
     214,   214,   214,   214,   153,    -6,    -4,   -96,   -96,   -96,
     208,   216,   -96,   -96,   208,   216,   -96,   -96,   299,    82,
     207,   257,   207,   257,   207,   257,   207,   257,   207,   257,
     207,   257,    93,   279,   279,   207,   257,   207,   257,   207,
     257,   207,   257,   207,   257,   207,   257,   211,   -96,   -96,
     -96,   308,   299,   299,   299,   299,   299,   299,   -96,   -96,
      83,    83,   -96,   279,   279
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,   104,   103,    99,   105,     5,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     4,
      18,     7,    10,     0,    20,    96,    81,   100,    82,     1,
       0,     0,   101,   102,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,    83,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     8,     9,    11,    19,
      79,    94,    77,    92,    78,    93,    80,    95,    90,    86,
      88,    84,    89,    85,    91,    87,    21,    12,     6,    13,
      14,    15,    16,    17,     0,    29,     0,     0,     0,     0,
      22,    23,    25,    27,     0,    98,     0,     0,    31,    32,
      40,    45,    41,     0,     0,    96,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    33,    42,
      34,    36,    35,    37,    38,    43,    39,    44,     0,     0,
      67,    48,    68,    51,    70,    57,    72,    63,    69,    54,
      71,    60,     0,    65,    64,    47,    46,    50,    49,    56,
      55,    62,    61,    53,    52,    59,    58,     0,    74,    26,
      28,     0,     0,     0,     0,     0,     0,     0,    75,    79,
      77,    78,    80,    73,    66
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -96,   -96,   -96,   -96,   -96,   -96,   113,   206,   -96,   -96,
     146,   117,   118,   -96,   -95,   -50,   -96,   -96,   -96,    -1,
      20,     8,   130,   -96,   189,   -96
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    17,    18,    19,    20,    21,    22,    41,   100,
     101,   102,   103,   107,   108,   109,   110,   111,   112,   113,
     114,    63,    25,    26,    27,    28
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      23,    94,    95,    94,    95,    94,    95,    30,    49,    45,
     148,   119,     3,     4,    50,    51,    52,    48,    29,    96,
      95,    24,     1,   124,   125,    53,   124,   125,    31,   150,
     152,   154,   156,    34,    97,    49,    98,    99,    98,    99,
      35,    99,    23,    52,    70,    72,    74,    76,    78,    80,
      82,    84,    97,    49,    98,    99,   120,    55,    36,    50,
      51,    52,    37,    24,    38,    71,    73,    75,    77,    79,
      81,    83,    85,    39,   151,   153,   155,   157,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    49,    44,     5,
     192,   192,    57,    50,    51,    52,   193,   194,   195,   195,
      42,   192,   126,   127,    40,   121,   149,   193,   194,   195,
     196,    43,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   197,   126,   127,   145,   146,   122,   159,   160,   162,
     164,   166,   168,   170,   172,   173,   174,   175,   177,   179,
     181,   183,   185,    11,    65,    13,    14,    15,    16,   161,
     163,   165,   167,   169,   171,    66,    67,   191,   176,   178,
     180,   182,   184,   186,    56,    58,    59,    60,    61,    62,
      64,     5,    45,    87,    69,    88,    54,    89,    46,    47,
      48,    45,    90,    86,   187,   188,    91,    46,    47,    48,
      92,   199,   200,   201,   202,   203,   204,   128,    32,    33,
     129,   130,   131,   132,   133,   134,   128,    93,   104,   129,
     130,   131,   132,   133,   134,    45,   118,     3,     4,     5,
       6,    46,    47,    48,   105,     8,   115,   116,     9,    10,
       3,     4,     5,     6,    58,   117,   115,   125,   106,   144,
     147,     9,    10,   198,    45,   127,    64,    64,    54,    68,
      46,    47,    48,   123,   115,   115,   115,   115,     3,     4,
       5,     6,   189,     7,   190,    49,     8,     0,     0,     9,
      10,    50,    51,    52,    11,    12,    13,    14,    15,    16,
       3,     4,     5,     6,     0,     0,     0,   192,     8,     0,
       0,     9,    10,   193,   194,   195,    11,    65,    13,    14,
      15,    16,     3,     4,     0,     6,     0,     0,     0,     0,
     158,    49,     0,     9,    10,    55,   192,    50,    51,    52,
      54,     0,   193,   194,   195
};

static const yytype_int16 yycheck[] =
{
       1,     9,    10,     9,    10,     9,    10,     8,     8,     8,
      12,   106,     3,     4,    14,    15,    16,    16,     0,    27,
      10,     1,    18,    28,    29,    25,    28,    29,     8,   124,
     125,   126,   127,    11,    42,     8,    44,    45,    44,    45,
      11,    45,    43,    16,    45,    46,    47,    48,    49,    50,
      51,    52,    42,     8,    44,    45,   106,    12,    11,    14,
      15,    16,    11,    43,    11,    45,    46,    47,    48,    49,
      50,    51,    52,    11,   124,   125,   126,   127,    33,    34,
      35,    36,    37,    38,    39,    40,    41,     8,    25,     5,
       8,     8,     8,    14,    15,    16,    14,    15,    16,    16,
       9,     8,    28,    29,    26,   106,    12,    14,    15,    16,
      28,     9,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    28,    28,    29,   116,   117,   106,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    19,    20,    21,    22,    23,    24,   129,
     130,   131,   132,   133,   134,    42,    43,   158,   138,   139,
     140,   141,   142,   143,    34,    35,    36,    37,    38,    39,
      40,     5,     8,    12,    44,    12,    12,    12,    14,    15,
      16,     8,    12,    53,    31,    32,    12,    14,    15,    16,
      12,   192,   193,   194,   195,   196,   197,    33,     9,    10,
      36,    37,    38,    39,    40,    41,    33,    12,    11,    36,
      37,    38,    39,    40,    41,     8,     4,     3,     4,     5,
       6,    14,    15,    16,    94,    11,    96,    43,    14,    15,
       3,     4,     5,     6,   104,    43,   106,    29,    11,    30,
      10,    14,    15,    32,     8,    29,   116,   117,    12,    43,
      14,    15,    16,   107,   124,   125,   126,   127,     3,     4,
       5,     6,   145,     8,   146,     8,    11,    -1,    -1,    14,
      15,    14,    15,    16,    19,    20,    21,    22,    23,    24,
       3,     4,     5,     6,    -1,    -1,    -1,     8,    11,    -1,
      -1,    14,    15,    14,    15,    16,    19,    20,    21,    22,
      23,    24,     3,     4,    -1,     6,    -1,    -1,    -1,    -1,
      11,     8,    -1,    14,    15,    12,     8,    14,    15,    16,
      12,    -1,    14,    15,    16
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    47,     3,     4,     5,     6,     8,    11,    14,
      15,    19,    20,    21,    22,    23,    24,    48,    49,    50,
      51,    52,    53,    65,    66,    68,    69,    70,    71,     0,
      65,    66,    70,    70,    11,    11,    11,    11,    11,    11,
      26,    54,     9,     9,    25,     8,    14,    15,    16,     8,
      14,    15,    16,    25,    12,    12,    68,     8,    68,    68,
      68,    68,    68,    67,    68,    20,    52,    52,    53,    68,
      65,    66,    65,    66,    65,    66,    65,    66,    65,    66,
      65,    66,    65,    66,    65,    66,    68,    12,    12,    12,
      12,    12,    12,    12,     9,    10,    27,    42,    44,    45,
      55,    56,    57,    58,    11,    68,    11,    59,    60,    61,
      62,    63,    64,    65,    66,    68,    43,    43,     4,    60,
      61,    65,    66,    56,    28,    29,    28,    29,    33,    36,
      37,    38,    39,    40,    41,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    30,    67,    67,    10,    12,    12,
      60,    61,    60,    61,    60,    61,    60,    61,    11,    65,
      65,    66,    65,    66,    65,    66,    65,    66,    65,    66,
      65,    66,    65,    65,    65,    65,    66,    65,    66,    65,
      66,    65,    66,    65,    66,    65,    66,    31,    32,    57,
      58,    65,     8,    14,    15,    16,    28,    28,    32,    65,
      65,    65,    65,    65,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    48,    48,    49,    49,    49,
      50,    50,    51,    51,    51,    51,    51,    51,    52,    52,
      53,    53,    54,    55,    55,    56,    56,    57,    57,    58,
      58,    59,    59,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    61,    61,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    63,    63,    63,
      63,    63,    63,    63,    64,    64,    65,    65,    65,    65,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    67,    67,    68,
      69,    69,    69,    70,    70,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     1,     1,     4,     1,     3,     3,
       1,     3,     4,     4,     4,     4,     4,     4,     1,     3,
       1,     3,     3,     1,     3,     1,     4,     1,     4,     1,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     3,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     3,     3,     3,
       3,     3,     3,     5,     3,     4,     3,     3,     3,     3,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     3,     1,
       1,     2,     2,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (ctx, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if QUERY_YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, ctx); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, vlex::QueryContext& ctx)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (ctx);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, vlex::QueryContext& ctx)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, ctx);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, vlex::QueryContext& ctx)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , ctx);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, ctx); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !QUERY_YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !QUERY_YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, vlex::QueryContext& ctx)
{
  YYUSE (yyvaluep);
  YYUSE (ctx);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (vlex::QueryContext& ctx)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (yylval);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 64 "generator/query.ypp" /* yacc.c:1646  */
    { ctx.assignStmts((yyvsp[-1].stmts));}
#line 1459 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 66 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.stmts) = (yyvsp[0].stmts);}
#line 1465 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 67 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.stmts) = (yyvsp[0].stmts);}
#line 1471 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 68 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.stmts) = buildWildCard(false);}
#line 1477 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 69 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.stmts) = buildWildCard(true);}
#line 1483 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 72 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.stmts) = buildStatements(NULL, (yyvsp[0].stmt));}
#line 1489 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 73 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.stmts) = buildStatements((yyvsp[-2].stmts), (yyvsp[0].stmt));}
#line 1495 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 74 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.stmts) = buildStatements((yyvsp[-2].stmts), (yyvsp[0].stmt));}
#line 1501 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 77 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.stmts) = buildStatements(NULL, (yyvsp[0].stmt));}
#line 1507 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 78 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.stmts) = buildStatements((yyvsp[-2].stmts), (yyvsp[0].stmt));}
#line 1513 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 81 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildAggFunc(SUM, (yyvsp[-1].svalue));}
#line 1519 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 82 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildAggFunc(COUNT, (yyvsp[-1].svalue));}
#line 1525 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 83 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildAggFunc(AVG, (yyvsp[-1].svalue));}
#line 1531 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 84 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildAggFunc(MIN, (yyvsp[-1].svalue));}
#line 1537 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 85 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildAggFunc(MAX, (yyvsp[-1].svalue));}
#line 1543 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 86 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildAggFunc(DISTINCT, (yyvsp[-1].svalue));}
#line 1549 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 89 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.stmt) = buildStatement((yyvsp[0].opt), NULL);}
#line 1555 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 90 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.stmt) = buildStatement((yyvsp[-2].opt), (yyvsp[0].svalue));}
#line 1561 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 93 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.stmt) = buildStatement((yyvsp[0].opt), NULL);}
#line 1567 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 94 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.stmt) = buildStatement((yyvsp[-2].opt), (yyvsp[0].svalue));}
#line 1573 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 97 "generator/query.ypp" /* yacc.c:1646  */
    { ctx.assignTables((yyvsp[-1].slist)); }
#line 1579 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 99 "generator/query.ypp" /* yacc.c:1646  */
    { ctx.assignPredTree(NULL); }
#line 1585 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 100 "generator/query.ypp" /* yacc.c:1646  */
    { ctx.assignPredTree((yyvsp[-1].prt)); }
#line 1591 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 103 "generator/query.ypp" /* yacc.c:1646  */
    { ctx.assignGroupKeys(NULL); }
#line 1597 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 104 "generator/query.ypp" /* yacc.c:1646  */
    { ctx.assignGroupKeys((yyvsp[-1].slist)); }
#line 1603 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 107 "generator/query.ypp" /* yacc.c:1646  */
    { ctx.assignOrderKeys(NULL); }
#line 1609 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 108 "generator/query.ypp" /* yacc.c:1646  */
    { ctx.assignOrderKeys((yyvsp[-1].slist));}
#line 1615 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 111 "generator/query.ypp" /* yacc.c:1646  */
    { ctx.assignLimit(INT32_MAX); }
#line 1621 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 112 "generator/query.ypp" /* yacc.c:1646  */
    { ctx.assignLimit((yyvsp[-1].ivalue)); }
#line 1627 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 115 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = (yyvsp[0].prt);}
#line 1633 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 116 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildCCond(DEFAULT, NULL, (yyvsp[0].opt));}
#line 1639 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 119 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = (yyvsp[-1].prt);}
#line 1645 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 120 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildCond(AND, (yyvsp[-2].prt), (yyvsp[0].prt));}
#line 1651 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 121 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildCond(OR, (yyvsp[-2].prt), (yyvsp[0].prt));}
#line 1657 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 122 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildCCond(AND, (yyvsp[-2].prt), (yyvsp[0].opt));}
#line 1663 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 123 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildCCond(OR, (yyvsp[-2].prt), (yyvsp[0].opt));}
#line 1669 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 124 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildCCond(AND, (yyvsp[0].prt), (yyvsp[-2].opt));}
#line 1675 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 125 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildCCond(OR, (yyvsp[0].prt), (yyvsp[-2].opt));}
#line 1681 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 126 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = (yyvsp[0].prt);}
#line 1687 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 127 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = (yyvsp[0].prt);}
#line 1693 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 130 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = (yyvsp[-1].opt);}
#line 1699 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 131 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = evalConstCond(AND, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1705 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 132 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = evalConstCond(OR, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1711 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 133 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = (yyvsp[0].opt);}
#line 1717 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 136 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(EQUAL, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1723 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 137 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(EQUAL, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1729 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 138 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(EQUAL, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1735 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 139 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(NEQUAL, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1741 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 140 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(NEQUAL, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1747 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 141 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(NEQUAL, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1753 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 142 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(LESSEQ, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1759 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 143 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(LESSEQ, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1765 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 144 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(LESSEQ, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1771 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 145 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(LESS, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1777 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 146 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(LESS, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1783 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 147 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(LESS, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1789 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 148 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(GREATEQ, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1795 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 149 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(GREATEQ, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1801 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 150 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(GREATEQ, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1807 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 151 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(GREATER, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1813 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 152 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(GREATER, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1819 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 153 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(GREATER, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1825 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 154 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(LIKE, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1831 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 155 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(REGEXP, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1837 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 156 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildCond(AND, buildPred(LESSEQ, (yyvsp[-2].opt), (yyvsp[-4].opt)), buildPred(GREATEQ, (yyvsp[0].opt), (yyvsp[-4].opt)));}
#line 1843 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 159 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = evalConstPred(EQUAL, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1849 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 160 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = evalConstPred(NEQUAL, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1855 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 161 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = evalConstPred(LESSEQ, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1861 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 162 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = evalConstPred(LESS, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1867 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 163 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = evalConstPred(GREATEQ, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1873 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 164 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = evalConstPred(GREATER, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1879 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 165 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = evalConstCond(AND, evalConstPred(LESSEQ, (yyvsp[-2].opt), (yyvsp[-4].opt)), evalConstPred(GREATEQ, (yyvsp[0].opt), (yyvsp[-4].opt)));}
#line 1885 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 171 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(ISNULL, buildVar((yyvsp[-2].svalue)), NULL);}
#line 1891 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 172 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.prt) = buildPred(ISNOTNULL, buildVar((yyvsp[-3].svalue)), NULL);}
#line 1897 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 175 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = (yyvsp[-1].opt);}
#line 1903 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 176 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = evalConstExpr(ADD, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1909 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 177 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = evalConstExpr(SUB, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1915 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 178 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = evalConstExpr(MUL, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1921 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 179 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = evalConstExpr(DIV, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1927 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 180 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = (yyvsp[0].opt);}
#line 1933 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 181 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = (yyvsp[0].opt);}
#line 1939 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 184 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = (yyvsp[-1].opt);}
#line 1945 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 185 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildOp(ADD, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1951 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 186 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildOp(SUB, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1957 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 187 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildOp(MUL, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1963 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 188 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildOp(DIV, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1969 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 189 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildOp(ADD, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1975 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 190 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildOp(SUB, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1981 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 191 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildOp(MUL, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1987 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 192 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildOp(DIV, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1993 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 193 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildOp(ADD, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 1999 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 194 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildOp(SUB, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 2005 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 195 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildOp(MUL, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 2011 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 196 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildOp(DIV, (yyvsp[-2].opt), (yyvsp[0].opt));}
#line 2017 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 197 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildVar((yyvsp[0].svalue));}
#line 2023 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 201 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.slist) = buildIdents(NULL, (yyvsp[0].svalue));}
#line 2029 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 202 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.slist) = buildIdents((yyvsp[-2].slist), (yyvsp[0].svalue));}
#line 2035 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 205 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.svalue) = (yyvsp[0].svalue);}
#line 2041 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 207 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = (yyvsp[0].opt);}
#line 2047 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 208 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildSignedNumber((yyvsp[0].opt), false);}
#line 2053 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 209 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildSignedNumber((yyvsp[0].opt), true);}
#line 2059 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 212 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildConstInt((yyvsp[0].ivalue));}
#line 2065 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 213 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildConstDouble((yyvsp[0].dvalue));}
#line 2071 "queryParser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 216 "generator/query.ypp" /* yacc.c:1646  */
    {(yyval.opt) = buildConstString((yyvsp[0].svalue));}
#line 2077 "queryParser.cpp" /* yacc.c:1646  */
    break;


#line 2081 "queryParser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (ctx, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (ctx, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, ctx);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, ctx);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (ctx, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, ctx);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, ctx);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 219 "generator/query.ypp" /* yacc.c:1906  */

int query_yyerror(vlex::QueryContext &ctx, const char *s){
    ctx.grammarError(s);
	return *s;
}
