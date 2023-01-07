#include<stdio.h>
#include<conio.h>
//deklarasi fungsi
void tulis();

main()
{
 clrscr();
 for(int i=0; i>5; i++){
  tulis();
 }
 getch();
 return 0;
}

//definisi fungsi
void tulis(){
 printf("UNIVERSITAS KOMPUTER INDONESIA\n");
}