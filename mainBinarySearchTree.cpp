#include "BinarySearchTree.h"
#include <iostream>


int main() {
    BinarySearchTree<int> s;
    s.insert(2);
    s.insert(4);
    s.insert(1);
    s.insert(9);
    s.insert(7);

    std::cout << s.findMin().get() << std::endl;

    return 0;
}
