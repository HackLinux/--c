#ifndef __ENV2_H
#define __ENV2_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "C.tab.h"
#include "nodes.h"
#include "conversion.h"
#include "token.h"
#include "environment.h"
#include "utilities.h"

void register_temporary(environment *env, char *);

#endif