#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void line()
{
    cout << "--------------------------------------------------------------------------------" << endl;
}

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void clr()
{
    gotoxy(30,15);
    for(i=0;i<30;i++)
        cout<<"\b";
    for(i=0;i<1500;i++)
        cout<<" ";
}

#include "functions_apart.h"

#include "functions_world.h"

#include "functions_tut.h"


#endif
