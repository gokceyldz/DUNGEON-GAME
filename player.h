#ifndef PLAYER_H
#define PLAYER_H
#include "dungeon.h" 

typedef struct {
    int x;       
    int y;       
    int health;  
    int gold;    
} Player;

void initPlayer(Player *player);
void movePlayer(Player *player, Tile dungeon[MAX_ROWS][MAX_COLS], int dx, int dy);

#endif 
