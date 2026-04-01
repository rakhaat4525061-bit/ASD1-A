#include <iostream>
using namespace std;

int main() {
    int *pn;
    pn  = new int;   // alokasi memori dinamis
    *pn = 44;        // isi variabel = 44

    cout << endl;
    cout << "Isi Variabel = " << *pn << endl;
    cout << endl;

    cin.get();
}