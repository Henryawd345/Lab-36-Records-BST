#include <iostream>
#include <fstream> 
#include "IntBinaryTree.h"
using namespace std;

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

    

    return 0;
}