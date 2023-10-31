#include "math.h"
using namespace std;
#include <locale.h>


bool restart = false;
bool *pRestart = &restart;

char input;
char *pInput = &input;


void run()
{

    cout <<"\n\nWELCOME TO better calculator by defensive, idea by Fedotov Vlad(uosio)!\n";

    cout <<"\nPlease enter first number: ";
    cin >> *pX;

    cout <<"\nPlease enter second number: ";
    cin >> *pY;

    cout <<"\nPlease enter the action [+, -, *, / ]: ";
    cin >> *pOp;

    cout <<"\nYour resoult: \n" << check(pOp);

    cout <<"\nDo you want to restart the calculator? [y/n]";

    cin >> pInput;

    if(*pInput == 'y'){
        *pRestart = true;
    }else if(*pInput == 'n'){
        *pRestart = false;
    }
}

