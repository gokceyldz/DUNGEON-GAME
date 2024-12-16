#include <stdio.h>
#include <string.h>
#include "dungeon.h"
#include "player.h"
#include "utils.h"  

int processCommand(char *command, Player *player, Tile dungeon[MAX_ROWS][MAX_COLS]);

int main() {
    Player player;
    Tile dungeon[MAX_ROWS][MAX_COLS];

    // START GAME   
    initPlayer(&player);
    initDungeon(dungeon);

    printf("WELCOME TO THE GAME, PLS MOVE (w: north, a: west, s: south, d: east).\n");

    int gameRunning = 1;  // Oyun durumu
    while (gameRunning) {
        printDungeon(dungeon, &player);  
        printf("\nmove direction: ");

        char command[50];
        fgets(command, 50, stdin); 
        command[strcspn(command, "\n")] = 0; 

    
        int result = processCommand(command, &player, dungeon);
        if (result == 1) {
            printf("win\n");
            gameRunning = 0;
        } else if (result == -1) {
            printf("game over!\n");
            gameRunning = 0;
        }
    }

    // Son durum 
    printf(" health = %d, gold = %d\n", player.health, player.gold);
    return 0;
}

int processCommand(char *command, Player *player, Tile dungeon[MAX_ROWS][MAX_COLS]) {
    if (strcmp(command, "w") == 0) {
        movePlayer(player, dungeon, -1, 0);  
    } else if (strcmp(command, "a") == 0) {
        movePlayer(player, dungeon, 0, -1); 
    } else if (strcmp(command, "s") == 0) {
        movePlayer(player, dungeon, 1, 0); 
    } else if (strcmp(command, "d") == 0) {
        movePlayer(player, dungeon, 0, 1);  
    } else if (strcmp(command, "exit") == 0) {
        return -1;  // Oyundan çıkış
    } else {
        printf("Invalid command! Please use 'w', 'a', 's', 'd' or 'exit' commands.\n");
    }

   
    if (dungeon[player->x][player->y].type == 3) {
        return 1;  // Oyuncu çıkış noktasına ulaştı ve oyunu kazandı
    } else if (player->health <= 0) {
        return -1;  // Oyuncu öldü ve oyun bitti
    }

    return 0; 
}
