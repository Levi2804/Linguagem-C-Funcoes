#include <stdio.h>
#include <locale.h>

void verificaZero(int v);
int main(){
	setlocale(LC_ALL, "Portuguese");
int n;
	printf("Informe um n�mero inteiro: ");
	scanf("%i", &n);
	verificaZero(n);
return(0);
}

void verificaZero(int v){
  if(v == 0) {
        printf("O valor � zero!\n");
    } else {
        printf("O valor n�o � zero!\n");
    }
}
