/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     THEN = 259,
     END = 260,
     REPEAT = 261,
     UNTIL = 262,
     READ = 263,
     WRITE = 264,
     WHILE = 265,
     RETURN = 266,
     INT = 267,
     VOID = 268,
     RPAREN = 269,
     ELSE = 270,
     ID = 271,
     NUM = 272,
     EQ = 273,
     NE = 274,
     LT = 275,
     LE = 276,
     GT = 277,
     GE = 278,
     LPAREN = 279,
     LBRACE = 280,
     RBRACE = 281,
     LCURLY = 282,
     RCURLY = 283,
     COMMA = 284,
     SEMI = 285,
     ERROR = 286,
     MINUS = 287,
     PLUS = 288,
     OVER = 289,
     TIMES = 290,
     ASSIGN = 291
   };
#endif
/* Tokens.  */
#define IF 258
#define THEN 259
#define END 260
#define REPEAT 261
#define UNTIL 262
#define READ 263
#define WRITE 264
#define WHILE 265
#define RETURN 266
#define INT 267
#define VOID 268
#define RPAREN 269
#define ELSE 270
#define ID 271
#define NUM 272
#define EQ 273
#define NE 274
#define LT 275
#define LE 276
#define GT 277
#define GE 278
#define LPAREN 279
#define LBRACE 280
#define RBRACE 281
#define LCURLY 282
#define RCURLY 283
#define COMMA 284
#define SEMI 285
#define ERROR 286
#define MINUS 287
#define PLUS 288
#define OVER 289
#define TIMES 290
#define ASSIGN 291




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

