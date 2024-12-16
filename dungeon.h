#ifndef DUNGEON_H
#define DUNGEON_H

#define MAX_ROWS 10
#define MAX_COLS 10

// Oda türleri
typedef enum {
    EMPTY = 0,
    TREASURE,
    ENEMY,
    EXIT
} TileType;


typedef struct {
    TileType type; 
} Tile;


void initDungeon(Tile dungeon[MAX_ROWS][MAX_COLS]);

void printDungeon(Tile dungeon[MAX_ROWS][MAX_COLS], Player *player);

#endif
