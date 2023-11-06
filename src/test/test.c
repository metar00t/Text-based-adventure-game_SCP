#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../../lib/gameMechanics.c"
/*
Kürzel Siehe ReadMe Datei
*/

const char key3[] = "keycard 3";


int main()
{
    int choices;
    Main_Menu();
    scanf("%d",&choices);

switch (choices)
{
    case 1:    
        char* playerLocation[99];
        char choice;
       // int choices;

        do
        {
        if(choices == 1)
        {
            choices = 0;
        }

            startGame();
            playerLocation[0] = "r1_s";
            scanf("%s",&choice);

        for(int i = 0; i != 99; i++)
        {
            //Raum h1_s
            if(strcmp(*playerLocation, "r1_s") == 0)
            {
                if(path2_o(choice))
                {
                    room2_3();
                    scanf("%s", &choice);
                    playerLocation[0] = "h1_s";
                }
                else
                {
                    starting_room_d_2();
                    exit(1);
                }
            }
            
            //Raum h1_d_1
            if(strcmp(*playerLocation, "h1_s") == 0)
            {
                if(path2_o(choice))
                {
                    room4();
                    scanf("%s", &choice);
                    playerLocation[0] = "h1_d_1";
                }
                else
                {
                    room2_3_d_2();
                    exit(2);
                }
            }

            //Raum h1_d_1 decision nach welchem Raum
            if(strcmp(*playerLocation, "h1_d_1") == 0)
            {
                if(path4_o(choice))
                {
                    if(choice == 'l')
                    {
                        scanf("%s", &choice);
                    }
                    else if(choice == '2')
                    {
                        room2scps();
                        scanf("%s", &choice);
                        playerLocation[0] = "h1_1_d_s";
                    }
                    else if(choice == '3')
                    {
                        scanf("%s", &choice);
                    }
                    else if(choice == '4' || choice == 'o')
                    {
                        easter_egg_larry();
                        exit(3);
                    }
                }
            }

            //Raum room2scps decision zu welchem Raum
            if (strcmp(*playerLocation, "room2scps") == 0)
            {
                if(path6_o(choice))
                {
                    if(choice == 'v')
                    {
                        scanf("%s", &choice);                    
                    }
                    else if (choice == 'L' && strcmp(inventory[0].name, "keycard 3") == 0)
                    {
                        printf("lol\n");
                        scanf("%s", &choice);
                    }
                    else if(choice == 'l')
                    {
                        scanf("%s", &choice);
                    }
                    else if(choice == '3')
                    {
                        scanf("%s", &choice);
                    }
                    else if(choice == '4')
                    {
                        scanf("%s", &choice);
                    }
                    else if(choice == 'z')
                    {
                        room4();
                        scanf("%s", &choice);
                        playerLocation[0] = "h1_d_1";
                    } 
                }
            }
        }

        printf("Möchtest du es erneut versuchen? (1 = Ja)\n");
        scanf("%d", &choices);
    }
    while (choices == 1);

    break;

    case 2:
    credits();
    break;

    case 3:
    printf("Das Programm wird nun beendet \n");
    exit(0);
    break;

    default:
    debug();
    break;
return 0;
}
}