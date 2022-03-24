#include <stdio.h>

struct pessoa{
  char nome[100];
  float peso;
  double altura;
  int cpf;
};

int main(){

  
  //struct pessoa pessoa2;
  int n, i;

  printf("Digite a quantidade de pessoas que deseja cadastrar no sistema: ");
  scanf("%d", &n);
  struct pessoa pessoa[n];
  
  for(i = 0; i < n; i++){
    printf("Nome: ");
    getchar();
    scanf("%[^\n]", pessoa[i].nome); 
    printf("Peso: ");
    scanf("%f", &pessoa[i].peso);
    printf("Altura: ");
    scanf("%lf", &pessoa[i].altura);
    printf("CPF: ");
    scanf("%d", &pessoa[i].cpf);
  }
  
  for(i = 0; i < n; i++){
	printf("\nNome: %s | Peso: %f | Altura: %lf | CPF: %d\n", pessoa[i].nome, pessoa[i].peso, pessoa[i].altura, pessoa[i].cpf);
  }
  
  return 0;
}
