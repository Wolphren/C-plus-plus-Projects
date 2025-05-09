#include "Inventory.h"
#include <iostream>
#include <limits>
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
        cout << "4. Update Price\n";
        cout << "5. Search Item\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";

        if (cin >> choice)
        {
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
                    inventory.updatePrice();
                    break;
                case 5: 
                    inventory.searchItem();
                    break;
                case 6:
                    cout << "Exiting program. Goodbye.\n";
                default:
                    cout << "Invalid choice. Try again.\n";
            }
        }
        else
        {
            cout << "Invalid input. Please enter a number between 1 and 6.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (choice != 6);

    return 0;
}