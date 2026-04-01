#include <iostream>
using namespace std;

int main() {
    int pn;      
    int *ppn;    

    pn  = 14;    
    ppn = &pn;   

    cout << "Nilai awal  : " << pn   << endl;
    cout << "Via pointer : " << *ppn << endl;

    *ppn = 50;  

    cout << "-----------------------" << endl;
    cout << "Nilai akhir : " << pn   << endl;
    cout << "Via pointer : " << *ppn << endl;

    return 0;
}