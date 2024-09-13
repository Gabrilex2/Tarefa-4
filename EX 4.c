#include <stdio.h>

int Valorabsoluto(int a){
   if (a < 0){
    a *= -1;
   }
    return a;
}
int main (){
int v1, v2, v3, v4, v5;
printf ("Digite um valor:");
scanf ("%i", &v1);
fflush(stdin);
printf ("Digite outro valor:");
scanf ("%i", &v2);
fflush(stdin);
printf ("Digite um valor:");
scanf ("%i", &v3);
fflush(stdin);
printf ("Digite um valor:");
scanf ("%i", &v4);
fflush(stdin);
printf ("Digite um valor:");
scanf ("%i", &v5);
fflush(stdin);
printf("O valor absoluto e: %i, %i, %i, %i, %i", Valorabsoluto(v1),Valorabsoluto (v2), Valorabsoluto(v3), Valorabsoluto(v4), Valorabsoluto(v5));
return 0;
}
