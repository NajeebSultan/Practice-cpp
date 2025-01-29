#include<iostream>
using namespace std;

int reverse(int n){
  int reversed=0;
  while (n!=0) {
      int digit = n%10;
  reversed= reversed*10 + digit;
  n/=10;
  }
  return reversed;

  }
int main(){
  int numbers;
cout<<"Enter numbers: ";
cin>>numbers;

cout<<"Reversed numbers: " <<reverse(numbers);
return 0;

}