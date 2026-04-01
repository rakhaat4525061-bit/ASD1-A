#include <iostream>
#include <string>
#include <locale>	
using namespace std;

int main( ){
//Deklarasi STRUKTUR
struct BUKU {
string judul;
string pengarang;
int tahun;
float harga;};
//Pendefinisian STRUKTUR
BUKU Dabuk;
//Pengaksesan anggota struktur
Dabuk.judul = "pelagi";
Dabuk.pengarang = "fulan";
Dabuk.tahun = 2009 ;
Dabuk.harga = 140000;

cout.imbue(locale(""));

cout << endl;
cout << "Judul Buku		:" <<Dabuk.judul<<endl;
cout << "Pengarang		:" <<Dabuk.pengarang<<endl;
cout << "Tahun Terbit		:" <<Dabuk.tahun<<endl;
cout << "Harga Buku		:Rp" <<(int)Dabuk.harga  <<endl;
return 0 ; 
}