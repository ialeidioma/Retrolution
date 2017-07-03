#ifndef FUNCTIONS_PUB_H_INCLUDED
#define FUNCTIONS_PUB_H_INCLUDED

void drawpub()
{
    for(i=0;i<15;i++)
    {
        for(j=0;j<57;j++)
        {
            switch(mapArrayFour[i][j])
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
                cout<<":";
                break;
            case 4:
                cout<<"S";
                break;
            case 778:
                cout<<"J";
                break;
            case 6:
                cout<<"#";
                break;
            case 7:
                cout<<"c";
                break;
            case 8:
                cout<<char(2);
                break;
            case 9:
                cout<<"O";
                break;
            case 10:
                cout<<"D";
                break;
            case 11:
                cout<<"!";
                break;
            case 12:
                cout<<"*";
                break;
            case 13:
                cout<<"$";
                break;
            case 14:
                cout<<"o";
                break;
            case 76:
                cout<<":";
                break;
            }
        }
        cout<<"\n";
    }
}

void movement_pub()
{
    while(pub)
    {
        if(mapArrayFour[ybefore][xbefore] == 2 || mapArrayFour[ybefore][xbefore] == 3)
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
            interaction_pub();
        if(mapArrayFour[y][x]==1 || mapArrayFour[y][x]==4 || mapArrayFour[y][x]==778 || mapArrayFour[y][x]==6 || mapArrayFour[y][x]==7 ||
           mapArrayFour[y][x]==8 || mapArrayFour[y][x]==9 || mapArrayFour[y][x]==10 || mapArrayFour[y][x]==11 || mapArrayFour[y][x]==12 ||
           mapArrayFour[y][x]==13 || mapArrayFour[y][x]==14 || mapArrayFour[y][x]==3)
        {
            x=xbefore;
            y=ybefore;
        }
        else if(mapArrayFour[y][x]==76)
        {
            pub=false;
        }
        else if(mapArrayFour[y][x]==2)
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
        else if(mapArrayFour[ybefore][xbefore]==2)
            {
                gotoxy(0,13);
                cout<<":";
                gotoxy(4,1);
                cout<<":";
                gotoxy(55,4);
                cout<<":";
            }
        else if(mapArrayFour[ybefore][xbefore+1]==6)
        {
        }
    }
}

void interaction_pub()
{
    if(mapArrayFour[y+1][x]==2 || mapArrayFour[y-1][x]==3 || mapArrayFour[y][x+1]==2 || mapArrayFour[y][x-1]==3 ||
       mapArrayFour[y-1][x]==2 || mapArrayFour[y+1][x]==3 || mapArrayFour[y][x-1]==2 || mapArrayFour[y][x+1]==3)
       doop=true;

    else if(mapArrayFour[y+1][x]==76 || mapArrayFour[y-1][x]==76 || mapArrayFour[y][x+1]==76 || mapArrayFour[y][x-1]==76)
    {
        system("cls");
        drawworld();
        movementworld();
    }
    else if(mapArrayFour[y+1][x]==4 || mapArrayFour[y-1][x]==4 || mapArrayFour[y][x+1]==4 || mapArrayFour[y][x-1]==4)
    {
        srand(time(0));
        int randNum1 = (rand() % 3 + 1);
        int randNum2 = (rand() % 3 + 1);
        int randNum3 = (rand() % 3 + 1);
        int bet = 0;
        int num1 = randNum1;
        int num2 = randNum2;
        int num3 = randNum3;
        gotoxy(1,15);
        cout<<"You start the slot machine...\n";
        cout<<"You need to get 3 same numbers\n";
        Sleep(2000);
        bet:
        cout<<"How much do you want to bet?\n";
        cin>>bet;
        if(bet>player_money)
        {
            cout<<"you don't have that much\n";
            goto bet;
        }
        else if(bet<0)
        {
            cout<<"bet must be at least 1\n";
            goto bet;
        }
        player_money = player_money - bet;
        cout<<"Great.. Let's SPIN!\n";
        Sleep(2000);
        cout<<num1 << "\n";
        Sleep(500);
        cout<<num2 << "\n";
        Sleep(500);
        cout<<num3 << "\n";
        Sleep(2000);
        if(num1==num2==num3)
        {
            cout<<"YOU WIN\n";
            Sleep(2000);
            player_money = player_money + bet + bet;
        }
        else
        {
            cout<<"You lost.. :(\n";
            Sleep(2000);
        }
    }
    else if(mapArrayFour[y+1][x]==778 || mapArrayFour[y-1][x]==778 || mapArrayFour[y][x+1]==778 || mapArrayFour[y][x-1]==778)
    {
        string j_coin;
        string j_song;
        gotoxy(1,15);
        cout<< "\a";
        cout<< "You turned on the Jukebox\n";
        cout<< "Please enter a coin (y/n)\n";
        getline(cin, j_coin);
        if(j_coin == "y" || j_coin == "Y")
        {
            player_money--;
            cout<< "Now you can choose a song:\n";
            cout<< "a)Justin Bieber Baby\n";
            cout<< "b)Shake it off\n";
            cout<< "c)PSY-Gangnam style\n";
            cout<< "d)PSY-Gentleman\n";
            cout<< "e)Guns N' Roses - Welcome To The Jungle\n";
            getline(cin, j_song);
            if(j_song == "a")
            {
                cout<<"Justin Bieber Baby is playing\n";
                Sleep(1500);
                music_playing_pub == "a";
            }
            else if(j_song == "b")
            {
                cout<<"Shake it off is playing\n";
                Sleep(1500);
                music_playing_pub == "b";
            }
            else if(j_song == "c")
            {
                cout<<"PSY-Gangnam style is playing\n";
                Sleep(1500);
                music_playing_pub == "c";
            }
            else if(j_song == "d")
            {
                cout<<"PSY-Gentleman is playing\n";
                Sleep(1500);
                music_playing_pub == "d";
            }
            else if(j_song == "e")
            {
                cout<<"Guns N' Roses - Welcome To The Jungle is playing\n";
                Sleep(1500);
                music_playing_pub == "e";
            }
            else
            {
                cout<<"Enter a letter please...\n";
                Sleep(1500);
            }
        }
        else if(j_coin == "n" || j_coin == "N")
        {
            cout<<"Too bad, Good Bye!\n";
        }
        else
        {
            cout<<"Y OR N ???!!!\n";
            Sleep(1500);
        }
    }
    else if(mapArrayFour[y+1][x]==7 || mapArrayFour[y-1][x]==7 || mapArrayFour[y][x+1]==7 || mapArrayFour[y][x-1]==7)
    {
        gotoxy(1,15);
        cout<<"You sit on the chair...";
        Sleep(1500);
    }
    else if(mapArrayFour[y+1][x]==8 || mapArrayFour[y-1][x]==8 || mapArrayFour[y][x+1]==8 || mapArrayFour[y][x-1]==8)
    {
        gotoxy(1,15);
        cout<<"Buzz off kid....";
        Sleep(1500);
    }
    else if(mapArrayFour[y+1][x]==10 || mapArrayFour[y-1][x]==10 || mapArrayFour[y][x+1]==10 || mapArrayFour[y][x-1]==10)
    {
        gotoxy(1,15);
        cout<<"HEY!? Don't touch those drinks kid !";
        Sleep(2000);
    }
    else if(mapArrayFour[y+1][x]==11 || mapArrayFour[y-1][x]==11 || mapArrayFour[y][x+1]==11 || mapArrayFour[y][x-1]==11)
    {
        gotoxy(1,15);
        string wanna_play;
        cout<<"You wanna play a game of cards? (y/n)\n";
        getline(cin, wanna_play);
        if(wanna_play == "y" || wanna_play == "Y")
        {
            cout<<"feature not yet implemented..\n";
            Sleep(1500);
        }
        else if(wanna_play == "n" || wanna_play == "N")
        {
            cout<<"Okay.. Bye!\n";
            Sleep(1500);
        }
        else
        {
            cout<<"Yes or no ???";
            Sleep(1500);
        }
    }
    else if(mapArrayFour[y+1][x]==12 || mapArrayFour[y-1][x]==12 || mapArrayFour[y][x+1]==12 || mapArrayFour[y][x-1]==12)
    {
        gotoxy(1,15);
        int pub_choice_1;
        int pub_choice_2;
        cout<<"Hello, welcome to the pub " << player_name << ", what can I do for you ?\n";
        cout<<"1)Buy\n";
        cout<<"2)Tell me about this pub\n";
        cin>>pub_choice_1;
        if(pub_choice_1 == 1)
        {
            cout<<"We have the best drinks in town, tell me , are you looking for something particular ?\n";
            cout<<"1)Beer 5$\n";
            cout<<"2)Whisky 10$\n";
            cout<<"3)Votka 15$\n";
            cin>>pub_choice_2;
            if(pub_choice_2 == 1)
            {
                cout<<"Ah, Good old beer, nice choice my friend... here you go\n";
                alcohol_level++;
                player_money -= 5;
                Sleep(2000);
                if(alcohol_level == 3)
                    system("color 49");
            }
            else if(pub_choice_2 == 2)
            {
                cout<<"Ah, a strong whisky, not as strong as votka, but just the right ammount... here you go\n";
                alcohol_level += 2;
                player_money -= 10;
                Sleep(2000);
                if(alcohol_level == 3)
                    system("color 49");
            }
            else if(pub_choice_2 == 3)
            {
                cout<<"Wow, a very strong votka, don't mess around with that, here you go\n";
                alcohol_level += 3;
                player_money -= 15;
                Sleep(2000);
                if(alcohol_level == 3)
                    system("color 49");
            }
            else
            {
                cout<<"Please choose a number...";
                Sleep(1500);
            }
        }
        else if(pub_choice_1 == 2)
        {
            cout<<"Well this is one heck of a place, a bit rusty but all our good old friends come here every day, because it brings memories of the old days, anyways.. Here you can have a lot of fun by taking a drink and chatting with some guys, or maybe you could play some music on that jukebox,if it still works...We also have slot machines and a lot of guys on that table over there play cards if you wanna test your luck there...But yeah... That is pretty much it, go on and have fun!\n";
            system("pause");
        }
        else
        {
            cout<<"Please enter a number...";
            Sleep(1500);
        }

    }
    else if(mapArrayFour[y+1][x]==14 || mapArrayFour[y-1][x]==14 || mapArrayFour[y][x+1]==14 || mapArrayFour[y][x-1]==14)
    {
        gotoxy(1,15);
        cout<<"You sit on the chair...";
        Sleep(1500);
    }
    else if(mapArrayFour[y+1][x]==13 || mapArrayFour[y-1][x]==13 || mapArrayFour[y][x+1]==13 || mapArrayFour[y][x-1]==13)
    {
        gotoxy(1,15);
        cout<<"HEY!? Don't touch my cash register kid !";
        Sleep(2000);
    }
    gotoxy(0,15);
        for(i=0;i<1000;i++)
            cout<<" ";
}


#endif // FUNCTIONS_PUB_H_INCLUDED
