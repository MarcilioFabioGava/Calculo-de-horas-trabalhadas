/*5) Faça um algoritmo que leia quanto você ganha por hora e o número de horas trabalhadas no
mês. Na sequência, calcule e mostre o total do seu salário no referido mês.

Entrada R$ valor por horas 
Entrada Número de horas trabalhadas

O que ele busca é o valor total do seu salário no mês.*/

#include <stdio.h>

    int main(){
        
        float salarioMes,salariohora,horasTrabalho;
        
        printf("Digite quanto você ganha por hora por mês (salário base/horas trabalhadas: ");
        scanf("%f",&salariohora);
        printf("Quantas horas você trabalhou no mês: ");
        scanf("%f",&horasTrabalho);
        
        salarioMes = horasTrabalho*salariohora;
        
        printf("O seu salário neste mês, será de: R$%.2f",salarioMes);
        
    return 0;    
    }