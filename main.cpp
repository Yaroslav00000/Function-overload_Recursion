#include <iostream>
#include <Windows.h>
using namespace std;

int number(string binar) {
    int value = 0;
    int base = 1;

    for (int i = binar.length() - 1; i >= 0; i--) {
        if (binar[i] == '1') {
            value += base;
        }
        base *= 2;
    }

    return value;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string binar;

    cout << "Введіть двійкове число: ";
    cin >> binar;

    int value = number(binar);

    cout << "Десяткове подання: " << value << endl;

    return 0;
}