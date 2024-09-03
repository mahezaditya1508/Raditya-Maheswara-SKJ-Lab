#include <iostream>

using namespace std;

int main() {
    // Deklarasi variabel
    int num1 = 5;          // Sama dengan 'num1 dw 5'
    int num2 = 10;         // Sama dengan 'num2 dw 10'
    int result = 0;        // Sama dengan 'result dw 0'

    // Perkalian num1 dan num2
    result = num1 * num2;  // Sama dengan 'imul ax, [num2]' di assembly

    // Menampilkan hasil
    cout << "Hasil perkalian: " << result << endl;

    // Keluar dari program dengan status 0 (berhasil)
    return 0;              // Sama dengan 'mov eax, 1' dan 'xor ebx, ebx' di assembly
}

