#include <iostream>
#include <fstream> 
#include "IntBinaryTree.h"
using namespace std;

void printMenu() {
    cout << "\n===== RECORDS MENU =====\n";
    cout << "1. Add record\n";
    cout << "2. Delete record\n";
    cout << "3. Search record\n";
    cout << "4. Modify record\n";
    cout << "5. Display all records (in-order)\n";
    cout << "0. Quit\n";
    cout << "Enter choice: ";
}

int main() {
    IntBinaryTree tree;

    ifstream fin("codes.txt");
    if (!fin){
        cout << "Error: could not open codes.txt" << endl;
        return 1;
    }

    string code;
    while (getline(fin, code)){
        if (!code.empty()){
            tree.insertNode(code);
        }
    }
    fin.close();

    int choice = -1;
    string oricode;
    string newCode;

    do {
        printMenu();         
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter code to add: ";
            cin >> oricode; 

            tree.insertNode(oricode);
            cout << "Record added.\n";
            break;

        case 2:
            cout << "Enter code to delete: ";
            cin >> oricode;

            tree.remove(oricode);
            cout << "If the record existed, it has been deleted.\n";
            break;

        case 3:
            // Search record
            break;

        case 4:
            // Modify record
            break;

        case 5:
            // Display records
            break;

        case 0:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}