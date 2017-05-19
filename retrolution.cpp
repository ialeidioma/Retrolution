#include <iostream>
#include <windows.h>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#define SIZE 999

using namespace std;

#include "variables.h"

void line();
void clr();
void drawapart();
void drawworld();
void drawtut();
void gotoxy(int x, int y);
void movement();
void movementworld();
void movement_tut();
void interaction();
void interaction_tut();
void interaction_world();

int main()
{
    cout << "TO PLAY THIS GAME PLEASE PUT THE CONSOLE ON HALF OF YOUR SCREEN AND TURN ON YOUR AUDIO\n";
    cout << "AFTER YOU HAVE DONE THAT: ";
    system("pause");
    system("cls");
    cout << "                                    -->HELLO<--\n";
    Sleep(2000);
    cout << "                                 -->AND WELCOME<--\n";
    Sleep(2000);
    cout << "                               -->TO RETROLUTION<--\n";
    Sleep(2000);
    system("cls");
    cout << "This is Retrolution a small project made by Ernad619 and Ialeidioma,\n";
    Sleep(1500);
    cout << "if you are playing this the chances are you probably know us and know what this is all about,\n";
    Sleep(1500);
    cout << "but if you don't: this is a \"life simulator\" game where you take role of a character who has to manage his money and\nskill to accomplish";
    Sleep(1500);
    for(i=0;i<3;i++){
        Sleep(700);
        cout <<".";
    }
    Sleep(2000);
    cout << "well that's up to you to accomplish...\n";
    Sleep(700);
    line();
    cout <<"Please enter your name to continue\n";
    getline(cin,player_name);
    cout << "Hello, " << player_name << endl;
    Sleep(700);
    cout << "let's introduce you to the control system\n";
    Sleep(1200);
    #include "tut.h"
    x=1,y=1;
    cout << "ZzZzZzZ...\n";
    Sleep(700);
    cout << "ZzZzzZ...\n";
    cout << "\a";
    Sleep(1000);
    cout << "\"Huh?\"\n";
    Sleep(1000);
    cout << "\a";
    Sleep(1000);
    cout<< "\"I better get up and check it out\"\n";
    Sleep(1000);
    system("cls");
    Sleep(1000);
    system("color f0");
    drawapart();
    movement();
    gotoxy(1,17);
    cout<<str;
    Sleep(600);
    cout<<string(str.length(),'\b');
    for(i=0;i<999;i++)
        cout<<" ";
    system("cls");
    x=26,y=8;
    drawworld();
    movementworld();

    return 0;
}

#include "functions.h"
