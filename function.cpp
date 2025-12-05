#include <iostream>
using namespace std;
float add(float a,float b);
float subtract(float a,float b);
float multiply(float a,float b);
float divide(float a,float b);
int main() {
    float b, a;
    int choice;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
   divide (a,b);
    subtract(a,b);
    multiply(a,b);
    add(a,b);
    
    return 0;
}
float add(float a, float b) {
cout << "a+b=" <<a+b<< endl;
    return a + b;}
float subtract(float a, float b) {
cout << "a-b=" <<a-b<< endl;
    return a - b;
}
float multiply(float a, float b) {
cout << "a*b=" <<a*b<< endl;
    return a * b;
}

float divide(float a, float b) {
    if (b != 0)
    cout << "a/b="<<a/b << endl;
   else {cout << "Error! Division by zero.";
   return a/b;}
     return 0;}


    
