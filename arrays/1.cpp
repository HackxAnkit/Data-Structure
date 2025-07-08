#include<iostream>
using namespace std;
int main() {
    // Declare an array of integers with 5 elements
    int arr[5] = {10, 20, 30, 40, 50};

    // Print the elements of the array using a loop
    for(int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}