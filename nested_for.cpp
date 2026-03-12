#include <iostream> 
#include <cstdlib>
using namespace std;
//nested for
int main() {
    system ("cls");
    int a, b;

    cin >> a;
    cin >> b;
    system ("cls");
    for (int i = a; i <= 5; i++) {
        // i = 3; 3 <= 5; 3++
        for (int j = b; j <= 5; j++) {
            // j = 4; 4 <= 5; 4++
            cout << "*" ;
        }
        cout << endl;
    }
}
