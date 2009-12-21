#ifndef __TACGEN_H
#define __TACGEN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "C.tab.h"
#include "nodes.h"
#include "environment2.h"
#include "conversion.h"
#include "token.h"

/* Fn prototypes */
void start_tac_gen(NODE *);
value *make_simple(environment *, NODE *);

/* TAC structure */
typedef struct tac_quad {
	char *op;
	value *operand1;
	value *operand2;	
	value *result;
	struct tac_quad *next;		
}tac_quad;

typedef struct simple {
	char *label;
	struct tac_quad *code;
}simple;

tac_quad *tac_output;

#endif