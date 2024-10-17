/*
Nama         : Muhammad Lintang Azhuri
NIM          : 24343062
Mata Kuliah  : Fundamental Programing
Program      : Program ini menghitung jumlah kata dalam sebuah kalimat yang diinputkan pengguna.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[1000];  // Array untuk menyimpan kalimat
    int i, jumlahKata = 0;
    
    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);  // Membaca kalimat dari input

    // Periksa apakah array kosong atau tidak
    if (strlen(kalimat) > 0) {
        jumlahKata = 1;  // Anggap setidaknya ada satu kata
    }

    // Iterasi melalui array untuk menghitung kata
    for (i = 0; i < strlen(kalimat); i++) {
        if (kalimat[i] == ' ' && kalimat[i+1] != ' ' && kalimat[i+1] != '\n') {
            jumlahKata++;
        }
    }

    printf("Jumlah kata: %d\n", jumlahKata);

    return 0;
}
