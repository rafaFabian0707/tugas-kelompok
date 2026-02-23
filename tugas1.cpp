#include <iostream>
using namespace std;

void ascending(int array[], int kapsitas) {
    int sementara;
    for (int i = 0; i < kapsitas - 1; i++)// loop luar => untuk 9 kali putaran, setiap putaran menetukan angka terbesar ke terkecil, misalnya putaran 1 menetukan angka terbesar lalu putaran kedua menentukan angka terbesar kedua
    {
        for (int j = 0; j < kapsitas - i - 1; j++)// loop dalam +> looping untuk membandingka data-data di dalam array
        {
            if (array[j] > array[j + 1])// if untuk membandingkan 2 angka yang bersebelahan, jika angka di sebelah kiri lebih besar maka akan ditukar posisinya dengan angka di sebelah kanan
            {
                // mekanismenya : jika angka sebelah kiri lebih besar dari angka sebelah kanan
                sementara = array[j]; //simpan angka sebelah kiri ke dalam variabel sementara
                array[j] = array[j + 1]; // angka sebelah kanan dipindah ke kiri
                array[j + 1] = sementara; // angka yang disimpan di variabel sementara(angka sebelah kiri) dipindah ke kanan
            }
            
        }
        
    }
    
}
void descending() {// diaz
    cout << "halo";
}
void search() {// nayla
    cout << "halo";
}
void keluar(){// dila

}

int main(){
    int nilai[10] = {75, 60, 85, 90, 70, 88, 65, 80, 93, 62};
    int size = 10;

    ascending(nilai, size);
    cout << "ascending : ";
    for (int elemen : nilai)
    {
        cout << elemen << " ";
    }
    
    
    return 0;
}