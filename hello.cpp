// hello.cpp
//Traditional hello world program
// By Dillon Maltese

#include <iostream>
using namespace std;

//Args can be: int argc, char *argv[] but don't need
int main() {
    //Always want a \n at end of program because then new code tries to go with it
    //cout = System.out.print
    //cin = System.in
    int age;
    bool success;
    cout << "What is your age? ";
    cin >> age;
    cout << "Your age is " << age << endl;
    if (age < 13) {
        cout << "Your age is less than 13\n";
        success = true;
    } else {
        cout << "Your age is greater than 13\n";
        success = false;
    }
    if (success == true) {
        cout << "Yes\n";
    } else if (success == false) {
        cout << "No\n";
    }

}