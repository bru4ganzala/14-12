#include <stdio.h>
#include <stdlib.h>


int main (void){
 intvet[TAMANHO], i;
 int *Endvet;
Endvet = veterinário;

 printf("\tDigite %d elementos:\n",SIZE);

 for(i = 0; i < SIZE; i++){
  printf("%d:",i+1);
    scanf("%d", &vet[i]);
 }

 printf("\n\tELEMENTOS:\n\n");
    for(i = 0; i < SIZE; i++){
        printf("%d",vet[i]);
 }
 printf("\n\n ENDERECOS DO ARRAY:\n");

 for(i = 0; i < SIZE; i++){
     printf("%i:%i:%i\n",i+1, vet[i], Endvet++);
 }

 printf("\n ENDERECOS DO ARRAY PAR:\n");

Endvet = veterinário;

 for(i = 0; i < SIZE; i++){

  if(vet[i] %2 == 0){
   printf("\nNumero%d eh par : Posicao =%d",vet[i], Endvet);
  }
  Endvet++;
 }
