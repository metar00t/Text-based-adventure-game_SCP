#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "inventar.h"
#include "Story.c"
/*
Kürzel Siehe ReadMe Datei
*/

// SCP ASCII Funktion Definierung

void SCP(const char *dateiname)
{
    FILE *datei = fopen(dateiname, "r");

    if (datei)
    {
        char zeile[256];
        while (fgets(zeile, sizeof(zeile), datei))
        {
            printf("%s", zeile);
        }
    
        fclose(datei);
    }
    else
    {
        printf("\n\nDie Datei '%s' konnte nicht geöffnet werden, \n", dateiname);
    }
}

// Spielstart
void startGame() 
{
    printf("\n \nSpiel wird gestartet: \n \n");
    r1_s();
}

//Korrosives Loch

void easter_egg_larry()
{
    const char *dateiname2 = "Larry.txt";

    printf("\n\nDu springst elegant hinein und landest perfekt.\n");
    printf("Du schaust dich um und siehst SCP-106 (auch Larry genannt).\n\n");
    SCP(dateiname2);
    printf("\n\nLarry war nicht erfreut das du in sein Loch gesprungen bist und zögert nicht lange dich zu töten.\n\n");
    printf("Game Over (Du hast Larry gefunden! :D)\n\n");
    printf("Infos zu SCP-106 sind im folgenden Link → ");
    printf("file:///mnt/C/Users/adamsdav/Nextcloud/FIAE2023-1/Gruppenprojekte/SCP_Text-Based-Adventure_Game_Adams_Meyer_Huebscher/SCP-textadventure/SCP-Liste/SCP-106/SCP-106.html \n\n");
}

//Fehlermeldung sowie eine ungültige Eingabe getätigt wurde

void debug()
{
    const char *dateiname1 = "peanut.txt";
    SCP(dateiname1);
    printf("\n\nSCP-173 hat gesehen was du versucht hast und fand das nicht so toll...\n\n");
}

// Für Entscheidungssituationen

int path2_o (char choice)
{
    if (choice == 'j')
    {
        return true;
    }
    else
    if (choice == 'n')
    {
        return false;
    }
}

int path4_o (char choice)
{
    if(choice == 'l')
    {

    }
    else if (choice == 'v')
    {
        return true;
    }
    else if(choice == 'r')
    {

    }
    else if(choice == 'o')
    {
        return true;
    }
}

int main()
{
    int choices;
    Main_Menu();
    scanf("%d",&choices);

switch (choices)
{
    case 1:
    char choice;
    startGame();
    scanf("%s",&choice);
    if(path2_o(choice))
    {
        h1_s();
    }
    else
    {
        r1_d_2();
        exit(1);
    }
    
    scanf("%s", &choice);
    
    if(path2_o(choice))
    {
        h1_d_1();
    }
    else
    {
        h1_d_2();
        exit(2);
    }

    scanf("%s", &choice);

    if(path4_o(choice))
    {
        if(choice == 'l')
        {

        }
        else if(choice == 'v')
        {
            h1_1_d_s();
        }
        else if(choice == 'r')
        {

        }
        else if(choice == 'o')
        {
            easter_egg_larry();
            exit(3);
        }
    }





    
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