#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//deklarasi fungsi
void input_data_segitiga(void);
void luas_segitiga(void);
//deklarasi variabel global
float panjang_alas,tinggi,luas;

main(){
    system("cls");
    input_data_segitiga();
    luas_segitiga();
    getch();
    return 0;
}

//definisi segitiga
void input_data_segitiga(){
    printf("Masukan panjang alas = "); scanf("%f",&panjang_alas);
    printf("Masukan tinggi       = "); scanf("%f",&tinggi);
}

void luas_segitiga(){
    luas = 0.5*panjang_alas*tinggi;
    printf("Luas segitiga adalah %.2f",luas);
}
