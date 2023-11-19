/****************************************************/
/* File: tiny.l                                     */
/* Lex specification for TINY                       */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

%{
#include "globals.h"
#include "util.h"
#include "scan.h"
/* lexeme of identifier or reserved word */
char tokenString[MAXTOKENLEN+1];
%}

digit       [0-9]
number      {digit}+
letter      [a-zA-Z]
/* identifier는 문자로 시작해서 이후 문자와 숫자로 구성됩니다. */
identifier  {letter}({letter}|{digit})*
newline     \n
whitespace  [ \t]+

%%

"if"            {return IF;}
"else"          {return ELSE;}
"int"          {return INT;}
"void"          {return VOID;}
"while"          {return WHILE;}
"return"          {return RETURN;}
"="            {return ASSIGN;}
"=="             {return EQ;}
"<"             {return LT;}
"<="             {return LE;}
">"             {return GT;}
">="             {return GE;}
"!="             {return NE;}
"+"             {return PLUS;}
"-"             {return MINUS;}
"*"             {return TIMES;}
"/"             {return OVER;}
"("             {return LPAREN;}
")"             {return RPAREN;}
"{"             {return LBRACE;}
"}"             {return RBRACE;}
"["             {return LCURLY;}
"]"             {return RCURLY;}
";"             {return SEMI;}
","             {return COMMA;}
{number}        {return NUM;}
{identifier}    {return ID;}
{newline}       {lineno++;}
{whitespace}    {/* skip whitespace */}
"/*"             { char c;
					int state = 0; // scan.c의 INCOMMENTS_ 상태와 같습니다.
                  do
                  { c = input();
                    if (c == 0) {
						break; // EOF
					}
					if (!state) {
						/* INCOMMENT 상태 */
						if (c == '\n') lineno++;
						else if (c == '*') state = 1;
					} else {
						/* INCOMMENT_ 상태 */
						if (c == '/') break;
						else if (c != '*') state = 0;
						// *가 아니라면 INCOMMENT 상태로 되돌리고, 맞다면 INCOMMENT_ 상태를 유지합니다.
					}
                  } while (1); // body에서 모든 경우에 대해 break 처리를 해주었으므로 무한 반복문 처리했습니다.
                }
.               {return ERROR;}

%%

TokenType getToken(void)
{ static int firstTime = TRUE;
  TokenType currentToken;
  if (firstTime)
  { firstTime = FALSE;
    lineno++;
    yyin = source;
    yyout = listing;
  }
  currentToken = yylex();
  strncpy(tokenString,yytext,MAXTOKENLEN);
  if (TraceScan) {
    fprintf(listing,"\t%d: ",lineno);
    printToken(currentToken,tokenString);
  }
  return currentToken;
}

