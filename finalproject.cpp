#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream> // Include the header for stringstream

using namespace std;

struct Item {
    string name;
    double price;
};

class ShoppingCart {
private:
    vector<Item> items;

public:
    void addItem(Item item) 
	
	{
		//adding an element, denoted as item, to the end of a container, such as a vector, list
        items.push_back(item);
        cout << "Item added to the cart: " << item.name << " - $" << fixed << setprecision(2) << item.price << endl;
    }

    void removeItem(int index) {
        if (index >= 0 && index < items.size()) {
            cout << "Item removed from the cart: " << items[index].name << " - $" << fixed << setprecision(2) << items[index].price << endl;
            items.erase(items.begin() + index);
        } else {
            cout << "Invalid item index." << endl;
        }
    }

    void displayItems() {
        if (items.empty()) {
            cout << "No items in the cart." << endl;
        } else {
            cout << "Items in the cart:" << endl;
            cout << left << setw(20) << "Item Name" << right << setw(10) << "Price" << endl;
            cout << setfill('-') << setw(30) << "" << setfill(' ') << endl;
            for (int i = 0; i < items.size(); i++) {
                cout << left << setw(20) << items[i].name << right << setw(10) << fixed << setprecision(2) << items[i].price << endl;
            }
        }
    }

    string calculateTotalBill() {
        if (items.empty()) {
            return "No items in the cart.";
        }

        ostringstream billDetails;
        double total = 0.0;

        billDetails << "Items purchased:\n";
        for (const auto &item : items) {
            billDetails << item.name << " - $" << fixed << setprecision(2) << item.price << "\n";
            total += item.price;
        }

        billDetails << "Total bill: $" << fixed << setprecision(2) << total;
        return billDetails.str();
    }
};

int main() {
    ShoppingCart cart;
    vector<Item> menu = {{"Apple", 10.0}, {"Grapes ", 15.0}, {"Mango", 20.0}, {"Pear ", 25.0}, {"Orange", 30.0},
                         {"Tomato", 35.0}, {"Cabbage", 40.0}, {"Cucumber", 45.0}, {"Cauliflower ", 50.0}, {"Ginger", 55.0},
                         {"Carrot", 60.0}, {"Mushrooms", 65.0}, {"Onion", 70.0}, {"Potatoes", 75.0}, {"Beetroot", 80.0},
                         {"Beans ", 85.0}, {"Green Peas", 90.0}, {"Zucchinis", 95.0}, {"Asparagus", 100.0}, {"Lettuce ", 105.0}};

    while (true) {
        cout << "Menu:" << endl;
        for (int i = 0; i < menu.size(); i++) {
            cout << i + 1 << ". " << menu[i].name << " - $" << fixed << setprecision(2) << menu[i].price << endl;
        }
        cout << "Choose an option: " << endl;
        cout << "1. Add item to cart" << endl;
        cout << "2. Remove item from cart" << endl;
        cout << "3. Display items in cart" << endl;
        cout << "4. Calculate total bill" << endl;
        cout << "5. Exit" << endl;

        int option;
        cin >> option;

        if (option == 1) {
            int choice;
            cout << "Enter item number to add: ";
            cin >> choice;
            if (choice > 0 && choice <= menu.size()) {
                cart.addItem(menu[choice - 1]);
            } else {
                cout << "Invalid item number." << endl;
            }
        } else if (option == 2) {
            int choice;
            cout << "Enter item number to remove: ";
            cin >> choice;
            cart.removeItem(choice - 1);
        } else if (option == 3) {
            cart.displayItems();
        } else if (option == 4) {
            cout << cart.calculateTotalBill() << endl;
        } else if (option == 5) {
            break;
        } else {
            cout << "Invalid option." << endl;
        }
    }

return  0;
}