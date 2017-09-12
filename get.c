//
//  get.c
//  c-x-code-test
//
//  Created by 董华深 on 12/09/2017.
//  Copyright © 2017 董华深. All rights reserved.
//

#include "get.h"
#include "main.h"
#include "buf.h"
#include <ctype.h>

int getop(char s[]) {
    int i, c;
    
    while ((s[0] = c = getch2()) == ' ' || c == '\t')
           ;
    s[1] = '\0';
    
    if (!isdigit(c) && c!= '.')
        return c;
    i = 0;
    
    if (isdigit(c))
        while(isdigit(s[++i] = c = getch2()))
            ;
    if (c == '.')
        while(isdigit(s[++i] = c = getch2()))
            ;
    s[i] = '\0';
    if (c != EOF)
        ungetch2(c);
    
    return NUMBER;
}
