#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"
#include <vector>

class Inventory 
{
private:
    std::vector<Item> items;

public:
    void addItem();
    void displayItems() const;
    void updateQuantity();
    void updatePrice();
    void searchItem() const;
};

#endif