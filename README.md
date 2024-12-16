Dungeon Game
This is a simple dungeon exploration game written in C language. The player tries to find treasure in the dungeon, fight enemies and reach the exit. This game allows the player to manage his position in the dungeon and progress in the dungeon with various commands. However, the game has shortcomings such as inventory status, saving the game and entering a new game.

Game Stages:

1. Start
When the game starts, the player is located at the starting position of the dungeon ((0, 0)). The dungeon consists of a 10x10 grid and the player can move in this grid. There are various rooms in the dungeon: empty rooms, treasure rooms, enemy rooms and the exit room.

3. Game Content
• Empty Rooms (.): The player cannot find anything in these rooms.
• Treasure Room (H): When the player enters this room, he earns 10 gold and the room is empty.
• Enemy Room (E): The player encounters an enemy in this room and loses 20 health. If the player's health reaches zero, the game ends.
• Exit Room (X): When the player reaches this room, they win the game.

4. Player Movement
The player moves through the dungeon using the w (north), a (west), s (south), and d (east) keys. The dungeon changes state as the player moves through the rooms.

5. Winning and Losing
• Winning: The player wins the game when they reach the exit room (X).
• Losing: When the player's health reaches zero, the game ends and the player loses.

____________________________________
Installing and Running

These steps will get you up and running the game:

1. Requirements
• GCC Compiler: You must have gcc (GNU Compiler Collection) installed to compile C programs.
• Windows: You can use MinGW or TDM-GCC.
• Linux/MacOS: GCC is usually the default.

2. Downloading Project Files
Get the project files onto your computer by downloading them from GitHub or another source. The project file structure should be as follows:
dungeon_game/
├── main.c
├── player.c
├── dungeon.c
├── utils.c
├── player.h
├── dungeon.h
├── utils.h
├── Makefile
└── README.md

4. Compilation
You can use the following commands in the terminal or command prompt to compile the project.
• Windows:
gcc main.c player.c dungeon.c utils.c -o game.exe
• Linux/MacOS:
gcc main.c player.c dungeon.c utils.c -o game

Alternatively, you can automate the compilation process using the Makefile:
make

6. Run
After the compilation is complete, you can run the game with the following command:
• Windows:
.\game.exe
• Linux/MacOS:
./game
____________________________________
Controlling the Game

When the game starts, the player can move through the dungeon with the following commands:
• w: Moves north.
• a: Moves west.
• s: Moves south.
• d: Moves east.
• exit: Exits the game.
________________________________________
Code Structure

The project has the following file structure:
1. main.c
The main file contains the game startup, user command processing, and game state management.

3. player.c and player.h
Contains player attributes (health, gold, x, y) and movement functions. Controls how the player moves in the dungeon and what status they get.

4. dungeon.c and dungeon.h
Defines the structure of the dungeon and initializes and prints the rooms in the dungeon (empty, treasure, enemy, exit). This file also controls the start of the dungeon and the status of the rooms in the dungeon.

5. utils.c and utils.h
Contains auxiliary functions such as screen clearing, game ending, and achievement messages.

________________________________________
Enhancements and Improvements

This game is a basic dungeon exploration game, and could be improved with the following features:
• Adding different dungeon levels or difficulties to the player.
• More enemy types and various attributes.
• Adding random values ​​for treasure and health amounts.
• Adding a graphical user interface (GUI).
