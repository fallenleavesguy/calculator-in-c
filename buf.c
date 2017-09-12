//
//  buf.c
//  c-x-code-test
//
//  Created by 董华深 on 12/09/2017.
//  Copyright © 2017 董华深. All rights reserved.
//

#include "buf.h"

char buf[BUF_SIZE];
int bufp = 0;

int getch2() {
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch2(int c) {
    if (bufp >= BUF_SIZE)
        printf("ungetch2: too many characters\n");
    else
        buf[bufp++] = c;
}
