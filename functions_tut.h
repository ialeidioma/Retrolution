#ifndef FUNCTIONS_TUT_H_INCLUDED
#define FUNCTIONS_TUT_H_INCLUDED
void drawtut()
{
    for(i=0;i<10;i++)
    {
        for(j=0;j<39;j++)
        {
            switch(mapArrayThree[i][j])
            {
            case 0:
                cout<<" ";
                break;
            case 1:
                cout<<char(219);
                break;
            case 2:
                cout<<":";
                break;
            case 3:
                cout<<".";
                break;
            case 4:
                cout<<":";
                break;
            case 5:
                cout<<"C";
                break;
            case 6:
                cout<<" ";
                break;
            }
        }
        cout<<"\n";
    }
}


void movement_tut()
{
    while(tut)
    {
        if(mapArrayThree[ybefore][xbefore] == 2 || mapArrayThree[ybefore][xbefore] == 3)
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
            interaction_tut();
        if(mapArrayThree[y][x]==1 || mapArrayThree[y][x]==5)
        {
            x=xbefore;
            y=ybefore;
        }

        else if(mapArrayThree[y][x]==2 || mapArrayThree[y][x]==3 || mapArrayThree[y][x]==4)
            {
                if(doop)
                {
                    doop=false;
                }
                else
                {
                    x=xbefore;
                    y=ybefore;
                }
            }
        else if(mapArrayThree[ybefore][xbefore]==2)
            {
                gotoxy(2,1);
                cout<<":";
                gotoxy(20,1);
                cout<<":";
                gotoxy(28,1);
                cout<<":";
            }
        else if(mapArrayThree[ybefore][xbefore]==3)
            {
                gotoxy(10,3);
                cout<<".";
                gotoxy(11,5);
                cout<<".";
                gotoxy(11,7);
                cout<<".";
                gotoxy(20,4);
                cout<<".";
                gotoxy(25,4);
                cout<<".";
            }
        else if(mapArrayThree[ybefore][xbefore+1]==6)
        {
            gotoxy(0,15);
            cout<<"see that ? well that is a door XD\n";
            Sleep(2000);
            cout<<"in order to open a door you need to turn the handle\n";
            Sleep(2000);
            cout<<"that was obvious eh ? XD\n";
            Sleep(2000);
            cout<<"right right i won't make you lose more time, when you need to interact with something you need to PRESS E and it will magically work\n\n";
            system("pause");
            clr();
        }
    }
}

void interaction_tut()
{
    if(mapArrayThree[y+1][x]==2 || mapArrayThree[y-1][x]==3 || mapArrayThree[y][x+1]==2 || mapArrayThree[y][x-1]==3 ||
       mapArrayThree[y-1][x]==2 || mapArrayThree[y+1][x]==3 || mapArrayThree[y][x-1]==2 || mapArrayThree[y][x+1]==3)
       doop=true;
    else if(mapArrayThree[y][x+1]==4)
    {
        if(key)
        {
            gotoxy(0,15);
            cout<<"well you seem to be doing just fine!\n";
            Sleep(2500);
            cout<<"now the game starts! Have fun!";
            Sleep(2500);
            tut=false;
        }
        else
        {
            gotoxy(0,15);
            cout<<"you don't seem to have the key, you can't open this\n";
            cout<<"maybe you can find a chest ?";
            Sleep(3000);
            clr();
        }
    }
    else if(mapArrayThree[y+1][x]==5 || mapArrayThree[y-1][x]==5 || mapArrayThree[y][x+1]==5 || mapArrayThree[y][x-1]==5)
    {
        key=true;
        gotoxy(0,15);
        cout<<"you take out the key";
        Sleep(2000);
        clr();
    }
}


#endif // FUNCTIONS_TUT_H_INCLUDED
