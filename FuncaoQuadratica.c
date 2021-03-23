#include <stdio.h>
#include <math.h>

/*Programa que verifica se a fun��o quadr�tica possui zeros e os exibe em v�deo*/
int main (void) {
	float a, b, c, x, y;//Coeficientes e vari�veis da fun��o.
	float d, r1, r2;//Discriminante e ra�zes.
	
	y = a*pow(x,2) + b*x + c;//Lei de correspond�ncia.
	
	printf("Impute a, b e c: \n");
	scanf("%f %f %f", &a, &b, &c);
	
	d = pow(b,2) - 4*a*c;//Discriminante da fun��o quadr�tica("Delta").
	
	switch ( d > 0 ) {
		case 1:
			r1 = (-b + sqrt(d)) / (2 * a);//Primeira raiz real.
			r2 = (-b - sqrt(d)) / (2 * a);//Segunda raiz real.
			printf("As raizes valem: %.2f e %.2f\n", r1, r2);
			break;
		case 0:
			switch ( d < 0 ) {
				case 1:
					printf("Nao possui raizes reais!\n");//Discriminante negativo n�o gera ra�zes reais.
					break;
				case 0:
					switch ( d == 0 ) {
						case 1:
							r1 = r2 = -b / (2 * a);//Equivale a coordenada horizontal do v�rtice da par�bola.
							printf("As raizes sao iguais e valem: %.2f\n", r1);//r1 = r2.
							break;
						case 0: printf("\aInvalido\n"); break;
					} break;
			} break;
	}
	
	return 0;
}
