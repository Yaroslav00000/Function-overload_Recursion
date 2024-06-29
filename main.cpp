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
    cout << "������ ����� ������: ";
    cin >> n;
    int arr[size];

    cout << "������ �������� ������: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key; 
    cout << "������ ������ ��������: ";
    cin >> key;

    int index = linearSearch(arr, n, key);

    if (index == 0) {
        cout << "�� ��������" << endl;
    }
    else {
        cout << "������� �������� �� ��������: " << index << endl;
    }
   

    return 0;
}
