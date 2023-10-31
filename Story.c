#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Raum 1

void r1_s()
{
    printf("\nDu erwachst in einem Raum, der für dich wie eine Zelle aussieht. \n");
    printf("Wenn du dich umschaust, erkennst du die Leichen von deinen einstigen Kollegen, \n");
    printf("welche durch einen Genickbruch gestorben sind. \n");
    printf("Ohne dich näher zu fragen, was passiert ist, weißt du schon,\n");
    printf("dass du aus dieser Einrichtung entkommen musst. \n \n");
    printf("Vor dir siehst du eine Tür: Möchtest du diese öffnen und durchgehen? \n\n");

    printf("1. Ja \n2. Nein\n");
}

void r1_d_1()
{
    printf("\nDu hast dich entschieden, die Tür zu öffnen und siehst einen leeren Flur. \n");
}

void r1_d_2()
{
    printf("\nDu bist in die Zelle zurück gegangen und wartest, was dazu geführt hat, \n");
    printf("dass du durch das MTF (Mobile Task Force) getötet wurdest.\n");
    printf("\n\nGame Over.\n\n");
}

//Flur 1

void h1_s()
{
    printf("PLÖTZLICH bebt der ganze Komplex und du hörst durch einen Lautsprecher eine Stimme, \n");
    printf("die sagt:\"Achtung an das gesamte Personal! Meldet euch unverzüglich bei [Störsignal]\". \n");
    printf("Voraus siehst du eine weitere verschlossene Tür, die du öffnen könntest.\n\n");
    printf("Traust du dich diese Tür zu öffnen?\n");

    printf("1. Ja \n2. Nein \n");
}

void h1_d_1()
{
    printf("\nVorsichtig öffnest du die Tür und schaust dich um.\n");
    printf("Du siehst einen weiteren Flur mit einem großen Loch der nur vor sich her korridiert.\n");
    printf("Du fragst dich wie tief das Loch ist, bist dennoch nicht neugierig genug es herauszufinden.\n");
    printf("Beim weiteren umsehen kannst du 3 Türen erkennen, weißt aber nicht ob sich dahinter was verbirgt.\n");
    printf("\nAn welche der drei Türen möchtest du herantreten?\n\n");
    printf("1. Die Tür direkt vor dir.\n");
    printf("2. Die Tür zu deiner linken.\n");
    printf("3. Die Tür zu deiner rechten.\n");
    printf("4. Ich will doch ins Loch hüpfen...\n");
}

void h1_d_2()
{
printf("\nDu hast dich dagegen entschieden, was dazu geführt hat, dass eine Kachel, die sich durch das Beben gelockert hat, dir auf den Kopf gefallen ist.\n");
printf("Die Kachel hat sich durch die Wucht in deinen Schädel gebohrt und bist dadurch gestorben.\n");
printf("Wärst du nicht so feige gewesen und durch die Tür gegangen, wärst du wahrscheinlich noch am Leben...\n\n");

printf("Peinliches Game Over...(nicht einmal ein würdiges Ende...)\n\n");
}

//Flur 1 - Tür vorne

void h1_1_d_s()
{
    printf("Du entscheidest dich dazu, die Tür vor dir zu nähern und spürst mit jedem Schritt,\n");
    printf("den du dich der Tür näherst, dass sich vermutlich etwas besonderes dahinter verbirgt.\n\n");
    printf("Sowie du vor der Tür stehst, öffnest du ohne zu zögern die Tür und siehst in dem Raum\n");
    printf("4 weitere Türen die mit jeweils einer digitalen Kennzeichnung versehen sind:\n\n");
    printf("SCP-427\n Level 3 Keycard benötigt.\n");
    printf("SCP-860\n Level 3 Keycard benötigt.\n");
    printf("SCP-714\n Level 3 Keycard benötigt.\n");
    printf("SCP-1025\nLevel 3 Keycard benötigt.\n\n");
    printf("In der Mitte ist allerdings eine unbeschriftete Tür, die schon offen und unbeleuchtet ist.\n");
    printf("Was ist deine Entscheidung?\n\n");
    printf("Geh in den dunklen Raum\n");
    printf("Geh zurück zum Loch\n");
    printf("SCP-427 Kennzeichnung lesen\n");
    printf("SCP-860 Kennzeichnung lesen\n");
    printf("SCP-714 Kennzeichnung lesen\n");
    printf("SCP-1025 Kennzeichnung lesen\n\n");
    printf("(Gib dafür einen der folgenden Möglichkeiten ein, so wie die da stehen)\n");
}


//Hauptmenü

void Main_Menu ()
{
    printf("Hauptmenü:\n");
    printf("1. Start\n");
    printf("2. Credits\n");
    printf("3. Ende\n");

    printf("\nWas möchten Sie gerne tun? \n");
    printf("Geben Sie dafür nur einer der Zahlen ein:");
}

void credits()
{
    printf("Dieses Spiel wurde von 3 Azubis der Unterstufe FiAe entwickelt \n\n");
    printf("Skript: Herr Meyer \n");
    printf("Spieltester: Herr Hübscher \n");
    printf("Coding: Herr Adams \n \n");
    printf("↓↓↓ Herr Meyer hat sich die Zeit genommen und uns seine Version der Website bereitgestellt! ↓↓↓\n");
    printf("file:///Nextcloud/FIAE2023-1/Gruppenprojekte/SCP_Text-Based-Adventure_Game_Adams_Meyer_Huebscher/SCP-textadventure/SCP-Index/SCP-Index.html \n\n");

    printf("Wir hoffen das ihnen das Spiel gefallen hat :-) \n");
}
