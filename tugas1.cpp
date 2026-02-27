// KELOMPOK 6 KOM C TUGAS 2

#include <iostream>
// penggunaan io manip untuk input output manipulation 
// biasanya dipakai untuk mengatur lebar kolom, rata kanan kiri, dan format tabel
#include <iomanip>
using namespace std;

// yoan
void pembukaan(string nama_mahasiwa[], 
               int array[], 
               int kapasitas,
               char Gender[]) { //penggunaan parameter untuk mengefesiensi program karena di deklasrasikan 1 kali di dalam fungsi main.

    // pembukaan
    cout << "SELAMAT DATANG DI PROGRAM APLIKASI ARRAY!" << endl;
    cout << "BERIKUT ADALAH TABEL NILAI KOM C" << endl;

    // bagan tabel
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "|  NO |" << right << setw(35) //right untuk memberi spasi kanan. setw(35) artinya sebanyak 35 space
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

void ascending(string nama_mahasiwa[], 
               int array[], 
               int kapasitas,
               char Gender[]) {
    int sementara;
    string NamaSementara; // variabel untuk menampung nama sementara saat proses tukar data
    char GenderSementara; // variabel untuk menampung gender sementara saat proses tukar data
    for (int i = 0; i < kapasitas - 1; i++)// loop luar => untuk 9 kali putaran, setiap putaran menetukan angka terbesar ke terkecil, misalnya putaran 1 menetukan angka terbesar lalu putaran kedua menentukan angka terbesar kedua
    {
        for (int j = 0; j < kapasitas - i - 1; j++)// loop dalam +> looping untuk membandingka data-data di dalam array
        {
            if (array[j] > array[j + 1])// if untuk membandingkan 2 angka yang bersebelahan, jika angka di sebelah kiri lebih besar maka akan ditukar posisinya dengan angka di sebelah kanan
            {
                // mekanismenya : jika angka sebelah kiri lebih besar dari angka sebelah kanan
                sementara = array[j]; //simpan angka sebelah kiri ke dalam variabel sementara
                array[j] = array[j + 1]; // angka sebelah kanan dipindah ke kiri
                array[j + 1] = sementara; // angka yang disimpan di variabel sementara(angka sebelah kiri) dipindah ke kanan

                // menukar nama
                NamaSementara = nama_mahasiwa[j];
                nama_mahasiwa[j] = nama_mahasiwa[j + 1];
                nama_mahasiwa[j + 1] = NamaSementara;

                // menukar gender
                GenderSementara = Gender[j];
                Gender[j] = Gender[j + 1];
                Gender[j + 1] = GenderSementara;
            
        }
        
    }
    
} 
   cout << "YEYY DATA BERHASIL DIURUTKAN DARI YANG TERKECIL!" << endl;
} 

void descending(string nama_mahasiwa[], 
               int array[], 
               int kapasitas,
               char Gender[]) {

    int sementara; 
    // variabel ini cuma buat nampung angka sementara waktu proses tukar data
    // karena kalau langsung ditukar tanpa penampung, nilainya bisa hilang
    string NamaSementara; // variabel untuk menampung nama sementara saat proses tukar data
    char GenderSementara; // variabel untuk menampung gender sementara saat proses tukar data


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

                // menukar nama
                NamaSementara = nama_mahasiwa[j];
                nama_mahasiwa[j] = nama_mahasiwa[j + 1];
                nama_mahasiwa[j + 1] = NamaSementara;

                // menukar gender
                GenderSementara = Gender[j];
                Gender[j] = Gender[j + 1];
                Gender[j + 1] = GenderSementara;

            }
        }
    }
     cout << "YEYY DATA BERHASIL DIURUTKAN DARI YANG TERBESAR!" << endl;
}
void search(int array[], int kapasitas, string nama_mahasiswa[], char Gender[]) {// nayla
    int cari_nilai; // variabel untuk mmenampung input user saat search lewat nilai
    bool ditemukan = false;
     cout << "Masukkan Nilai yang ingin dicari: ";
     cin >> cari_nilai;

    for (int i = 0; i < kapasitas; i++)
    {
        if (cari_nilai == array[i])
        {
            ditemukan = true;
            cout << "DATA BERHASIL DITEMUKAN!" << endl;
            cout << "--------------------------------------------------------------------------------" << endl;

    // perulangan untuk tabel data
    //  menggunakan kapasitas agar perulangan berhenti jika nilai
    //  lebih kecil dari data yang tersedia.
    
        cout << "|" << right << setw(3) << i + 1 << right << setw(3) << "|" 
             << left << setw(35) 
             << nama_mahasiswa[i] << right << setw(20) << "|" 
             << right << setw(5) << Gender[i] << right << setw(5) << " | "
             << right << setw(4) << array[i] << right << setw(4) << " |"
             << endl;


    //  penutup tabel
    cout << "--------------------------------------------------------------------------------" << endl;
        }
    
    }
     if(!ditemukan){
            cout << "Data Tidak Ditemukan" << endl;
        }
    
          } 

int main(){

    // data nama mahasiswa
    string nama_mahasiswa[10] = {"Deyoan Salsabila", "Naydila Chairunisa Rambe", 
                                 "Diaz Pranata  Ginting", "Rafa Fabian", "Nayla Talisa", 
                                 "M. Farhan Praditya Harahap",  "Farah Al Fariz Pane", "Muhammad Azizih", "Faridha Izzati Hasugian", 
                                 "Cindy Christina Rajagukguk"};
    char gender[10] = {'P', 'P', 'L', 'L', 'P',
                       'L', 'P', 'L', 'P', 'P' };
    
    // data nilai mahasiswa
    int nilai[10] = {75, 60, 85, 90, 70, 88, 65, 80, 93, 62};
    int size = 10;
    int pilih_menu;
    bool jalan = true;

    
        while(jalan){
             cout << "=========== MENU ===========" << endl;
            cout << "1. Tampilkan Data" << endl;
            cout << "2. Mencari Suatu Nilai" << endl;
            cout << "3. Urutkan Nilai Ascending" << endl;
            cout << "4. Urutkan Nilai Descending" << endl;
            cout << "5. Keluar" << endl;
            cout<<"Masukkan pilihan : ";
            cin >> pilih_menu;

            switch (pilih_menu) {
            case 1: pembukaan(nama_mahasiswa, nilai, size, gender); //memanggil fungsi pembukaan
            break;
            case 2:system("cls"); // untuk membersihkan output setelah menekan   enter.
                   search(nilai, size, nama_mahasiswa, gender); // memanggil fungsi pembukaan
            break;
            case 3: system("cls"); // untuk membersihkan output setelah menekan   enter.
                    ascending(nama_mahasiswa, nilai, size, gender); // memanggil fungsi ascending
                    pembukaan(nama_mahasiswa, nilai, size, gender);
            break;
            case 4: system("cls"); // untuk membersihkan output setelah menekan   enter.
                    descending(nama_mahasiswa, nilai, size, gender);
                    pembukaan(nama_mahasiswa, nilai, size, gender);
            break;
            case 5: cout << "Kamu Telah Keluar Dari Program";
            break;
            default:
                  cout << "Tidak ada menu dengan nomor " << pilih_menu << endl;
            }
            if (pilih_menu < 1 || pilih_menu >= 5)
            {
                jalan = false;
            }
            
        }
       
        
    return 0;
}