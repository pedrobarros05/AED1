#include<stdio.h>
#include<stdlib.h>



int main () {
	int tam, i, *v;
	

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);

	v = (int *) malloc(sizeof(int));


	for (i = 0; i< tam; i++){
		printf("Digite o valor para a posição %d do vetor: ", i +1 );
		scanf("%d", &v[i]);

	}

	printf("Valores dentro do vetor: \n");

	for(i = 0; i<tam; i++){
		printf("%2d\n", v[i] );
	}

	free(v);

	return 0;
}