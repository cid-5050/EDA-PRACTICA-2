#include "BinarySearchTree.h"
#include <iostream>

using namespace std;

int main(){
    BinarySearchTree<int> s;
    s.insert(2);
    s.insert(24);
    s.insert(3);
    s.insert(5);
    s.insert(52);
    s.insert(1);
    cout << s.findMin().get() <<endl;
    s.removeMin();
    cout << s.findMin().get() <<endl;
    cout << s.findMax().get() <<endl;
    s.removeMax();
    cout << s.findMax().get() <<endl;
    return 0;
}
