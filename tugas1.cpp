#include <iostream>
using namespace std;

void ascending(int array[], int kapsitas) {
    int temp;
    for (int i = 0; i < kapsitas - 1; i++)// loop luar => 
    {
        for (int j = 0; j < kapsitas - i - 1; j++)// loop dalam
        {
            if (array[j] > array[j + 1])// kondisi
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
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
void keluar(){// keluar

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