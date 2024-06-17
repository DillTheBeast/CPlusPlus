// Calculator.cpp
// Making a Calculator with basic functions
// By Dillon Maltese
#include <iostream>
#include <cctype>
using namespace std;

int sum(int a, int b);
int sub(int a, int b);
int divi(int a, int b);
int mul(int a, int b);

int main() {
    int num1;
    int num2;
    int end;
    //std::string op;
    char op;
    cout << "Give me a number ";
    cin >> num1;
    cout << "Give me a second number ";
    cin >> num2;
    cout <<  "Give me an operation\nA for addition, S for subtraction, M for multiplication, D for division ";
    cin >> op;
    op = std::tolower(op);
    switch(op) {
        case('a'):
            end = sum(num1, num2);
            break;
        case('s'):
            end = sub(num1, num2);
            break;
        case('d'):
            end = divi(num1, num2);
            break;
        case('m'):
            end = mul(num1, num2);
            break;
    }
    cout << end << endl;
}

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int divi(int a, int b) {
    return a/b;
}

int mul(int a, int b) {
    return a * b;
}