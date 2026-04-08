#include <iostream>
using namespace std;

class Barang {
    public:
        char namaBarang[30];
        long harga;
        int jumlah;
        long total;
};

int main() {
    Barang brg; 

    cout << "Nama Barang    = "; 
    cin >> brg.namaBarang;
    
    cout << "Harga Barang   = "; 
    cin >> brg.harga;
    
    cout << "Jumlah Beli    = "; 
    cin >> brg.jumlah;

    brg.total = brg.harga * brg.jumlah;

    cout << endl;
    cout << "Data Penjualan Barang" << endl;
    cout << "Nama Barang    = " << brg.namaBarang << endl;
    cout << "Harga Barang   = " << brg.harga << endl;
    cout << "Jumlah Beli    = " << brg.jumlah << endl;
    cout << "Total Bayar    = " << brg.total << endl;

    cin.get();
}