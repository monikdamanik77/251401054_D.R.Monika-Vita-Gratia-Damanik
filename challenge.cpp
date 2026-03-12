#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");

    for (int i = 7; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
