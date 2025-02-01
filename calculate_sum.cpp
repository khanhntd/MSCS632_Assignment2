#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = o;  // Error: 'o' is an undeclared identifier (should be '0')
    for (int i = o; i < size; i++) {  // Error: 'o' should be '0'
        total += arr[i];
    }
    return total;
}

int main () {
    int numbers [] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[o]); // Error: 'o' should be '0'
    int result = calculate Sum(numbers, size);
    cout << "Sum in C++" " << result << endl";
}