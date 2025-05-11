CC = gcc
CFLAGS = -Wall -g

SRC_DIR = .
OBJ_DIR = obj
BIN_DIR = bin

SRC = $(SRC_DIR)/main.c $(SRC_DIR)/dish.c $(SRC_DIR)/menu.c $(SRC_DIR)/console_view.c $(SRC_DIR)/restaurant_controller.c
OBJ = $(OBJ_DIR)/main.o $(OBJ_DIR)/dish.o $(OBJ_DIR)/menu.o $(OBJ_DIR)/console_view.o $(OBJ_DIR)/restaurant_controller.o
EXEC = $(BIN_DIR)/restaurant.exe

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

$(OBJ_DIR)/%.o: %.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)