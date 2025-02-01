#include <iostream>
using namespace std;

void inner() { // Replacing lambda with a normal function
    int x = 30;
    cout << "Inner x: " << x << endl;
}

void outer() {
    int x = 20;
    inner();  // Call inner function
    cout << "Outer x: " << x << endl;
}

int main() {
    outer();
    cout << "Global x: " << 10 << endl;
    return 0;
}