#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{
    while (true)
    {
        cout << "Memasukan banyak elemen pada array (maksimal 10) :";
        cin >> nPanjang;
        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << " \n[!] jumlah elemen tidak boleh lebih dari 10. Silahkan coba lagi. \n";
        }
    }

    cout <<"\n==================================\n";
    cout <<"        Masukan Elemen Array \n";
    cout <<"=============================\n";
    for (int i = 0; i< nPanjang; i++)
    {
        cout << "Data ke-" <<(i + 1) <<"=";
        cin >> element[i];
    }
}