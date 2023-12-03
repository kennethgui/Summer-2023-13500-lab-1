/*
Author: kenneth guillont
Course: CSCI-136
Instructor: brandon foster
Assignment:LAB1B

this code compares three integers given by user
and returns the lowest integer value of the three
*/

#include <iostream>
using namespace std;

int main(){
    cout << "Enter first number: ";
    int num1; cin >> num1;

    cout << "Enter second number: ";
    int num2; cin >> num2;

    cout << "Enter third number:";
    int num3; cin >> num3;

    if(num1 < num2){
        if(num1 < num3)
        cout << num1;
        else
        cout << num3;
    }
    else if(num2 < num1){
        if(num2 < num3)
        cout << num2;
        else
        cout << num3;
    return 0;
    }

}
