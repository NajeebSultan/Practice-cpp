#include<iostream>
using namespace std;
 void swapbyvalue(int num1 , int num2){
  int temp=num1;
  num1=num2;
  num2=temp;
 }
 void swapbyref(int &num1 , int &num2){
  int temp=num1;
  num1=num2;
  num2=temp;
 }

 int main(){
int a=4 ,b=5;
 cout<<"Before swapping:- a: "<<a<<" b: "<<b<<endl;

 swapbyvalue(a,b);
 cout<<"After swapping (swap by value):- a: "<<a<<" b: "<<b<<endl;

 swapbyref(a,b);
  cout<<"After swapping (swap by reference):- a: "<<a<<" b: "<<b<<endl;

return 0;

}


