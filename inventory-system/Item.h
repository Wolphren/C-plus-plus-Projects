#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item 
{
private:
    string name;
    double price;
    int quantity;

public:
    Item(string n, double p, int q);
    string getName() const;
    void setQuantity(int q);
    int getQuantity() const;
    void display() const;

};

#endif