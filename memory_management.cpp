#include <iostream>

int main() {
    int* data = new int(42);  // Allocated on the heap
    std::cout << "Value: " << *data << std::endl;

    delete data;  // Must free memory manually to avoid memory leaks
    data = nullptr; // Avoids dangling pointer

    return 0;
}