#include<iostream>
using namespace std;

double Sale_Price(double price, double tax) {
    return price + (price * (tax / 100));
}

int main() {
    double price, tax;
    cout << "Enter price and tax rate: ";
    cin >> price >> tax;
    cout << "Sale Price: $" << Sale_Price(price, tax) << endl;
    return 0;
}
