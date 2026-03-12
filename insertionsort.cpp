#include <iostream>
using namespace std;

int arr[20];
int n;

void input (){
    while (true){
        cout << "masukkan jumlah  data array : ";
        cin >> n;

        if (n <= 20){
            cout << "\nArray tidak boleh lebih dari 20\n";
        }
    }
}