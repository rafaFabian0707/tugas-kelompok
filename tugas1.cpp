#include <iostream>
// penggunaan io manip untuk input output manipulation 
// biasanya dipakai untuk mengatur lebar kolom, rata kanan kiri, dan format tabel
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
    cout << "[ ";
    for (int i = 0; i < kapsitas - 1; i++)
    {
        cout << array[i] << " ";
    }
    cout << "]\n";

    
}
void descending(int array[], int kapasitas) {

    int sementara; 
    // variabel ini cuma buat nampung angka sementara waktu proses tukar data
    // karena kalau langsung ditukar tanpa penampung, nilainya bisa hilang

    // loop luar ini buat ngatur berapa kali proses pengurutan dilakukan
    // misalnya ada 10 data, berarti maksimal 9 kali putaran
    // setiap satu putaran, satu angka terbesar akan pindah ke depan
    for (int i = 0; i < kapasitas - 1; i++) 
    {
        // loop dalam ini buat bandingin angka yang posisinya bersebelahan
        // nanti dia bakal jalan dari indeks awal sampai batas tertentu
        // batasnya makin berkurang karena bagian belakang sudah terurut
        for (int j = 0; j < kapasitas - i - 1; j++) 
        {
            // karena ini descending (besar ke kecil),
            // kita cek apakah angka kiri lebih kecil dari angka kanan
            // kalau iya, berarti posisinya kebalik dan harus ditukar
            if (array[j] < array[j + 1]) 
            {
                // proses penukaran dimulai
                sementara = array[j]; 
                // simpan dulu angka sebelah kiri
                array[j] = array[j + 1]; 
                // angka kanan dipindahkan ke kiri
                array[j + 1] = sementara; 
                // angka yang tadi disimpan dipindahkan ke kanan
            }
        }
    }
    cout << "[ ";
    for (int i = 0; i < kapasitas - 1; i++)
    {
        cout << array[i] << " ";
    }
    cout << "]\n";
}
void search(int array[], int kapasitas, string nama_mahasiswa[]) {// nayla
    int pilihan;
    int cari_nilai;
    string cari_nama;
    

    cout << "Ingin Mencari nilai lewat apa ?" << endl;
    cout << "1. Nama" << endl;
    cout << "2. Nilai" << endl;
    cin >> pilihan;


    if (pilihan == 1)
    {
        cout << "masukkan nama : " << endl;
        getline(cin, cari_nama);
        for (int i = 0; i < kapasitas; i++)
        {
            if (cari_nama == nama_mahasiswa[i])
            {
                cout << "Nama Mahasiswa     : " << nama_mahasiswa[i] << endl;
                cout << "Nilai Mahasiswa    : " << array[i] << endl;
            }
            
        }
        
    }
    

        // switch (pilihan) {
        //     case 1: cout << "Search Nama Yang Ingin Kamu Cari : ";
        //             getline(cin,cari_nama);

        //             for (int i = 0; i < kapasitas - 1; i++) {
        //                 if (cari_nama == nama_mahasiswa[i])
        //                 {
        //                     cout << "Nama kamu ada di index ke - " << i + 1;
        //                     cout << "\nDengan Nama : " << nama_mahasiswa[i];
        //                     cout << "\nDengan Nilai : "<< array[i];
        //                 // } else {
        //                 //     cout << "Maaf, Gunakan Satu Kapital Disetiap Awal Nama" << endl;

        //                     // while (cari_nama != nama_mahasiswa[i]) {
        //                     //     cout << "Search Nama Yang Ingin Kamu Cari : ";
        //                     //     getline(cin,cari_nama);
        //                     // }
                            
        //                 } 
        //             }
        //     break;
        //     case 2: cout << "Search Nilai Yang Ingin Kamu Cari : ";
        //             cin >> cari_nilai;

        //             for (int i = 0; i < kapasitas; i++) {
        //                 if (pilihan == array[i])
        //                 {
        //                     cout << "Nilai kamu ada di index ke - " << i + 1;
        //                     cout << "\nDengan Nama : " << nama_mahasiswa[i];
        //                     cout << "\nDengan Nilai : "<< array[i];
        //                 }
        //             } 
        //     break;
        // };
    
}
void menu(){// dila

    cout << "\n" << endl;

}

int main(){

    // data nama mahasiswa
    string nama_mahasiswa[10] = {" Deyoan Salsabila", " Naydila Chairunnisa Rambe", 
                                 " Diaz Pranata  Ginting", " Rafa Fabian", " Nayla Talisa", " M. Farhan Praditya Harahap",  " Farah Al Fariz Pane", " Muhammad Azizi", " Faridha Izzati Hasugian", 
                                 " Chindi Christina Rajagukguk"};
    char gender[10] = {'P', 'P', 'L', 'L', 'P',
                       'L', 'P', 'L', 'P', 'P' };
    
    // data nilai mahasiswa
    int nilai[10] = {75, 60, 85, 90, 70, 88, 65, 80, 93, 62};
    int size = 10;
    int pilih_menu;

    do
    {

        
        cout << "=========== MENU ===========" << endl;
        cout << "1. Tampilkan Data" << endl;
        cout << "2. Mencari Suatu Nilai" << endl;
        cout << "3. Urutkan Nilai Ascending" << endl;
        cout << "4. Urutkan Nilai Descending" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih mana manis :V >> \n";
        cout<<"Masukkan pilihan : ";
        cin >> pilih_menu;

        switch (pilih_menu) {
        case 1: pembukaan(nama_mahasiswa, nilai, size, gender); //memanggil fungsi pembukaan
        break;
        case 2: search(nilai, size, nama_mahasiswa); // memanggil fungsi pembukaan
        break;
        case 3: ascending(nilai, size); // memanggil fungsi ascending
        break;
        case 4: descending(nilai, size);
        break;
        case 5: cout << "Kamu Telah Keluar Dari Program";
        break;
        }
    } while (pilih_menu != 5);
    

    

    return 0;
}