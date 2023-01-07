#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//deklarasi fungsi
float luas_segitiga(void);
//deklarasi variabel
float panjang_alas,tinggi;

main()
{
    system("cls");

    printf("masukan panjang alas = "); scanf("%f",&panjang_alas);
    printf("masukan tinggi = "); scanf("%f",&tinggi);
    printf("luas segitiga adalah %.2f",luas_segitiga()); 
    getch();
    return 0;
}

//definisi fungsi
float luas_segitiga(){
    return(0.5*panjang_alas*tinggi);
}