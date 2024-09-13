#include <stdio.h>

int Potencia (int a, int b){
    int resul = 1, i;
    for (int i = 0; i < b; i++){
     resul*= a;
}
return resul;
}
int main (){
int v1, v2, Vt;
printf ("Digite a base:");
scanf ("%i", &v1);
fflush(stdin);
printf ("Digite o expoente:");
scanf ("%i", &v2);
fflush(stdin);
Vt = Potencia(v1, v2);
printf ("%i ^ %i = %i", v1, v2, Vt);
return 0;
}
