#include <stdio.h>
float nota(float n1, float n2, float n3,char letra){
    float media=(n1+n2+n3)/3;
    float mediap=((n1*5)+(n2*3)+(n3*2))/10;
    float mediah= (3/((1/n1)+(1/n2)+(1/n3)));
    if(letra=='A' || letra=='a')return media;
    else if(letra=='P' || letra=='p')return mediap;
    else if(letra=='H' || letra=='h')return mediah;
}

void main(){
    char letra;
    float n1,n2,n3;
    printf("Nota 1: ");
    fflush(stdin);
    scanf("%f",&n1);
    printf("Nota 2: ");
    fflush(stdin);
    scanf("%f",&n2);
    printf("Nota 3: ");
    fflush(stdin);
    scanf("%f",&n3);

    printf("Digite sua opcao (A)(P)(H): ");
    fflush(stdin);
    scanf("%c",&letra);

    printf("A sua media e: %.2f",nota(n1,n2,n3,letra));
    return 0;
}
