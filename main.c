#include <stdio.h>

int main() {
    char nama[50];
    char bahasa[50];

    printf("Masukkan Nama: ");
    scanf("%s", nama);

    printf("Masukkan Bahasa Pemrograman Favorit Anda: ");
    scanf("%s", bahasa);

    printf("Nama saya %s\n", nama);
    printf("Bahasa pemrograman favorit saya adalah %s\n", bahasa);

    return 0;
}
