#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Daftar Mahasiswa\n");
    char nama[40],nim[20],kelas,alamat[40],hp[20],bulan[10];
    int tanggal,tahun,umur;

    printf("Nama : ");
    gets(nama);
    fflush(stdin);

    printf("NIM : ");
    scanf("%s", &nim);
    fflush(stdin);

    printf("Kelas : ");
    scanf(" %c", &kelas);
    fflush(stdin);

    printf("Alamat : ");
    gets(alamat);
    fflush(stdin);

    printf("No HP : ");
    scanf("%s", &hp);
    fflush(stdin);

    printf("Tanggal Lahir : ");
    scanf("%d", &tanggal);
    scanf("%s", &bulan);
    scanf("%d", &tahun);
    fflush(stdin);

    umur = 2021-tahun;
    printf("\n");

    printf("************Terimakasih Telah Mendaftar!************");
    printf("\n");
    printf("\n");
    printf("Nama : %s\n", nama);
    printf("NIM : %s\n",nim);
    printf("Kelas : %c\n", kelas);
    printf("Alamat : %s\n", alamat);
    printf("No HP : %s\n", hp);
    printf("Tanggal lahir : %d", tanggal);
    printf(" %s", bulan);
    printf(" %d\n", tahun);
    printf("Umur : %d\n", umur);
    return 0;
}



