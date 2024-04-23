#include <iostream>
using namespace std;

int main() {
    int pilihan;
    string calon_presiden[7] = {"Soekarno", "Soeharto", "Bj. Habibie", "Gusdur","Megawati","SBY", "Jokowi"};

    cout << "Daftar Calon Presiden:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << i + 1 << ". " << calon_presiden[i] << endl;
    }

    cout << "Masukkan Pilihan Presiden anda : ";
    cin >> pilihan;

    cout << "Pilihan anda telah disimpan, pilihan anda adalah " << calon_presiden[pilihan - 1] << endl;

    return 0;
}