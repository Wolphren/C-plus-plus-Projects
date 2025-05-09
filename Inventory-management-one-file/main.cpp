#include <iostream>
#include <vector>
#include <string>
using namespace std;

// -------------------- Item Class --------------------
class Item {
private:
    string name;
    double price;
    int quantity;

public:
    Item(string n, double p, int q) : name(n), price(p), quantity(q) {}

    string getName() const {
        return name;
    }

    void setQuantity(int q) {
        quantity = q;
    }

    int getQuantity() const {
        return quantity;
    }

    void display() const {
        cout << "Name: " << name << ", Price: $" << price
             << ", Quantity: " << quantity << endl;
    }
};

// -------------------- Inventory Class --------------------
class Inventory {
private:
    vector<Item> items;

public:
    void addItem() {
        string name;
        double price;
        int quantity;

        cout << "Enter item name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> quantity;

        items.push_back(Item(name, price, quantity));
        cout << "Item added successfully!\n";
    }

    void displayItems() const {
        if (items.empty()) {
            cout << "Inventory is empty.\n";
            return;
        }

        cout << "\nInventory:\n";
        for (const auto& item : items) {
            item.display();
        }
        cout << endl;
    }

    void updateQuantity() {
        string name;
        int newQuantity;

        cout << "Enter item name to update: ";
        cin >> name;

        for (auto& item : items) {
            if (item.getName() == name) {
                cout << "Enter new quantity: ";
                cin >> newQuantity;
                item.setQuantity(newQuantity);
                cout << "Quantity updated.\n";
                return;
            }
        }

        cout << "Item not found.\n";
    }

    void searchItem() const {
        string name;
        cout << "Enter item name to search: ";
        cin >> name;

        for (const auto& item : items) {
            if (item.getName() == name) {
                cout << "Item found:\n";
                item.display();
                return;
            }
        }

        cout << "Item not found.\n";
    }
};

// -------------------- Main Function --------------------
int main() {
    Inventory inventory;
    int choice;

    do {
        cout << "\n=== Inventory Management System ===\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Update Quantity\n";
        cout << "4. Search Item\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
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
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
