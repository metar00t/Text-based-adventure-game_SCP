#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gameMechanics.c"



/*Für die Namensgebung siehe playerLocation.h*/

void starting_room()
{
    const char *startingroom = "../../doc/Storylines/starting_room.txt";

    SCP_FILEREADER(startingroom);
}

void starting_room_d_2()
{
    const char *startingroom_d_2 = "../../doc/Storylines/starting_room_d_2.txt";

    SCP_FILEREADER(startingroom_d_2);
}

void room2_3()
{
    const char *room2_3 = "../../doc/Storylines/room2_3.txt";

    SCP_FILEREADER(room2_3);
}

void room2_3_d_2()
{
    const char *room2_3_d_2 = "../../doc/Storylines/room2_d_2.txt";

    SCP_FILEREADER(room2_3_d_2);
}

void room4()
{
    const char *room4 = "../../doc/Storylines/room4.txt";

    SCP_FILEREADER(room4);
}

void room2scps()
{
    const char *room2scps = "../../doc/Storylines/room2scps.txt";

    SCP_FILEREADER(room2scps);
}

void Main_Menu()
{
    const char *main_menu = "../../src/main_menu.txt";

    SCP_FILEREADER(main_menu);
}

void credits()
{
    const char *credits = "../../src/credits.txt";

    SCP_FILEREADER(credits);
}

// Spielstart
void startGame() 
{
    const char *start = "../../src/start.txt";

    SCP_FILEREADER(start);
    starting_room();
}

//Korrosives Loch

void easter_egg_larry()
{
    const char *larry = "../../src/Larry.txt";

    printf("\n\nDu springst elegant hinein und landest perfekt.\n");
    printf("Du schaust dich um und siehst SCP-106 (auch Larry genannt).\n\n");
    SCP_FILEREADER(larry);
    printf("\n\nLarry war nicht erfreut das du in sein Loch gesprungen bist und zögert nicht lange dich zu töten.\n\n");
    printf("Game Over (Du hast Larry gefunden! :D)\n\n");
}

//Fehlermeldung sowie eine ungültige Eingabe getätigt wurde

void debug()
{
    const char *peanut = "../../src/peanut.txt";
    SCP_FILEREADER(peanut);
    printf("\n\nSCP-173 hat gesehen was du versucht hast und fand das nicht so toll...\n\n");
}
