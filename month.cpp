/*
Author: your name
Course: CSCI-136
Instructor: their name
Assignment: title, e.g., Lab1A

user will input a year and month and the 
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Enter year: ";
    int year; cin >> year;

    cout << "Enter month: ";
    int month; cin >> month;

    if((month == 1) || (month ==  3) || (month == 5) || (month ==  7) || (month == 8) || (month ==  10) || (month ==  12))
        cout << "31 days";
    else if(month == 2){
       if(year % 4)
            cout << 28;
        else if(year % 100 != 0)
            cout << 29;
        else if(year % 400 != 0)
            cout << 28;
        else
            cout << 29;
            }
    else
        cout << "30 days";

    return 0;
}