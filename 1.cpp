#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "1 num: ";
    cin >> num1;

    cout << "2 num: ";
    cin >> num2;

    double multiplication_res = num1 * num2;
    cout << "Res: " << multiplication_res << endl;

    if (num2 != 0) {
        double division_res = num1 / num2;
        cout << "Res: " << division_res << endl;
    }
    else {
        cout << "Division by zero." << endl;
    }

    double addition_res = num1 + num2;
    cout << "Res: " << addition_res << std::endl;

    double subtraction_res = num1 - num2;
    cout << "Res: " << subtraction_res << endl;

    return 0;
}
