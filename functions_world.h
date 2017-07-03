#ifndef FUNCTIONS_WORLD_H_INCLUDED
#define FUNCTIONS_WORLD_H_INCLUDED
void drawworld()
{
    for(i=0;i<24;i++)
    {
        for(j=0;j<66;j++)
        {
            switch(mapArrayTwo[i][j])
            {
            case 3:
                cout<<"S";
                break;
            case 20:
                cout<<"F";
                break;
            case 4:
                cout<<"G";
                break;
            case 21:
                cout<<"E";
                break;
            case 5:
                cout<<"H";
                break;
            case 6:
                cout<<"W";
                break;
            case 7:
                cout<<"R";
                break;
            case 8:
                cout<<"A";
                break;
            case 9:
                cout<<"B";
                break;
            case 10:
                cout<<"P";
                break;
            case 11:
                cout<<"Z";
                break;
            case 12:
                cout<<"F";
                break;
            case 13:
                cout<<"S";
                break;
            case 14:
                cout<<"C";
                break;
            case 15:
                cout<<"F";
                break;
            case 16:
                cout<<"S";
                break;
            case 17:
                cout<<"R";
                break;
            case 18:
                cout<<"S";
                break;
            case 19:
                cout<<"O";
                break;
            case 0:
                cout<<" ";
                break;
            case 1:
                cout<<char(219);
                break;
            case 2:
                cout<<"D";
                break;
            case 22:
                cout<<"H";
                break;
            case 23:
                cout<<"I";
                break;
            case 24:
                cout<<"H";
                break;
            case 25:
                cout<<"G";
                break;
            case 26:
                cout<<"M";
                break;
            case 27:
                cout<<"S";
                break;
            case 28:
                cout<<"H";
                break;
            case 29:
                cout<<"D";
                break;
            case 30:
                cout<<"S";
                break;
            case 31:
                cout<<"G";
                break;
            case 32:
                cout<<"S";
                break;
            case 33:
                cout<<"J";
                break;
            case 34:
                cout<<"S";
                break;
            case 35:
                cout<<"H";
                break;
            case 36:
                cout<<"S";
                break;
            case 37:
                cout<<"H";
                break;
            case 38:
                cout<<"S";
                break;
            case 39:
                cout<<"H";
                break;
            case 40:
                cout<<"P";
                break;
            case 41:
                cout<<"P";
                break;
            case 42:
                cout<<"D";
                break;
            case 43:
                cout<<"G";
                break;
            case 44:
                cout<<"S";
                break;
            case 45:
                cout<<"T";
                break;
            case 46:
                cout<<"C";
                break;
            case 47:
                cout<<"P";
                break;
            case 48:
                cout<<"S";
                break;
            case 49:
                cout<<"C";
                break;
            case 50:
                cout<<"S";
                break;
            case 51:
                cout<<"M";
                break;
            case 52:
                cout<<"C";
                break;
            case 53:
                cout<<"H";
                break;
            case 54:
                cout<<char(42);
                break;
            case 55:
                cout<<char(38);
                break;
            case 56:
                cout<<char(219);
                break;
            case 57:
                cout<<"P";
                break;
            }
        }
        cout << "\n";
    }
}

void movementworld()
{
    while(world)
    {
        if(mapArrayTwo[ybefore][xbefore]==56)
        {
            gotoxy(xbefore,ybefore);
            cout<<char(219);
        }
        else
        {
            gotoxy(xbefore,ybefore);
            cout<<" ";
        }

        gotoxy(x,y);
        cout<<char(1);

        inputkey=_getch();

        xbefore=x;
        ybefore=y;

        if(inputkey=='w') //move up
            y-=1;
        else if(inputkey=='s') //move down
            y+=1;
        else if(inputkey=='a') //move left
            x-=1;
        else if(inputkey=='d') //move right
            x+=1;
        else if(inputkey=='f')
        {
         gotoxy(1,15);
         cout<<"You own: " << player_money << "money";
         Sleep(2000);
         gotoxy(10,22);
        for(i=0;i<10;i++)
            cout<<"\b";
        gotoxy(40,15);
        for(i=0;i<40;i++)
            cout<<"\b";
        for(i=0;i<700;i++)
            cout<<" ";
        }
        else if(inputkey=='e') //player triggers interaction
            interaction_world();
        if(mapArrayTwo[y][x]==1 || mapArrayTwo[y][x]==2 || mapArrayTwo[y][x]==3 || mapArrayTwo[y][x]==4 || mapArrayTwo[y][x]==5 || mapArrayTwo[y][x]==6 ||
           mapArrayTwo[y][x]==7 || mapArrayTwo[y][x]==8 || mapArrayTwo[y][x]==9 || mapArrayTwo[y][x]==10 || mapArrayTwo[y][x]==11 || mapArrayTwo[y][x]==12 ||
           mapArrayTwo[y][x]==13 || mapArrayTwo[y][x]==14 || mapArrayTwo[y][x]==15 || mapArrayTwo[y][x]==16 || mapArrayTwo[y][x]==17 || mapArrayTwo[y][x]==18 ||
           mapArrayTwo[y][x]==19 || mapArrayTwo[y][x]==20 || mapArrayTwo[y][x]==21 || mapArrayTwo[y][x]==22 || mapArrayTwo[y][x]==23 || mapArrayTwo[y][x]==24 ||
           mapArrayTwo[y][x]==25 || mapArrayTwo[y][x]==26 || mapArrayTwo[y][x]==27 || mapArrayTwo[y][x]==28 || mapArrayTwo[y][x]==29 || mapArrayTwo[y][x]==30 ||
           mapArrayTwo[y][x]==31 || mapArrayTwo[y][x]==32 || mapArrayTwo[y][x]==33 || mapArrayTwo[y][x]==34 || mapArrayTwo[y][x]==35 || mapArrayTwo[y][x]==36 ||
           mapArrayTwo[y][x]==37 || mapArrayTwo[y][x]==38 || mapArrayTwo[y][x]==39 || mapArrayTwo[y][x]==40 || mapArrayTwo[y][x]==41 || mapArrayTwo[y][x]==42 ||
           mapArrayTwo[y][x]==43 || mapArrayTwo[y][x]==44 || mapArrayTwo[y][x]==45 || mapArrayTwo[y][x]==46 || mapArrayTwo[y][x]==47 || mapArrayTwo[y][x]==48 ||
           mapArrayTwo[y][x]==49 || mapArrayTwo[y][x]==50 || mapArrayTwo[y][x]==51 || mapArrayTwo[y][x]==52 || mapArrayTwo[y][x]==53 || mapArrayTwo[y][x]==55 ||
           mapArrayTwo[y][x]==57)
        {
            x=xbefore;
            y=ybefore;
        }
    }
}

void interaction_world()
{
    if(mapArrayTwo[y+1][x]==2 || mapArrayTwo[y-1][x]==2 || mapArrayTwo[y][x+1]==2 || mapArrayTwo[y][x-1]==2)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==3 || mapArrayTwo[y-1][x]==3 || mapArrayTwo[y][x+1]==3 || mapArrayTwo[y][x-1]==3)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==4 || mapArrayTwo[y-1][x]==4 || mapArrayTwo[y][x+1]==4 || mapArrayTwo[y][x-1]==4)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==5 || mapArrayTwo[y-1][x]==5 || mapArrayTwo[y][x+1]==5 || mapArrayTwo[y][x-1]==5)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==6 || mapArrayTwo[y-1][x]==6 || mapArrayTwo[y][x+1]==6 || mapArrayTwo[y][x-1]==6)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==7 || mapArrayTwo[y-1][x]==7 || mapArrayTwo[y][x+1]==7 || mapArrayTwo[y][x-1]==7)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==8 || mapArrayTwo[y-1][x]==8 || mapArrayTwo[y][x+1]==8 || mapArrayTwo[y][x-1]==8)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==9 || mapArrayTwo[y-1][x]==9 || mapArrayTwo[y][x+1]==9 || mapArrayTwo[y][x-1]==9)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==10 || mapArrayTwo[y-1][x]==10 || mapArrayTwo[y][x+1]==10 || mapArrayTwo[y][x-1]==10)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==11 || mapArrayTwo[y-1][x]==11 || mapArrayTwo[y][x+1]==11 || mapArrayTwo[y][x-1]==11)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==12 || mapArrayTwo[y-1][x]==12 || mapArrayTwo[y][x+1]==12 || mapArrayTwo[y][x-1]==12)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==13 || mapArrayTwo[y-1][x]==13 || mapArrayTwo[y][x+1]==13 || mapArrayTwo[y][x-1]==13)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==14 || mapArrayTwo[y-1][x]==14 || mapArrayTwo[y][x+1]==14 || mapArrayTwo[y][x-1]==14)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==15 || mapArrayTwo[y-1][x]==15 || mapArrayTwo[y][x+1]==15 || mapArrayTwo[y][x-1]==15)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==16 || mapArrayTwo[y-1][x]==16 || mapArrayTwo[y][x+1]==16 || mapArrayTwo[y][x-1]==16)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==17 || mapArrayTwo[y-1][x]==17 || mapArrayTwo[y][x+1]==17 || mapArrayTwo[y][x-1]==17)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==18 || mapArrayTwo[y-1][x]==18 || mapArrayTwo[y][x+1]==18 || mapArrayTwo[y][x-1]==18)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==19 || mapArrayTwo[y-1][x]==19 || mapArrayTwo[y][x+1]==19 || mapArrayTwo[y][x-1]==19)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==20 || mapArrayTwo[y-1][x]==20 || mapArrayTwo[y][x+1]==20 || mapArrayTwo[y][x-1]==20)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==21 || mapArrayTwo[y-1][x]==21 || mapArrayTwo[y][x+1]==21 || mapArrayTwo[y][x-1]==21)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==22 || mapArrayTwo[y-1][x]==22 || mapArrayTwo[y][x+1]==22 || mapArrayTwo[y][x-1]==22)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==23 || mapArrayTwo[y-1][x]==23 || mapArrayTwo[y][x+1]==23 || mapArrayTwo[y][x-1]==23)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==24 || mapArrayTwo[y-1][x]==24 || mapArrayTwo[y][x+1]==24 || mapArrayTwo[y][x-1]==24)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==25 || mapArrayTwo[y-1][x]==25 || mapArrayTwo[y][x+1]==25 || mapArrayTwo[y][x-1]==25)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==26 || mapArrayTwo[y-1][x]==26 || mapArrayTwo[y][x+1]==26 || mapArrayTwo[y][x-1]==26)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==27 || mapArrayTwo[y-1][x]==27 || mapArrayTwo[y][x+1]==27 || mapArrayTwo[y][x-1]==27)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==28 || mapArrayTwo[y-1][x]==28 || mapArrayTwo[y][x+1]==28 || mapArrayTwo[y][x-1]==28)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==29 || mapArrayTwo[y-1][x]==29 || mapArrayTwo[y][x+1]==29 || mapArrayTwo[y][x-1]==29)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==30 || mapArrayTwo[y-1][x]==30 || mapArrayTwo[y][x+1]==30 || mapArrayTwo[y][x-1]==30)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==31 || mapArrayTwo[y-1][x]==31 || mapArrayTwo[y][x+1]==31 || mapArrayTwo[y][x-1]==31)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==32 || mapArrayTwo[y-1][x]==32 || mapArrayTwo[y][x+1]==32 || mapArrayTwo[y][x-1]==32)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==33 || mapArrayTwo[y-1][x]==33 || mapArrayTwo[y][x+1]==33 || mapArrayTwo[y][x-1]==33)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==34 || mapArrayTwo[y-1][x]==34 || mapArrayTwo[y][x+1]==34 || mapArrayTwo[y][x-1]==34)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==35 || mapArrayTwo[y-1][x]==35 || mapArrayTwo[y][x+1]==35 || mapArrayTwo[y][x-1]==35)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==36 || mapArrayTwo[y-1][x]==36 || mapArrayTwo[y][x+1]==36 || mapArrayTwo[y][x-1]==36)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==37 || mapArrayTwo[y-1][x]==37 || mapArrayTwo[y][x+1]==37 || mapArrayTwo[y][x-1]==37)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==38 || mapArrayTwo[y-1][x]==38 || mapArrayTwo[y][x+1]==38 || mapArrayTwo[y][x-1]==38)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==39 || mapArrayTwo[y-1][x]==39 || mapArrayTwo[y][x+1]==39 || mapArrayTwo[y][x-1]==39)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==40 || mapArrayTwo[y-1][x]==40 || mapArrayTwo[y][x+1]==40 || mapArrayTwo[y][x-1]==40)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==41 || mapArrayTwo[y-1][x]==41 || mapArrayTwo[y][x+1]==41 || mapArrayTwo[y][x-1]==41)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==42 || mapArrayTwo[y-1][x]==42 || mapArrayTwo[y][x+1]==42 || mapArrayTwo[y][x-1]==42)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==43 || mapArrayTwo[y-1][x]==43 || mapArrayTwo[y][x+1]==43 || mapArrayTwo[y][x-1]==43)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==44 || mapArrayTwo[y-1][x]==44 || mapArrayTwo[y][x+1]==44 || mapArrayTwo[y][x-1]==44)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==45 || mapArrayTwo[y-1][x]==45 || mapArrayTwo[y][x+1]==45 || mapArrayTwo[y][x-1]==45)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==46 || mapArrayTwo[y-1][x]==46 || mapArrayTwo[y][x+1]==46 || mapArrayTwo[y][x-1]==46)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==47 || mapArrayTwo[y-1][x]==47 || mapArrayTwo[y][x+1]==47 || mapArrayTwo[y][x-1]==47)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==48 || mapArrayTwo[y-1][x]==48 || mapArrayTwo[y][x+1]==48 || mapArrayTwo[y][x-1]==48)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==49 || mapArrayTwo[y-1][x]==49 || mapArrayTwo[y][x+1]==49 || mapArrayTwo[y][x-1]==49)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==50 || mapArrayTwo[y-1][x]==50 || mapArrayTwo[y][x+1]==50 || mapArrayTwo[y][x-1]==50)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==51 || mapArrayTwo[y-1][x]==51 || mapArrayTwo[y][x+1]==51 || mapArrayTwo[y][x-1]==51)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==52 || mapArrayTwo[y-1][x]==52 || mapArrayTwo[y][x+1]==52 || mapArrayTwo[y][x-1]==52)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==53 || mapArrayTwo[y-1][x]==53 || mapArrayTwo[y][x+1]==53 || mapArrayTwo[y][x-1]==53)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==54 || mapArrayTwo[y-1][x]==54 || mapArrayTwo[y][x+1]==54 || mapArrayTwo[y][x-1]==54)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==55 || mapArrayTwo[y-1][x]==55 || mapArrayTwo[y][x+1]==55 || mapArrayTwo[y][x-1]==55)
    {
        gotoxy(1,30);
        cout<<"not implemented yet";
    }

    else if(mapArrayTwo[y+1][x]==57 || mapArrayTwo[y-1][x]==57 || mapArrayTwo[y][x+1]==57 || mapArrayTwo[y][x-1]==57)
    {
       system("cls");
       x=54,y=4;
       pub=true;
       #include "pub.h"
       world=false;
       system("cls");
       x=26,y=9;
    }
    //use this for the other numbers, just copy and paste, also clr() can't be used here since it would delete part of the map
}

#endif // FUNCTIONS_WORLD_H_INCLUDED
