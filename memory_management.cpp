#include <iostream>
#include <sys/resource.h>
#include <unistd.h>

// Function to get the current memory usage in KB
long getMemoryUsage() {
    struct rusage usage;
    getrusage(RUSAGE_SELF, &usage);
    return usage.ru_maxrss; // Memory usage in KB
}

// Function to allocate memory and perform some operations
void allocateMemory() {
    int* myData = new int[5]; // Manual heap allocation

    // Manually assign values to the array
    myData[0] = 1;
    myData[1] = 2;
    myData[2] = 3;
    myData[3] = 4;
    myData[4] = 5;

    std::cout << "Data: ";
    for (int i = 0; i < 5; i++) {
        std::cout << myData[i] << " ";
    }
    std::cout << std::endl;

    delete[] myData; // Explicitly free memory to prevent leaks
}

int main() {
    // Get memory usage before allocating memory
    long total = getMemoryUsage();

    // Allocate memory and do some operations
    allocateMemory();

    // Calculate the memory used for the allocation
    long used = getMemoryUsage() - total;

    // If there is any difference, print the memory used for the allocation

    std::cout << "Memery used for garbage collection and initialize on heap: " << used << " KB" << std::endl;


    return 0;
}