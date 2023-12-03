/*
Author: KENNETH GUILLONT
Course: CSCI-136
Instructor: BRANDON FOSTER
Assignment: LAB1C

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
using namespace std;

int main() {
cout << " Enter year: ";
int year; cin >> year;

if(year % 4)
    cout << "common year";
else if(year % 100 != 0)
    cout << "leap year";
else if(year % 400 != 0)
    cout << "common year";
else
    cout << "leap year";
return 0;
}