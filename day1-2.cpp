#include <iostream>
#include <string>
using namespace std;

// Deklarasi struktur
struct koordinat {
    int X;
    int Y;
};
// Prototipe
void Tampil_posisi(koordinat Posisi);
int main() {
    // Pendefinisian variabel struktur
    koordinat Posisi;
    // Pengaksesan anggota struktur
    Posisi.X = 56;
    Posisi.Y = 53;
    cout << endl;
    // Pemanggilan fungsi (sudah diperbaiki)
    Tampil_posisi(Posisi);
    cin.get();
}
// Definisi fungsi
void Tampil_posisi(koordinat Posisi) {
    cout << "Posisi Ordinat X adalah " << Posisi.X << endl;
    cout << "Posisi Ordinat Y adalah " << Posisi.Y << endl;
}