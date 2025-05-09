#include "Item.h"
#include <iostream>
using namespace std;

Item::Item(string n, double p, int q) : name (n), price(p), quantity(q) {}

string Item::getName() const 
{
    return name;
}

void Item::setQuantity(int q) 
{
    quantity = q;
}

void Item::setPrice(double p) 
{
    price = p;
}

int Item::getQuantity() const 
{
    return quantity;
}

double Item::getPrice() const 
{
    return price;
}

void Item::display() const 
{
    cout << "Name: " << name << ", Price: $" << price << ", Quantity: " << quantity << endl;
};