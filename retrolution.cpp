#include <iostream>
#include <windows.h>
<<<<<<< HEAD
#include "string"
#include "functions.h" // We should leave comments for each other in every new update :P
// I put your #include "functions.h" please don't kill me xD
=======
#include <cmath>
#include <cstdlib>
#include <ctime>
#define SIZE 999
>>>>>>> origin/master

using namespace std;

void line();

int main()
{
    #include "variables.h"

    cout << "TO PLAY THIS GAME PLEASE PUT THE CONSOLE ON HALF OF YOUR SCREEN AND TURN ON YOUR AUDIO\n";
    cout << "AFTER YOU HAVE DONE THAT: ";
    system("pause");
    system("cls");
    cout << "                                    -->HELLO<--\n"; // I also swapped every endl with \n xD
    Sleep(2000);
    cout << "                                 -->AND WELCOME<--\n";
    Sleep(2000);
    cout << "                               -->TO RETROLUTION<--\n";
    Sleep(5000);
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
    cout << "ZzZzZzZ...\n";
    Sleep(700);
    cout << "ZzZzzZ...\n";
    cout << "\a\n";
    return 0;
}
