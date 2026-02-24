#include <iostream>
#include <iomanip>
using namespace std;

// Penggunaan class untuk menyatukan banyak nya fungsi yang sudah
class Program {

};
// yoan
void pembukaan(string nama_mahasiwa[], 
               int array[], 
               int kapasitas,
               char Gender[]) {

    // pembukaan
    cout << "SELAMAT DATANG DI PROGRAM APLIKASI ARRAY!" << endl;
    cout << "BERIKUT ADALAH TABEL NILAI KOM C" << endl;

    // bagan tabel
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "|  NO |" << right << setw(35) 
         << "NAMA MAHASISWA" << right << setw(20) 
         << "|"  << right << setw(5) 
         << " GENDER " 
         << "|  NILAI |" << endl;  
    cout << "--------------------------------------------------------------------------------" << endl;

    // perulangan untuk tabel data
    //  menggunakan kapasitas agar perulangan berhenti jika nilai
    //  lebih kecil dari data yang tersedia.
    for(int i = 0; i < kapasitas; i++) {
        cout << "|" << right << setw(3) << i + 1 << right << setw(3) << "|" 
             << left << setw(35) 
             << nama_mahasiwa[i] << right << setw(20) << "|" 
             << right << setw(5) << Gender[i] << right << setw(5) << " | "
             << right << setw(4) << array[i] << right << setw(4) << " |"
             << endl;
    }

    //  penutup tabel
    cout << "--------------------------------------------------------------------------------" << endl;

    
}

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
void search(int array[], int kapasitas) {// nayla
    int pilihan;
    cout << "masukkan pilihan : ";
    cin >> pilihan;
    for (int i = 0; i < kapasitas; i++)
    {
        if (pilihan == array[i])
        {
            cout << "nilai kamu ada di index ke- " << i;
            cout << "\ndengan nilai : "<< array[i];
        }
        
    }
    
}
void keluar(){// dila

}

int main(){

    // data nama mahasiswa
    string nama_mahasiswa[10] = {" Deyoan Salsabila", " Naydila Chairunnisa Rambe", " Diaz Pranata Ginting", 
                                 " Rafa Fabian", " Nayla Talisa", " M. Farhan Praditya Harahap", 
                                 " Farah Al Fariz Pane", " Muhammad Azizi", " Faridha Izzati Hasugian", 
                                 " Chindi Christina Rajagukguk"};
    char gender[10] = {'P', 'P', 'L', 'L', 'P',
                       'L', 'P', 'L', 'P', 'P' };
    
    // data nilai mahasiswa
    int nilai[10] = {75, 60, 85, 90, 70, 88, 65, 80, 93, 62};
    int size = 10;

    // memanggil fungsi pembukaan 
    pembukaan(nama_mahasiswa, nilai, size, gender);
    

    // search(nilai, size);
    
    
    return 0;
}