#include "Inventory.h"
#include <iostream>
using namespace std;

void Inventory::addItem() 
{
    string name;
    double price;
    int quantity;

    cout << "Enter item name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter quantity: ";
    cin >> quantity;

    items.push_back(Item(name, price, quantity));
    cout << "Item added Successfully\n";
}

void Inventory::displayItems() const 
{
    if (items.empty()) 
    {
        cout << "Inventory is empty.\n";
        return;
    }

    cout << "\nInventory:\n";
    for (const auto& item : items)
    {
        item.display();
    }
    cout << endl;
}

void Inventory::updateQuantity()
{
    string name;
    int newQuantity;

    cout << "Enter item name to update: ";
    cin.ignore();
    getline(cin, name);

    for (auto& item : items) 
    {
        if (item.getName() == name)
        {
            cout << "Enter new quantity: ";
            cin >> newQuantity;
            item.setQuantity(newQuantity);
            cout << "Quantity updated.\n";
            return;
        }
    }

    cout << "Item not found.\n";
}

void Inventory::updatePrice()
{
    string name;
    double newPrice;

    cout << "Enter item name to update: ";
    cin.ignore();
    getline(cin, name);

    for (auto& item : items) 
    {
        if (item.getName() == name)
        {
            cout << "Enter new price: ";
            cin >> newPrice;
            item.setPrice(newPrice);
            cout << "Price updated.\n";
            return;
        }
    }

    cout << "Item not found.\n";
}

void Inventory::searchItem() const
{
    string name;
    cout << "Enter item name to search: ";
    cin.ignore();
    getline(cin, name);

    for (const auto& item : items) 
    {
        if (item.getName() == name)
        {
            cout << "Item found:\n";
            item.display();
            return;
        }
    }

    cout << "Item not found.\n";
}