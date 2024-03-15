#include <stdio.h>

int main(){
    int indice = 13, soma = 0, k = 0;
    do{
        k = k+1;
        soma = soma+k;
    }
    while(k<indice);
printf("o valor da variável soma é : %d",soma);

    return 0;
}