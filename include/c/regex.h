/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_REGEX_H_INCLUDED
# define YY_YY_REGEX_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 10 "regex.y" /* yacc.c:1909  */

#include "regex_tree.h"

#line 48 "regex.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CHAR_TK = 258,
    CNUM_TK = 259,
    SUBMATCH_TK = 260,
    ALPH_TK = 261,
    CAPT_TK = 262,
    DIGIT_TK = 263,
    INT_TK = 264,
    DOUBLE_TK = 265,
    TEXT_TK = 266
  };
#endif
/* Tokens.  */
#define CHAR_TK 258
#define CNUM_TK 259
#define SUBMATCH_TK 260
#define ALPH_TK 261
#define CAPT_TK 262
#define DIGIT_TK 263
#define INT_TK 264
#define DOUBLE_TK 265
#define TEXT_TK 266

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "regex.y" /* yacc.c:1909  */

    NFA *nfa;
    int ivalue;
    uint8_t ucvalue; // todo: UTF-8
    char cvalue;
	char *str;
    uint8_t *charsets; // size: 256

#line 91 "regex.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_REGEX_H_INCLUDED  */