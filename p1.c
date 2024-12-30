#include <stdio.h>
#include <stdlib.h>


void kelimeBirlestir(char *kelime1 ,char *kelime2 ,char* kelime3){
int k1 =0, k2 =0 ;

for(int i =0;i<10 ; i++){

if(*(kelime1+i)== '\0'){ // \0 geldiðinde dur
    break ;
}
k1++ ;   // kelime 1 in karakter sayýsýný buluyoruz
}
for(int i =0;i<10 ; i++){

if(*(kelime2+i)== '\0'){//\0 geldiðinde dur
    break ;
}
k2++ ;  // kelime 2 nin karakter sayýsýný buluyoruz
}
int a =0 ;
for(int i =0 ; i<k1;i++){
    *(kelime3+a)=*(kelime1+i);  // kelime 1 deki karakterleri sýrayla kelime 3 e aktarýyoruz
    a++ ;
}
*(kelime3+k1) ='_'; // kelime 1 ve kelime 2 arasýna _ býrakýyoruz
int b =0 ;
for (int i =k1+1 ; i<k1+1+k2;i++){ //i yi k1+1 den baþlatýyoruz çünkü k1 de þuan _ var ve keþme 2 nin baþlangýç noktasý k1+1 dir
*(kelime3+i)=*(kelime2+b); // kelime2 nin ilk deðiþkeninden baþlayarak kelime3 ün _ sinden sonraya aktarýyoruz
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

kelimeBirlestir(kelime1 ,kelime2 ,kelime3) ; // kelimeler mallocla oluþturulduðu için & iþaretine gerek yoktur kendileri zaten adrestir
printf("birlestirilmis kelime : %s",kelime3);



    return 0 ;
}
