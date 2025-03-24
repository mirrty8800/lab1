#include <stdio.h>

typedef struct {
    char name[100];
    float price;
} Dish;

void showMenu(Dish menu[], int menuSize) {
    printf("Menu:\n");
    for (int i = 0; i < menuSize; i++) {
        printf("%d. %s - $%.2f\n", i + 1, menu[i].name, menu[i].price);
    }
}

int main() {
    Dish menu[] = {
        {"Pizza Margherita", 12.99},
        {"Spaghetti Bolognese", 10.49},
        {"Caesar Salad", 7.99},
        {"Burger", 8.99}
    };
    int menuSize = 4;

    showMenu(menu, menuSize);

    return 0;
}