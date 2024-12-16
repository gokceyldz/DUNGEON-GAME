#include <stdio.h>
#include <stdlib.h>
#include "utils.h"


void clearScreen() {
#ifdef _WIN32
    system("cls"); //ekran temizleme komutu
#endif
}


void printGameOver() {
    printf("\n------------------------\n");
    printf("Game Over!\n");
    printf("------------------------\n");
}


void printWinMessage() {
    printf("\n------------------------\n");
    printf("WIN!\n");
    printf("------------------------\n");
}
