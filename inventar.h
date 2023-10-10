#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 10
#define ITEM_NAME_LENGTH 30

// Define a structure for an item
typedef struct {
    char name[ITEM_NAME_LENGTH];
    int quantity;
} Item;

// Initialize the player's inventory
Item inventory[MAX_ITEMS];
int itemCount = 0;

/* 
    Function to add an item to the inventory
    Function arguments itemname for the name for the Item too add to the Inventory
    quantity for the position of the Item
*/
void addItem(const char* itemName, int quantity) {
    if (itemCount < MAX_ITEMS) {
        strcpy(inventory[itemCount].name, itemName);
        inventory[itemCount].quantity = quantity;
        itemCount++;
        printf("%s added to inventory.\n", itemName);
    } else {
        printf("Inventory is full. Cannot add %s.\n", itemName);
    }
}

// Function to display the player's inventory
void displayInventory() {
    printf("Inventory:\n");
    for (int i = 0; i < itemCount; i++) {
        printf("%s (%d)\n", inventory[i].name, inventory[i].quantity);
    }
}