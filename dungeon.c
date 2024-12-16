#include "dungeon.h"
#include "player.h"
#include <stdio.h>

//başlangıçta odalar boş
void initDungeon(Tile dungeon[MAX_ROWS][MAX_COLS]) {
    for (int i = 0; i < MAX_ROWS; i++) {
        for (int j = 0; j < MAX_COLS; j++) {
            dungeon[i][j].type = EMPTY;  
        }
    }


    dungeon[5][5].type = EXIT;    
    dungeon[3][3].type = ENEMY;    
    dungeon[2][2].type = TREASURE; 
}


void printDungeon(Tile dungeon[MAX_ROWS][MAX_COLS], Player *player) {
    for (int i = 0; i < MAX_ROWS; i++) {
        for (int j = 0; j < MAX_COLS; j++) {
            if (i == player->x && j == player->y) {
                printf("P ");  // Oyuncunun bulunduğu yer
            } else if (dungeon[i][j].type == EMPTY) {
                printf(". ");  // Boş oda
            } else if (dungeon[i][j].type == TREASURE) {
                printf("H ");  // Hazine odası
            } else if (dungeon[i][j].type == ENEMY) {
                printf("E ");  // Düşman odası
            } else if (dungeon[i][j].type == EXIT) {
                printf("X ");  // Çıkış odası
            }
        }
        printf("\n");
    }
}




