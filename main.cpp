#include "program.h"
#include <iostream>
#include <locale.h>

int main(){
    do{
         run();
         if (*pRestart == true){
         	continue;
         }
         else if(*pRestart == false){
         	break;
         }
    } while(*pRestart);
    return 0;
}
