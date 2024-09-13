#include <stdio.h>

int Menorvalor (int a, int b){
if (a < b){
    return a;
}
else{
    return b;
}
}
int main (){
int v1, v2, menor;
printf ("Digite um valor:");
scanf ("%i", &v1);
fflush(stdin);
printf ("Digite outro valor:");
scanf ("%i", &v2);
fflush(stdin);
menor = Menorvalor(v1, v2);
printf("O menor valor e: %i", menor);
return 0;
}
