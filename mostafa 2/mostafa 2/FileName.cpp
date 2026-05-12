#include <iostream>
using namespace std;

int main() {
    int arr[6];

    // Step 1: Input
    cout << "Enter 6 numbers: ";
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    // Step 2: Output in reverse order
    cout << "Numbers in reverse order: ";
    for (int i = 5; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}