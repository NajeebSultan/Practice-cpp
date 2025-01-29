#include<iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string Str;
    cout << "Enter a string (min 20 chars): ";
    getline(cin, Str);
    
    if (Str.length() < 20) {
        cout << "String too short!\n";
        return 1;
    }
    
    cout << "Length: " << Str.length() << "\n";
    
    reverse(Str.begin(), Str.end());
    cout << "Reversed: " << Str << "\n";
    
    Str += " Hello World";
    cout << "Updated: " << Str << "\n";
    
    int word_count = count(Str.begin(), Str.end(), ' ') + 1;
    cout << "Words: " << word_count << "\n";
    
    transform(Str.begin(), Str.end(), Str.begin(), ::tolower);
    cout << "Lowercase: " << Str << "\n";
    
    return 0;
}
