#include "game.h"

#define XMAX 4
#define YMAX 4

void create_map(Map *map) {
    map->xMax = XMAX;
    map->yMax = YMAX;

    map->pX = rand() % XMAX + 1;
    map->pY = rand() % YMAX + 1;
}

void move(short movement, Map *map) {
    switch (movement)
    {
    case 0:
        printf("This isn't a valid command.");
        break;

    case 1: // up-
        if(map->pY + 1 < YMAX)
            map->pY += 1;
        break;
    
    case 2: // down
        if(map->pY - 1 >= 0)
            map->pY -= 1;
        break;
    
    case 3: // left
        if(map->pX - 1 >= 0)
            map->pX -= 1;
        break;

    case 4: // right
        if(map->pX + 1 < XMAX)
            map->pX += 1;
        break;
    
    default:
        printf("This isn't a valid command.");
        break;
    }
}

short ask_movement() {
    printf("BET > \n");
    char command[5];
    fgets(command, 5, stdin);

    if(command[0] != ':') { // If the user enters a direction to take
      command[1] = '\0';
      
    }
    
    command[4] = '\0';
    if (!strcmp(command, "z")) {
        return 1;
    } else if (!strcmp(command, "s")) {
        return 2;
    }  else if (!strcmp(command, "q")) {
        return 3;
    } else if (!strcmp(command, "d")) {
        return 4;
    } else if (!strcmp(command, ":wq!")) {
        printf("</> with <3 by unguest\n");
        exit(0);
    } else {
        return 0;
    }
}

void display_map(Map *map) {
    int i, j;

    for(i = 0; i < YMAX; i++) {
        for(j = 0; j < XMAX; j++) {
            if(i == map->pY && j == map->pX) {
                printf("T");
            } else {
                printf("_|");
            }
        }
        printf("\n");
    }
}