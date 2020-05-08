#include<stdio.h>
#include<stdlib.h>
int main(){
    int z,y;
    float adicao,subtracao,mult,divisao,resto;
    printf("digite um valor para y e z:");
    scanf("%f%f",&y,&z);
    adicao = y+z;
    subtracao = y-z;
    mult = y*z;
    divisao = y/z;
    resto = y%z;
    printf("o resultado das operacoes e:%f%f%f%f%f",adicao,subtracao,mult,divisao,resto);

    system("pause");
    return 0;



}





































