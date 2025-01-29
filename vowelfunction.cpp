#include <iostream>
using namespace std;

// Function to check if the character is a vowel
bool isVowel(char ch) {
    ch = tolower(ch); // Convert to lowercase for easy comparison
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (isVowel(ch))
        cout << ch << " is a vowel." << endl;
    else
        cout << ch << " is not a vowel." << endl;

    return 0;
}
