#include "BinarySearchTree.h"
#include <iostream>


int main(){
    BinarySearchTree<int> s;
    s.insert(2);
    s.insert(4);
    s.insert(1);
    s.insert(9);
    s.insert(7);

    //s.removeMin();

    //std::cout << s.find(9).get() << std::endl;
    //std::cout << s.find(1).get() << std::endl;

    return 0;
}
