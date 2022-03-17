#include <stdio.h>

void procedimento_imprime_menu(){
  printf("\n\nEscolha o filme:\n1 - Senhor dos aneis\n2 - Batman\n3 - Guerra Infinita");
}

void potencia(float b, float e){
  int i, j;
  float aux,r;

  aux = b;
  for (i=0; i < e-1; i++){
    r = 0;
    for(j = 0; j < aux; j++){
        r = r + b;
    }
    aux = r;
  }
  //return r; quando a função nao for void precisa retornar um parametro
  printf("Potencia: %f", r);
  printf("\nPotencia: %f", aux);
}

int main() {
  float base, expoente;
  
  procedimento_imprime_menu();
  
  printf("\n\nBase: ");
  scanf("%f", &base);
  printf("Expoente: ");
  scanf("%f", &expoente);

  
  potencia(base, expoente);
  //printf("\nPotencia: %f ",potencia(base, expoente)); >> aqui usaremos quando a função nao for void
  
}
