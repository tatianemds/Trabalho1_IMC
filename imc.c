#include <stdio.h>
#include <math.h>
int main ()
{
float peso=0;
float altura=0;
float imc=0;
float calculo;

printf("Informe a sua altura: ");
scanf("%f",&altura);
printf("Informe o seu peso: ");
scanf("%f",&peso);
imc=peso/(altura*altura);//consertar a altura 

printf("imc: %f", imc);
if (imc<19)
 
    printf("\n Você está magra!");
 
if ((imc>= 20) && (imc<=25))
 
    printf("\n Você está com o peso ideal!");
 
if ((imc>= 26) &&(imc<=30))
 
    printf("\n Você está acima do peso!");
 
if (imc>= 31)
 
    printf("\n Você está obesa, sendo a situação prejudicial para sua saúde!");
 
return 0;
}
