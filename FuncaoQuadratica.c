#include <stdio.h>
#include <math.h>

/*Programa que verifica se a função quadrática possui zeros e os exibe em vídeo*/
int main (void) {
	float a, b, c, x, y;//Coeficientes e variáveis da função.
	float d, r1, r2;//Discriminante e raízes.
	
	printf("Impute a, b e c: \n");
	scanf("%f %f %f", &a, &b, &c);
	
	y = a*pow(x,2) + b*x + c;//Lei de correspondência.
	
	d = pow(b,2) - 4*a*c;//Discriminante da função quadrática("Delta").
	
	switch ( d > 0 ) {
		case 1:
			r1 = (-b + sqrt(d)) / (2 * a);//Primeira raiz real.
			r2 = (-b - sqrt(d)) / (2 * a);//Segunda raiz real.
			printf("As raizes valem: %.2f e %.2f\n", r1, r2);
			break;
		case 0:
			switch ( d < 0 ) {
				case 1:
					printf("Nao possui raizes reais!\n");//Discriminante negativo não gera raízes reais.
					break;
				case 0:
					switch ( d == 0 ) {
						case 1:
							r1 = r2 = -b / (2 * a);//Equivale a coordenada horizontal do vértice da parábola.
							printf("As raizes sao iguais e valem: %.2f\n", r1);//r1 = r2.
							break;
						case 0: printf("\aInvalido\n"); break;
					} break;
			} break;
	}
	
	return 0;
}
