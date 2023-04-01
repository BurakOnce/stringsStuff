#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


//Burak Önce   20120205052
//Bu program dizideki stringin tersini yazar
//(pointer kullanarak )


char *ters_cevir(char *string, int uzunluk) //fonksiyon
{
static int x=7;  //static ile fonksiyon her döndüğünde x in değerinin değişmesini sağlarız
if(x==0)
return 0;
printf("%c",string[x-1]);
x--;
return ters_cevir(string,uzunluk);  //recursive kısım
}


int main() {
  
char* arr="merhaba";


ters_cevir(arr,8);

  return 0;
}