#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0;

    for (char ch : input) {
        switch (tolower(ch)) {
            case 'a': count_a++; break;
            case 'e': count_e++; break;
            case 'i': count_i++; break;
            case 'o': count_o++; break;
            case 'u': count_u++; break;
        }
    }

    int total_vowels = count_a + count_e + count_i + count_o + count_u;

    cout << "Vowel counts: a=" << count_a << ", e=" << count_e << ", i=" << count_i 
         << ", o=" << count_o << ", u=" << count_u << ", Total=" << total_vowels << "\n";

    return 0;
}
