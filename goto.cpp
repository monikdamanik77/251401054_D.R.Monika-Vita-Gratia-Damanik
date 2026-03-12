#include <iostream>
#include <cstdlib>
using namespace std;
//suatu intruksi untuk melompat ke suatu bagian dalam program yg diidentifikasi dengan label
int main() {
    system("cls");
    //Laboratorium Ilmu Komputer 
    //program akan menjalankan perintah dari atas ke bawah
    goto a;  //melompat ke label a dan dijalankan
    b:
    cout << "Ilmu ";
    goto c;  //melompat ke label c dan dijalankan
    a: 
    cout << "Laboratorium ";
    goto b;  // melompat ke label b dan dijalankan
    c:
    cout << "komputer ";

    //jadi hasilnya  laboratorium  ilmu komputer

    //label :
    //goto label;

    //int a=1;
    
    //x:
    //cout << a << " ";
    //a++;

    //if (a <= 10) {
        //goto x;
    }

    
