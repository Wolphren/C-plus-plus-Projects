#include "Inventory.h"
#include <iostream>
using namespace std;

int main()
{
    Inventory inventory;
    int choice;

    do
    {
        cout << "\n=== Inventory Management System ===\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Update Quantity\n";
        cout << "4. Search Item\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                inventory.addItem();
                break;
            case 2:
                inventory.displayItems();
                break;
            case 3:
                inventory.updateQuantity();
                break;
            case 4: 
                inventory.searchItem();
                break;
            case 5:
                cout << "Exiting program. Goodbye.\n";
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}