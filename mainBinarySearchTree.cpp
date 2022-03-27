#include "BinarySearchTree.h"
#include <iostream>

using namespace std;

int main(){
    BinarySearchTree<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    //cout << s.findMin().get() << endl;
    //s.removeMin();
    //cout << s.findMin().get() << endl;
    //cout << s.findMax().get() << endl;
    //s.removeMax();
    //cout << s.findMax().get() << endl;

    cout << s.size() << endl;
    s.insert(7);
    s.insert(8);
    cout << s.size() << endl;

    return 0;
}
