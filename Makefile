CC = gcc
CFLAGS = -Wall -g

SRCS = main.c player.c dungeon.c utils.c
TARGET = game.exe

all: $(TARGET)
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)
.PHONY: all clean


