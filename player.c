#include <stdio.h>
#include <stdlib.h> // exit için
#include "player.h"
#include "dungeon.h"

void initPlayer(Player *player) {
    player->x = 0;        
    player->y = 0;        
    player->health = 100;
    player->gold = 0;     
}


void movePlayer(Player *player, Tile dungeon[MAX_ROWS][MAX_COLS], int dx, int dy) {
    int newX = player->x + dx;
    int newY = player->y + dy;

 
    if (newX < 0 || newX >= MAX_ROWS || newY < 0 || newY >= MAX_COLS) {
        printf("You can't go in this direction! You hit the wall.\n");
        return;
    }

   
    player->x = newX;
    player->y = newY;

   
    Tile *currentTile = &dungeon[player->x][player->y];
    switch (currentTile->type) {
        case EMPTY:
            printf("You come to an empty room.\n");
            break;
        case TREASURE:
            printf("You found a treasure! You earned 10 gold coins.\n");
            player->gold += 10;
            currentTile->type = EMPTY; 
            break;
        case ENEMY:
            printf("You have encountered an enemy! Your health decreased by 50 points.\n");
            player->health -= 50;
            currentTile->type = EMPTY;
            if (player->health <= 0) {
                printf("player is dead!!!\n");
                exit(0); 
            }
            break;
        case EXIT:
            printf("You've reached the exit! You won the game.\n");
            exit(0); 
            break;
        default:
            printf("An unknown situation has occurred.\n");
            break;
    }
}

