CC = gcc
CFLAGS = -Wall -g

SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

SRC = $(SRC_DIR)/main.c
OBJ = $(OBJ_DIR)/main.o
EXEC = $(BIN_DIR)/restaurant.exe

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

$(OBJ_DIR)/main.o: $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) -o $(OBJ_DIR)/main.o

.PHONY: clean

clean:
	del /Q $(OBJ_DIR)\*.o $(BIN_DIR)\restaurant.exe
