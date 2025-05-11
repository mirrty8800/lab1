#include "restaurant_controller.h"
#include "menu.h"
#include "console_view.h"

#include <stdio.h>
#include "console_view.h"

void runRestaurant() {
    Menu menu;
    menu.count = 0;

    Dish dish1 = {"Pizza Margherita", 12.99};
    Dish dish2 = {"Spaghetti Bolognese", 10.49};
    Dish dish3 = {"Caesar Salad", 7.99};
    Dish dish4 = {"Burger", 8.99};

    addDish(&menu, dish1);
    addDish(&menu, dish2);
    addDish(&menu, dish3);
    addDish(&menu, dish4);

    ConsoleView view;
    displayMenu(&menu);
} 