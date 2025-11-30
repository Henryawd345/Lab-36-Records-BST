#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    IntBinaryTree tree;

    tree.insertNode("B20");
    tree.insertNode("A5");
    tree.insertNode("C9");
    tree.insertNode("@31");

    tree.displayInOrder();

    return 0;
}