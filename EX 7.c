#include <stdio.h>

int par (int a){
if(a % 2 == 0) return 1;
else return 0;
}
int main(){
int b;
printf ("Digite um valor:");
scanf ("%i", &b);
fflush(stdin);

printf ("%i",par(b) );
 return 0;
}
