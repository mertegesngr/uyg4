#include <stdio.h>
#include <stdlib.h>


void kelimeBirlestir(char *kelime1 ,char *kelime2 ,char* kelime3){
int k1 =0, k2 =0 ;

for(int i =0;i<10 ; i++){

if(*(kelime1+i)== '\0'){ // \0 geldi�inde dur
    break ;
}
k1++ ;   // kelime 1 in karakter say�s�n� buluyoruz
}
for(int i =0;i<10 ; i++){

if(*(kelime2+i)== '\0'){//\0 geldi�inde dur
    break ;
}
k2++ ;  // kelime 2 nin karakter say�s�n� buluyoruz
}
int a =0 ;
for(int i =0 ; i<k1;i++){
    *(kelime3+a)=*(kelime1+i);  // kelime 1 deki karakterleri s�rayla kelime 3 e aktar�yoruz
    a++ ;
}
*(kelime3+k1) ='_'; // kelime 1 ve kelime 2 aras�na _ b�rak�yoruz
int b =0 ;
for (int i =k1+1 ; i<k1+1+k2;i++){ //i yi k1+1 den ba�lat�yoruz ��nk� k1 de �uan _ var ve ke�me 2 nin ba�lang�� noktas� k1+1 dir
*(kelime3+i)=*(kelime2+b); // kelime2 nin ilk de�i�keninden ba�layarak kelime3 �n _ sinden sonraya aktar�yoruz
b++;
}
}





int main(){

char *kelime1= (char *)malloc(10*sizeof(char)) ;
char *kelime2= (char *)malloc(10*sizeof(char)) ;
char *kelime3= (char *)malloc(20*sizeof(char)) ;

printf("kelime1 giriniz : ");
gets(kelime1);
printf("kelime2 giriniz : ");
gets(kelime2);

kelimeBirlestir(kelime1 ,kelime2 ,kelime3) ; // kelimeler mallocla olu�turuldu�u i�in & i�aretine gerek yoktur kendileri zaten adrestir
printf("birlestirilmis kelime : %s",kelime3);



    return 0 ;
}
