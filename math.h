#include <iostream>
#include "locale.h"

float x, y, res;
char op;

float *pX = &x;
float *pY = &y;
float *pRes = &res;
char *pOp = &op;

float check(char *sym){
    switch (*sym) {
        case '+':
            return *pRes = *pX + *pY;
            break;
        case '-':
            return *pRes = *pX - *pY;
            break;
        case '*':
            return *pRes = *pX * *pY;
            break;
        case '/':
            return *pRes = *pX / *pY;
            break;
    }
    return 0;
}
