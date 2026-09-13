#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese numero: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << "El numero " << n << " es par";
    } else {
        cout << "El numero " << n << " es impar";
    }
    return 0;
}
