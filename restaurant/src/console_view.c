#include "console_view.h"
#include <stdio.h>

void displayMenu(Menu *menu) {
    printf("Menu:\n");
    for (int i = 0; i < menu->count; i++) {
        printf("%d. %s - $%.2f\n", i + 1, menu->dishes[i].name, menu->dishes[i].price);
    }
}