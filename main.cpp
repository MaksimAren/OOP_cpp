#include <iostream>
#include "Container.h"

using namespace std;

int main() {
    Container<int> container(3);
    Container<int> container_1(4);
    
    container[0] = 0;
    container[1] = 1;
    container[2] = 2;
    
    for(int i = 0; i < container_1.getLength(); ++i)
        container_1[i] = i;
    
    container.eraseAtBeginning();
    container.eraseAtEnd();
    
//    for(int i = 0; i < container.getLength(); ++i)
//        cout << container[i] << "\n";
//    cout << "length = " << container.getLength() << "\n";
    
//    container.erase();
    for(int i = 0; i < container.getLength(); ++i)
        std::cout << container[i] << '\n';
    std::cout << "length = " << container.getLength() << '\n';
    std::cout << "empty = " << container.isEmpty() << '\n';
    
    return 0;
}
