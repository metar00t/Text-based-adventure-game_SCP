#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "inventar.h"
#include "Story.c"


// Spielstart
void startGame() 
{
    printf("\n \nSpiel wird gestartet: \n \n");
    starting_room();
}

void SCP_FILEREADER(const char *dateiname)
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


//Korrosives Loch

void easter_egg_larry()
{
    const char *larry = "Larry.txt";

    printf("\n\nDu springst elegant hinein und landest perfekt.\n");
    printf("Du schaust dich um und siehst SCP-106 (auch Larry genannt).\n\n");
    SCP_FILEREADER(larry);
    printf("\n\nLarry war nicht erfreut das du in sein Loch gesprungen bist und zögert nicht lange dich zu töten.\n\n");
    printf("Game Over (Du hast Larry gefunden! :D)\n\n");
    printf("Infos zu SCP-106 sind im folgenden Link → ");
    printf("file:///mnt/C/Users/adamsdav/Nextcloud/FIAE2023-1/Gruppenprojekte/SCP_Text-Based-Adventure_Game_Adams_Meyer_Huebscher/SCP-textadventure/SCP-Liste/SCP-106/SCP-106.html \n\n");
}

//Fehlermeldung sowie eine ungültige Eingabe getätigt wurde

void debug()
{
    const char *peanut = "peanut.txt";
    SCP_FILEREADER(peanut);
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

int path6_o (char choice)
{
    if(choice == 'v')
    {
        return true;
    }
    else if (choice == '1')
    {
        return true;
    }
    else if(choice == '2')
    {
        return true;
    }
    else if(choice == '3')
    {
        return true;
    }
    else if(choice == '4')
    {
        return true;
    }
    else if(choice == 'z')
    {
        return true;
    } 
}

//clear Funktion um das terminal aufzuräumen
void clear(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
    }