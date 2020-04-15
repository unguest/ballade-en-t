#ifndef __GAME__H
#define __GAME__H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Map {

    int pX;
    int pY;
    int xMax;
    int yMax;

} Map;

void create_map(Map *map);
void display_map(Map *map);
void move(short movement, Map *map);
short ask_movement();

#endif