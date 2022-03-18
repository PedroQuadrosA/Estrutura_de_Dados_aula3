#include <stdio.h>

struct pessoa{
  char nome[100];
  float peso;
};

int main(){

  struct pessoa pessoa1;
  //struct pessoa pessoa2;

  printf("Nome: ");
  getchar();
  scanf("%[^\n]", pessoa1.nome); //é uma maneira de travar o cursor parar para receber string
  printf("Peso: ");
  scanf("%f", &pessoa1.peso);

  printf("\nNome: %s | Peso: %f.\n", pessoa1.nome, pessoa1.peso);
}
