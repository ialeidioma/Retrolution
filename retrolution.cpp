#include <iostream>
#include <windows.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#define SIZE 999

using namespace std;

void line();

int main()
{
    #include "variables.h"

    cout << "This is Retrolution a small project made by Ernad619 and Ialeidioma," << endl;
    Sleep(1500);
    cout << "if you are playing this the chances are you probably know us and know what this is all about," << endl;
    Sleep(1500);
    cout << "but if you don't: this is a \"life simulator\" game where you take role of a character who has to manage his money and\nskill to accomplish";
    Sleep(1500);
    for(i=0;i<3;i++){
        Sleep(700);
        cout <<".";
    }
    Sleep(2000);
    cout << "well that's up to you to accomplish..." << endl;
    Sleep(700);
    line();
    cout <<"Please enter your name to continue"<< endl;
    getline(cin,player_name);
    cout << "Hello, " << player_name << endl;
    Sleep(700);
    cout << "ZzZzZzZ..." << endl;
    Sleep(700);
    cout << "ZzZzzZ..." << endl;
    cout << "\a" << endl;
    return 0;
}

#include "functions.h"
