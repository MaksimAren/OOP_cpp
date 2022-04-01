#include <iostream>
#include "ARRAYINT.h"
#include "Array.h"
#include "Container.h"

using namespace std;

int main() {
//    ArrayInt array(10);
//
//    for(int i = 0; i < 10; i++)
//        array[i] = i;
//
//    for (int j = 0; j < array.getLength(); j++)
//        std::cout << array[j] << " ";
//    std::cout << "\n";
//
//    array.insertAtBeginning(50);
//    for (int j = 0; j < array.getLength(); j++)
//        std::cout << array[j] << " ";
//    std::cout << "\n";
//
//    array.insertAtEnd(35);
//    for (int j = 0; j < array.getLength(); j++)
//        std::cout << array[j] << " ";
//    std::cout << "\n";
    
//    array.insertBefore(15, 4);
//
//    for (int j = 0; j < array.getLength(); j++)
//        std::cout << array[j] << " ";
//    std::cout << "\n";
//
//    array.remove(5);
//
//    for (int j = 0; j < array.getLength(); j++)
//        std::cout << array[j] << " ";
//    std::cout << "\n";
    
//    Array<int> intArray(4);
//    Array<double> doubleArray(4);
//    
//    for (int count = 0; count < intArray.getLength(); ++count)
//    {
//        intArray[count] = count;
//        doubleArray[count] = count + 0.5;
//    }
//    
//    for (int count = intArray.getLength() - 1; count >= 0; --count)
//        std::cout << intArray[count] << "\t" << doubleArray[count] << '\n';
    
    Container<int> container(2);
    Container<int> container_1(4);
    
    container[0] = 0;
    container[1] = 1;
//    container[2] = 2;
    
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
