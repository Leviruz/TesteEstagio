#include <stdio.h>
#include <string.h>
int verifyFibonacci(int num){
    int a = 0, b = 1, aux;

    if(num == a || num == b){
        return 1;
    }

while (b<=num){
    aux = a + b;
     a = b;
     b = aux;
if (b==num){
    return 1;
}
}
return 0;
}

int main(){
    int num;
    printf("informe um numero por favor: ");
    scanf("%d",&num);

    if(verifyFibonacci(num)){
    printf("o numero %d pertence a sequência de fibonacci\n",num);
    }
    else{
    printf("o numero %d não pertence a sequência de fibonacci\n",num);
    }
}