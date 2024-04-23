#include <iostream>
using namespace std; // menggunakan namespace std

int main () {
    system ("CLS");

    string a;
    // Menghapus baris kode yang tidak diperlukan
    cout << "Tebak Umur Saya : "; // menambahkan titik koma di akhir statement
    cin >> a; // menggunakan operator >> untuk input

    if (a == "20"){ // membandingkan dengan string "20"
        cout << "Jawaban Anda Benar" << endl;
    } else { // menggunakan else tanpa kondisi
        cout << "Jawaban Salah, Coba Lagi..." << endl;
        main(); // menggunakan rekursi untuk kembali ke awal program
    }
    
    cout << "Program Selesai";

    return 0;
}
