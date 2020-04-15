#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "game.h"

int main(void) {
    srand(time(NULL));

    Map map;

    create_map(&map);

short movement;

    while(1) {
        display_map(&map);
        movement = ask_movement();
        move(movement, &map);

        printf("pX : %d ; pY : %d\n", map.pX, map.pY);
    }

    return 0;
}