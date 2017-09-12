//
//  stack.c
//  c-x-code-test
//
//  Created by 董华深 on 12/09/2017.
//  Copyright © 2017 董华深. All rights reserved.
//

#include "stack.h"

#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(double f) {
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n", f);
}

double pop() {
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}
