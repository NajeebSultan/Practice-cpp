#include <iostream>
using namespace std;

void printDiamond(int &n) {
    // Print upper half of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";  // Print spaces
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";  // Print stars
        }
        cout << endl;
    }

    // Print lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";  // Print spaces
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";  // Print stars
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the diamond: ";
    cin >> n;
    printDiamond(n);  // Call function by reference
    return 0;
}
