#include <iostream>
#include <string>
using namespace std;

int main() {
    // deklarasi struktur
    struct MATAKULIAH {
        string nama;
        int sks;
        char nHuruf;
        float nAngka;
    };
    // Pendefinisian STRUKTUR
    MATAKULIAH Data_MK;
    // Pengaksesan anggota struktur
    Data_MK.nama = "Algoritma dan pemrograman 2";
    Data_MK.sks = 3;
    Data_MK.nHuruf = 'A';
    Data_MK.nAngka = 4.00;
    cout << endl;
    cout << "Mata kuliah = " << Data_MK.nama << endl;
    cout << "Jumlah sks = " << Data_MK.sks << endl;
    cout << "Nilai huruf = " << Data_MK.nHuruf << endl;
    cout << "Nilai angka = " << Data_MK.nAngka << endl;
cin.get();}
