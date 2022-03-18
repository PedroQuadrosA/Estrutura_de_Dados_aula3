#include <stdio.h>

struct pessoa{
  char nome[100];
  float peso;
  double altura;
  int cpf;
};

int main(){

  
  //struct pessoa pessoa2;
  int n;

  printf("Digite a quantidade de pessoas que deseja cadastrar no sistema: ");
  scanf("%d", &n);
  struct pessoa pessoa[n];
  
  for( int i = 0; i < n; i++){
    printf("Nome: ");
    getchar();
    scanf("%[^\n]", pessoa[n].nome); //é uma maneira de travar o cursor parar para receber string
    printf("Peso: ");
    scanf("%f", &pessoa[n].peso);
    printf("Altura: ");
    scanf("%lf", &pessoa[n].altura);
    printf("CPF: ");
    scanf("%d", &pessoa[n].cpf);
    
  
   printf("\nNome: %s | Peso: %f | Altura: %lf | CPF: %d\n", pessoa[n].nome, pessoa[n].peso, pessoa[n].altura, pessoa[n].cpf);
  }
}
