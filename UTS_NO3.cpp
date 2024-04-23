#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Inputkan nilai n: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i += 2) {
        sum += i * i;
    }
    cout << "Jumlah kuadrat bilangan ganjil sampai " << n << " = " << sum << endl;
    return 0;
}