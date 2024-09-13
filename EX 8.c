#include <stdio.h>

int valor(int a){
    if(a>0)return 1;
    else if(a==0) return 0;
    else return -1;
}

int main(){
    int a;
    printf("Valor: ");
    fflush(stdin);
    scanf("%i",&a);
    printf("%i",valor(a));
     return 0;
}
