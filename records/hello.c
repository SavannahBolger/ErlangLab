#include <stdio.h>
#include <stdlib.h>
#include "player.c"

int main()
{
    char A1 = "A1";
	char A2 = "A2";
    char A3 = "A2";
    player P1 = {"Joe", "KillerJoe", 100, A1};
	player P2 = {"Jane", "KillerJane", 100, A2};
    player P3 = {"John", "KillerJohn", 100, A2};

    if(P1.achievements == P2.achievements)
    {
        printf("p1 = p2");
    }
    else if(P1.achievements == P3.achievements)
    {
        printf("p1 = p3");
    }
    else if(P3.achievements == P2.achievements)
    {
        printf("p3 = p2");
    }
    else
    {
        printf("no matches");
    }
    
    //lobby_system:lobby();
    return 0;
}