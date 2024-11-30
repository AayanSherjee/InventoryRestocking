#include <iostream>
#include <string>
using namespace std;

int main(){
    string productnames[] = {"Apples", "Oranges", "Bananas", "Milk", "Bread"};
    int productquant[] = {50, 60, 70, 90, 45};
    int quantity, option;
    string product;
    
    cout << "1. Display Inventory\n";
    cout << "2. Restock Product\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> option;

if (option == 1){
        cout << "\nInventory List:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << productnames[i] << ": " << productquant[i] << " units.\n";
        }
    }

if(option == 2){    
        while(true){
            cout << "Enter the product name to restock: ";
            cin >> product;
            
            if (product == "Apples" || product == "apples" )
            {
                cout << "Enter the quantity to restock: ";
                cin >> quantity;
                if (quantity >= 1)
                {
                    productquant[0] += quantity;
                }
                else{
                    cout << "Invalid input. Please Enter a positive number.\n";
                }
            }
            else if (product == "Oranges" || product == "oranges" )
            {
                cout << "Enter the quantity to restock: ";
                cin >> quantity;
                if (quantity >= 1)
                {
                    productquant[1] += quantity;
                }
                else{
                    cout << "Invalid input. Please Enter a positive number.\n";
                }
            }
            else if (product == "Bananas" || product == "bananas" )
            {
                cout << "Enter the quantity to restock: ";
                cin >> quantity;
                if (quantity >= 1)
                {
                    productquant[2] += quantity;
                }
                else{
                    cout << "Invalid input. Please Enter a positive number.\n";
                }
            }
            else if (product == "Milk" || product == "milk" )
            {
                cout << "Enter the quantity to restock: ";
                cin >> quantity;
                if (quantity >= 1)
                {
                    productquant[3] += quantity;
                }
                else{
                    cout << "Invalid input. Please Enter a positive number.\n";
                }
            }
            else if (product == "Bread" || product == "bread" )
            {
                cout << "Enter the quantity to restock: ";
                cin >> quantity;
                if (quantity >= 1)
                {
                    productquant[4] += quantity;
                }
                else{
                    cout << "Invalid input. Please Enter a positive number.\n";
                }
            }
            else{
                cout << "Invalid product name. Try again.\n";
                continue; 
            }
            
        
            cout << "Updated Stock:\n";
            for (int j = 0; j < 5; j++)
            {
                cout << productnames[j] << ": " << productquant[j] << " units.\n";
            }

            cout << "\nDo you want to restock another product? (y/n): ";
            char restockChoice;
            cin >> restockChoice;

            if (restockChoice == 'n' || restockChoice == 'N') {
                cout << "Exiting program.\n";
                return 0;  
            } else if (restockChoice != 'y' && restockChoice != 'Y') {
                cout << "Invalid input. Exiting program.\n";
                return 0;  
            }
        }
    }

if (option == 3){
        cout << "Exiting the system. Goodbye!\n";
        return 0; }
    return 0;
}
