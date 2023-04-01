#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

//Burak Önce  20120205052
//Bu program stringde istenen kelimeden kaç tane olduğunu bulur

int kelime_say(char *paragraf, char *kelime)
{
//strtok kullanmadan yapıldığında yazdığım kodda çok fazla if ve for bulunduğu için hackerrank hata vermekte
//bu sebeple strtok kullanılmıştır
int gecis=0;

const char del[2] = " ";

int i = 0;

char *token,*string2[12];
token = strtok(paragraf, del); //token dizi ataması için gerekli

while( token != NULL ) { //null a gelindiğinde döngünün durması için 

string2[i]=token;
token = strtok(NULL, del);
i++;
}

for(int i = 0 ; i<11 ; i++)
{
  
if(!strcmp(string2[i],kelime)) //kaç tane olduğunun bulunuşu
gecis++;

}
return gecis ;
}



int main() {
   
   char b[]={"Bir berber bir berbere gel beraber bir berber dükkanı açalım demiş"};
    char b1[]={"berber"};

    char c[]={"Bir berber bir berbere gel beraber bir berber dükkanı açalım demiş"};
    char c1[]={"berbere"};

    char d[]={"Bir berber bir berbere gel beraber bir berber dükkanı açalım demiş"};
    char d1[]={"kim demiş"};

  printf("%d \n",kelime_say(b, b1));
  
  printf("%d \n",kelime_say(c, c1));
  
  printf("%d \n",kelime_say(d, d1));
    
    

return 0;
}