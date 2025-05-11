#ifndef MENU_H
#define MENU_H

#include "dish.h"

#define MAX_DISHES 10

typedef struct {
    Dish dishes[MAX_DISHES];
    int count;
} Menu;

void addDish(Menu *menu, Dish dish);
Dish* getMenuItems(Menu *menu, int *size);

#endif