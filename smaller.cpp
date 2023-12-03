/*
Author: kenneth guillont
Course: CSCI-136
Instructor: brandon foster
Assignment:LAB1A

this code compares three integers given by user
and returns the lowest integer value of the three
*/

#include <iostream>
using namespace std;
int main() {
    cout<< "enter the first number";
    float num1; cin >> num1;

    cout<< "enter the second number";
    float num2; cin >> num2;

    if(num1 < num2)
    cout << num1;
    else
    cout << num2;
    return 0;
}