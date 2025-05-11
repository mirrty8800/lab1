#include "menu.h"
#include <string.h>

void addDish(Menu *menu, Dish dish) {
    if (menu->count < MAX_DISHES) {
        menu->dishes[menu->count] = dish;
        menu->count++;
    }
}

Dish* getMenuItems(Menu *menu, int *size) {
    *size = menu->count;
    return menu->dishes;
}