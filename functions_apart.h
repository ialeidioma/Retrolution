#ifndef FUNCTIONS_APART_H_INCLUDED
#define FUNCTIONS_APART_H_INCLUDED
void drawapart()

{
    for(i=0;i<15;i++)
    {
        for(j=0;j<35;j++)
        {
            switch(mapArrayOne[i][j])
            {
            case 23:
                cout<<"T"; //T = part of TV
                break;
            case 3:
                cout<<"B"; //B = part of bed
                break;
            case 20:
                cout<<"B"; //B = trash bin
                break;
            case 4:
                cout<<char(95); //_ = part of bed
                break;
            case 21:
                cout<<char(95); //_ = part of couch
                break;
            case 5:
                cout<<"T"; //T = Table
                break;
            case 6:
                cout<<"V"; //V = part of TV
                break;
            case 7:
                cout<<"C"; //C = chair
                break;
            case 8:
                cout<<"L"; //L = closet
                break;
            case 9:
                cout<<char(92); // \ = part of couch
                break;
            case 10:
                cout<<char(47); // / = part of couch
                break;
            case 11:
                cout<<"D"; // D = drawer
                break;
            case 12:
                cout<<char(45); // - = shelf
                break;
            case 13:
                cout<<"P"; // P = PC
                break;
            case 14:
                cout<<char(46); // . = inside door horizontal
                break;
            case 15:
                cout<<char(38); // & = shower
                break;
            case 16:
                cout<<"S"; // S = Stove
                break;
                ///////T//// // this is here just cause its funny because when you read it from S then go straight down and it says STFU , also its here to confuse you , but mostly the first part ... PS delete this xD
            case 17:
                cout<<"F"; // F = Fridge
                break;
            case 18:
                cout<<"U"; // U = Sink
                break;
            case 19:
                cout<<"O"; // O = Toilet
                break;
            case 0:
                cout<<" "; //   = Emptiness xD
                break;
            case 1:
                cout<<char(219); // | = wall
                break;
            case 2:
                cout<<":"; // : = Door
                break;
            case 22:
                cout<<":"; // : = inside door
                break;
            }
        }
        cout << "\n";
    }
}



void movement()
{
    int xbefore=1;
    int ybefore=1;

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
            interaction();

        if(mapArrayOne[y][x]==1 || mapArrayOne[y][x]==23 || mapArrayOne[y][x]==20 || mapArrayOne[y][x]==6 || mapArrayOne[y][x]==21 ||
           mapArrayOne[y][x]==5 || mapArrayOne[y][x]==7 || mapArrayOne[y][x]==8 || mapArrayOne[y][x]==9 || mapArrayOne[y][x]==10 ||
           mapArrayOne[y][x]==11 || mapArrayOne[y][x]==12 || mapArrayOne[y][x]==13 || mapArrayOne[y][x]==15 || mapArrayOne[y][x]==16 ||
           mapArrayOne[y][x]==17 || mapArrayOne[y][x]==18 || mapArrayOne[y][x]==19)
        {
            x=xbefore;
            y=ybefore;
        }
        else if(mapArrayOne[y][x]==14 || mapArrayOne[y][x]==22)
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
        else if(mapArrayOne[y][x]==2)
            break;
        else if(mapArrayOne[ybefore][xbefore]==3)
            {
                gotoxy(1,1);
                cout<<"B";
            }
        else if(mapArrayOne[ybefore][xbefore]==4)
        {
            gotoxy(2,1);
            cout<<char(95);
            cout<<char(95);
        }
        else if(mapArrayOne[ybefore][xbefore]==22)
        {
            gotoxy(14,4);
            cout<<":";
            gotoxy(30,9);
            cout<<":";
        }
        else if(mapArrayOne[ybefore][xbefore]==14)
        {
            gotoxy(33,10);
            cout<<".";
            gotoxy(26,10);
            cout<<".";
        }
    }
}

void interaction()
{

    if(mapArrayOne[y+1][x]==3 || mapArrayOne[y-1][x]==3 || mapArrayOne[y][x+1]==3 || mapArrayOne[y][x-1]==3)
    {

        gotoxy(1,15);
        cout<<"This is your bed, do you want to go to sleep ?\n";
        Sleep(1000);
        cout<<"Y/N\n";
        cin>>inputkey;

      if(inputkey == 'y')
      {
        gotoxy(5,16);
        for(i=0;i<5;i++)
            cout<<"\b";
        gotoxy(40,15);
        for(i=0;i<40;i++)
            cout<<"\b";
        for(i=0;i<700;i++)
            cout<<" ";

        gotoxy(1,15);
            cout<<"You are sleeping....";
            alcohol_level == 0;
        if(day)
        {
            system("color 0f");
            day=0;
        }
        else
        {
            system("color f0");
            day=1;
        }

      }
      else if(inputkey=='n')
      {
        gotoxy(1,18);
        cout<<"no ? ok...";
      }
      else
      {
        gotoxy(1,18);
        cout<<"you didn't enter one of the options";
      }

    }
    else if(mapArrayOne[y+1][x]==20 || mapArrayOne[y-1][x]==20 || mapArrayOne[y][x+1]==20 || mapArrayOne[y][x-1]==20)
    {
        gotoxy(1,15);
        cout<<"You have opened the trash bin...";
    }
    else if(mapArrayOne[y+1][x]==6 || mapArrayOne[y-1][x]==6 || mapArrayOne[y][x+1]==6 || mapArrayOne[y][x-1]==6 || mapArrayOne[y+1][x]==23 || mapArrayOne[y-1][x]==23 || mapArrayOne[y][x+1]==23 || mapArrayOne[y][x-1]==23)
    {
        gotoxy(1,15);
        if (tv == true)
        {
        cout<<"You turned OFF the TV";
        tv = !tv;
        }
        else
        {
        cout<<"You turned ON the TV";
        tv = !tv;
        }
    }
    else if(mapArrayOne[y+1][x]==5 || mapArrayOne[y-1][x]==5 || mapArrayOne[y][x+1]==5 || mapArrayOne[y][x-1]==5)
    {
        gotoxy(1,15);
        cout<<"Empty table...";
    }
    else if(mapArrayOne[y+1][x]==7 || mapArrayOne[y-1][x]==7 || mapArrayOne[y][x+1]==7 || mapArrayOne[y][x-1]==7)
    {
        gotoxy(1,15);
        cout<<"You sit on the chair...";
    }
    else if(mapArrayOne[y+1][x]==8 || mapArrayOne[y-1][x]==8 || mapArrayOne[y][x+1]==8 || mapArrayOne[y][x-1]==8)
    {
        gotoxy(1,15);
        cout<<"You open your closet...\n";
        cout<<"there is:\n" << closet_tshirt << " tshirt\n" << closet_jeans << " jeans\n" << closet_shoes << " shoes\n";
        Sleep(600);
        cout<<"What would you like to do ? Take/Put\n";
        getline(cin, closet);
        if(closet == "Take" || closet == "take")
        {
            cout<<"\nWhat do you want to take?\n";
            getline(cin, closet);
            if(closet == "Jeans" || closet == "jeans" && closet_jeans > 0)
            {
                cout<<"\nYou took 1 jeans";
                closet_jeans--;
                jeans++;
            }
            else if(closet == "Tshirt" || closet == "tshirt" && closet_tshirt > 0)
            {
                cout<<"\nYou took 1 tshirt";
                closet_tshirt--;
                tshirt++;
            }
            else if(closet == "Shoes" || closet == "shoes" && closet_shoes > 0)
            {
                closet_shoes--;
                shoes++;
                cout<<"\nYou took 1 shoes";
            }
            else
                cout<<"\nTshirt,shoes,jeans etc.? There might not be any inside...";
        }
        else if(closet == "Put" || closet == "put")
        {
            cout<<"\nWhat do you want to put in?\nTshirt,jeans,shoes etc.\n";
            getline(cin, closet);
                if(closet == "Jeans" || closet == "jeans" && jeans > 0)
                {
                    jeans--;
                    closet_jeans++;
                    cout<<"You left 1 jeans in closet, there is now: " << closet_jeans;
                }
                else if(closet == "Tshirt" || closet == "tshirt" && tshirt > 0)
                {
                    tshirt--;
                    closet_tshirt++;
                    cout<<"You left 1 tshirt in closet, there is now: " << closet_tshirt;
                }
                else if(closet == "Shoes" || closet == "shoes" && shoes > 0)
                {
                    shoes--;
                    closet_shoes++;
                    cout<<"You left 1 pair of shoes in closet, there is now: " << closet_shoes;
                }
                else
                    cout<<"Tshirt,shoes,jeans etc.? You might not have any ...";
        }
        else
            cout<<"Take or Put ?";
    }
    else if(mapArrayOne[y+1][x]==9 || mapArrayOne[y-1][x]==9 || mapArrayOne[y][x+1]==9 || mapArrayOne[y][x-1]==9 ||
            mapArrayOne[y+1][x]==21 || mapArrayOne[y-1][x]==21 || mapArrayOne[y][x+1]==21 || mapArrayOne[y][x-1]==21 ||
            mapArrayOne[y+1][x]==10 || mapArrayOne[y-1][x]==10 || mapArrayOne[y][x+1]==10 || mapArrayOne[y][x-1]==10)
    {
        gotoxy(1,15);
        cout<<"Couch...";
    }
    else if(mapArrayOne[y+1][x]==11 || mapArrayOne[y-1][x]==11 || mapArrayOne[y][x+1]==11 || mapArrayOne[y][x-1]==11)
    {
        gotoxy(1,15);
        cout<<"You open your drawers...\n";
        cout<<"there is:\n" << drawers_socks << " socks\n" << drawers_underwear << " underwear\n";
        Sleep(600);
        cout<<"What would you like to do ? Take/Put\n";
        getline(cin, drawers);
        if(drawers == "Take" || drawers == "take")
        {
            cout<<"\nWhat do you want to take?\n";
            getline(cin, drawers);
            if(drawers == "Socks" || drawers == "socks" && drawers_socks > 0)
            {
                cout<<"\nYou took 1 pair of socks";
                drawers_socks--;
                socks++;
            }
            else if(drawers == "Underwear" || drawers == "underwear" && drawers_underwear > 0)
            {
                drawers_underwear--;
                underwear++;
                cout<<"\nYou took 1 underwear";
            }
            else
                cout<<"\nSocks or Underwear? There might not be any inside...";
        }
        else if(drawers == "Put" || drawers == "put")
        {
            cout<<"\nWhat do you want to put in?\nSocks or Underwear?\n";
            getline(cin, drawers);
                if(drawers == "Socks" || drawers == "socks" && socks > 0)
                {
                    socks--;
                    drawers_socks++;
                    cout<<"You left 1 pair of socks in drawers, there is now: " << drawers_socks;
                }
                else if(drawers == "Underwear" || drawers == "underwear" && underwear > 0)
                {
                    underwear--;
                    drawers_underwear++;
                    cout<<"You left 1 underwear in drawers, there is now: " << drawers_underwear;
                }
                else
                    cout<<"Socks or Underwear? You might not have any ...";
        }
        else
            cout<<"Take or Put ?";
    }
    else if(mapArrayOne[y+1][x]==12 || mapArrayOne[y-1][x]==12 || mapArrayOne[y][x+1]==12 || mapArrayOne[y][x-1]==12)
    {
        gotoxy(1,15);
        cout<<"You browse the books on your shelves...";
    }
    else if(mapArrayOne[y+1][x]==13 || mapArrayOne[y-1][x]==13 || mapArrayOne[y][x+1]==13 || mapArrayOne[y][x-1]==13)
    {

        gotoxy(1,15);
        if (pc == true)
        {
        cout<<"You turned OFF the PC";
        pc = !pc;
        }
        else
        {
        cout<<"You turned ON the PC";
        pc = !pc;
        }
    }
    else if(mapArrayOne[y+1][x]==14 || mapArrayOne[y-1][x]==14 || mapArrayOne[y][x+1]==14 || mapArrayOne[y][x-1]==14 ||
            mapArrayOne[y+1][x]==22 || mapArrayOne[y-1][x]==22 || mapArrayOne[y][x+1]==22 || mapArrayOne[y][x-1]==22)
            doop=true;

    else if(mapArrayOne[y+1][x]==15 || mapArrayOne[y-1][x]==15 || mapArrayOne[y][x+1]==15 || mapArrayOne[y][x-1]==15)
    {
        gotoxy(1,15);
        if(jeans == 0 && tshirt == 0 && shoes == 0)
        cout<<"You take a shower...";
        else
        cout<<"You can't take a shower with your clothes on....";
        Sleep(500);
    }
    else if(mapArrayOne[y+1][x]==16 || mapArrayOne[y-1][x]==16 || mapArrayOne[y][x+1]==16 || mapArrayOne[y][x-1]==16)
    {
        gotoxy(1,15);
        cout<<"What would you like to cook?";
    }
    else if(mapArrayOne[y+1][x]==17 || mapArrayOne[y-1][x]==17 || mapArrayOne[y][x+1]==17 || mapArrayOne[y][x-1]==17)
    {
        gotoxy(1,15);
        cout<<"You open the fridge...";
    }
    else if(mapArrayOne[y+1][x]==18 || mapArrayOne[y-1][x]==18 || mapArrayOne[y][x+1]==18 || mapArrayOne[y][x-1]==18)
    {
        gotoxy(1,15);
        cout<<"You wash your hands...";
    }
    else if(mapArrayOne[y+1][x]==19 || mapArrayOne[y-1][x]==19 || mapArrayOne[y][x+1]==19 || mapArrayOne[y][x-1]==19)
    {
        gotoxy(1,15);
        cout<<"Toilet...";
    }

    Sleep(1000);
    clr();
}


#endif // FUNCTIONS_APART_H_INCLUDED
