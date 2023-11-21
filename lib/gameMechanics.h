#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "inventar.h"

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