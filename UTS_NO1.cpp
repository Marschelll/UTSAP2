#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string kom;
    string mataKuliah;
    int nilaiTugas;
    int nilaiQuis;
    int nilaiUts;
    int nilaiUas;
    string namaDosenPA;
};

char hitungNilai(int totalNilai) {
    if (totalNilai >= 90) return 'A';
    else if (totalNilai >= 80) return 'B';
    else if (totalNilai >= 70) return 'C';
    else if (totalNilai >= 60) return 'D';
    else return 'E';
}

void printMahasiswa(Mahasiswa mhs) {
    int totalNilai = (mhs.nilaiTugas + mhs.nilaiQuis + mhs.nilaiUts + mhs.nilaiUas) / 4;
    cout << "Nama: " << mhs.nama << endl;
    cout << "NIM: " << mhs.nim << endl;
    cout << "KOM: " << mhs.kom << endl;
    cout << "Mata Kuliah: " << mhs.mataKuliah << endl;
    cout << "Nilai : " << hitungNilai(totalNilai) << endl;
}

int main() {
    Mahasiswa mhs;
    cout << "Masukkan nama: ";
    cin >> mhs.nama;
    cout << "Masukkan NIM: ";
    cin >> mhs.nim;
    cout << "Masukkan kom: ";
    cin >> mhs.kom;
    cout << "Masukkan Mata Kuliah: ";
    cin >> mhs.mataKuliah;
    cout << "Masukkan Nilai Tugas: ";
    cin >> mhs.nilaiTugas;
    cout << "Masukkan Nilai Quis: ";
    cin >> mhs.nilaiQuis;
    cout << "Masukkan Nilai UTS: ";
    cin >> mhs.nilaiUts;
    cout << "Masukkan Nilai UAS: ";
    cin >> mhs.nilaiUas;
    cout << "Masukkan Nama Dosen PA: ";
    cin >> mhs.namaDosenPA;
    printMahasiswa(mhs);
    return 0;
}