/********************************************************/
/* Trabalho 1 - Ling. de Prog. e Compiladores           */
/* Analisador léxico da linguagem C- (C-Minus)          */
/* Bernardo Simões Lage Gomes Duarte    8598861 Turma 2 */
/* Gabriel Luiz Ferraz Souto            8936993 Turma 1 */
/* Giovani Ortolani Barbosa             8936648 Turma 2 */
/* Renan Rodrigues                      9278132 Turma 2 */
/********************************************************/

#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

/*
 *  Variavel global para contagem
 *  de erros
 */
extern int errors;

/*
 *  Analise lexica atraves do lex
 *  @params 
 *      1. arquivo de entrada com o codigo-fonte .c-
 *      2. arquivo de destino do relatorio da analise
 */
void lexicalAnalyzer(FILE *, FILE *);

#endif
