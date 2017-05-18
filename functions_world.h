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
    while(true)
    {
        if(mapArrayOne[ybefore][xbefore]==3 || mapArrayOne[ybefore][xbefore]==4 || mapArrayOne[ybefore][xbefore]==22 || mapArrayOne[ybefore][xbefore]==14)
        {}
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
        else if(inputkey=='e') //player triggers interaction
            interaction();
        if(mapArrayTwo[y][x]==1)
        {
            x=xbefore;
            y=ybefore;
        }
    }
}



#endif // FUNCTIONS_WORLD_H_INCLUDED
