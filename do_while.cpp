#include <iostream>         
#include <cstdlib>
using namespace std;
// perulangan do while
int main() {
    system ("cls");
    int a = 1; //inisiasikan dulu

    do {   
        cout << a << endl;  //yg diinisiasikan dicetak dulu
        a++;  //supaya bertambah 1
    } while (a<=10); // berhenti jika a kurang atau sama dengan 10
}
