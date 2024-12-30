#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void kelimeBirlestir(char *kelime1 ,char *kelime2 ,char* kelime3){
int k1 =0, k2 =0 ; 

for(int i =0;i<10 ; i++){

if(*(kelime1+i)== '\0'){
    break ; 
}
k1++ ; 
}
for(int i =0;i<10 ; i++){

if(*(kelime2+i)== '\0'){
    break ; 
}
k2++ ; 
}
int a =0 ; 
for(int i =0 ; i<k1;i++){
    *(kelime3+a)=*(kelime1+i); 
    a++ ; 
}
*(kelime3+k1) ='_';
int b =0 ; 
for (int i =k1+1 ; i<k1+1+k2;i++){
*(kelime3+i)=*(kelime2+b); 
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

kelimeBirlestir(kelime1 ,kelime2 ,kelime3) ; 
printf("birlestirilmis kelime : %s",kelime3); 



    return 0 ; 
}