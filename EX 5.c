#include <stdio.h>

int positivo(int a) {
    return a> 0;
}


int SomaDivisores(int a) {
    int soma=0;
    for(int i=1;i<=a/2;++i) {
        if(a%i==0){
            soma+=i;
        }
    }
    return soma;
}

void main() {
    setlocale (0,"Portuguese");
    int numeros[5];


    for (int i=0;i<5;++i) {
        do {
            printf("Digite o %iº número inteiro positivo: ", i+1);
            scanf("%i", &numeros[i]);
            if (!positivo(numeros[i])) {
                printf("O número deve ser positivo. Tente novamente.\n");
            }
        } while (!positivo(numeros[i]));
    }


    for (int i=0;i<5;++i) {
        int soma=SomaDivisores(numeros[i]);
        printf("A soma dos divisores de %i (exceto ele mesmo) é: %i\n", numeros[i], soma);
    }
     return 0;
}
