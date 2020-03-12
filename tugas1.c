#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pilihan,Z;
    float X,Y,hasil;
    start:
    printf("Program Kalkulator Sederhana\n\n");
    printf("Masukan Angka Pertama : ");scanf("%f",&X);
    printf("Masukan Angka Kedua   : ");scanf("%f",&Y);
    printf("1. Tambah\n");
    printf("2. Kurang\n");
    printf("3. Kali\n");
    printf("4. Bagi\n");
    printf("Masukan Pilihan : ");scanf("%d",&pilihan);
    system("cls");
    switch(pilihan)
    {
        case 1: {printf("Penjumlahan\n");
                hasil=X+Y;
               printf("%.0f + %.0f = %.0f",X,Y,hasil); }
            break;
        case 2: {printf("Pengurangan\n");
                hasil=X-Y;
               printf("%.0f - %.0f = %.0f",X,Y,hasil); }
            break;
        case 3: {printf("Perkalian\n");
                hasil=X*Y;
               printf("%.0f * %.0f = %.0f",X,Y,hasil); }
            break;
        case 4: {printf("Pembagian\n");
                hasil=X/Y;
               printf("%.2f / %.2f = %.2f",X,Y,hasil); }
            break;
        default: printf("Pilihan salah");
            break;
    }
    printf("\nIngin menghitung lagi(1/0)?");scanf("%d",&Z);
    if(Z==1)
    {
        system("cls");
        goto start;
    }
    else return 0;
}