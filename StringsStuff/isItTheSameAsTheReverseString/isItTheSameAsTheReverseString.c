#include <stdio.h>

//Burak Önce   20120205052
//Bu program girilen stringin tersiyle aynı olup olmadığına bakar
//aynı ise 1, farklı ise 0 döner

int gecis=0;
int uzunluk;
int temp;
char string2;

int tersi_ile_ayni_mi(char *string) //fonksiyon
{
for(int i=0 ; string[i]!='\0'; i++)//dizi uzunluğu bulunur
uzunluk++;

for(int i=0,j=uzunluk; i<(uzunluk/2) ; i++,j--){
if(string[i]==string[j-1]) //dizi ataması yapılır (terse çevrilir)
gecis++;
}

if(gecis>=(uzunluk/2)-1)
return 1; 

else 
return 0;

}
char* tersbas(char n[], int uzunluk) //fonksiyon
{
static int x=11;  //static ile fonksiyon her döndüğünde x in değerinin değişmesini sağlarız
if(x==0)
return 0;
printf("%c",n[x-1]);
x--;
return tersbas(n,uzunluk);  //recursive kısım
}



int main() {

char string[20];

for(int i=0 ; i<20 ; i++)
scanf("%20s",string);


printf("%d", tersi_ile_ayni_mi(string));


  return 0;
}