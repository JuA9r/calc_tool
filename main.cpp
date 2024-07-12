#include <iostream>
using namespace std;

int main() {

    int num1, num2, sum = 0;
    string num, str;

    while(true) {
    cout << "\ninput a ~ d or -1: \n";
    cin >> str;
    if (str == "-1") break;

    cout << "input two numbers: \n";
    cin >> num1 >> num2;

        if (str == "a") {
            sum = num1 + num2;
        } else if (str == "b") {
            sum = num1 - num2;
        } else if (str == "c") {
            sum = num1 * num2;
        } else if (str == "d") {
            if (num2 !=  0) {
                sum = num1 / num2;
            } else {
                cout << "ZeroDivisionError\n" << endl;
                return 1;
            }
        } else{
            cout << "InputError\n";
            return 1;
        }
        cout << "result: " << sum << endl;
    }

    cout << "\nThe end of the program\n";
    return 0;
}

