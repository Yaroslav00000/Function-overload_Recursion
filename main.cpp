#include <iostream>
#include <Windows.h>

using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return 0;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n; 
    cout << "Введіть розмір масиву: ";
    cin >> n;
    int arr[size];

    cout << "Введіть елементи масиву: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key; 
    cout << "Введіть шукане значення: ";
    cin >> key;

    int index = linearSearch(arr, n, key);

    if (index == 0) {
        cout << "Не знайдено" << endl;
    }
    else {
        cout << "Елемент знайдено за індексом: " << index << endl;
    }
   

    return 0;
}
