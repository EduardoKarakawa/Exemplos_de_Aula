#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
	int n, r, vida, dnovo=1;
	srand(time(NULL));
	while (dnovo == 1) {
		n = 15 + rand() % 16;
		vida = 3;
		while (vida > 0) {
			printf("Informe um numero:");
			scanf_s("%d", &r);
			if (r == n) {
				printf("Voce Ganhou!! Numero sorteado %d.\n", n);
				break;
			}
			else {
				printf("Voce errou o numero sorteado!\n");
				if (r > n) {
					printf("O numero sorteado eh menor.\n\n");
				}
				else {
					printf("O numero sorteado eh maior.\n\n");
				}
				vida--;
			}
		}
		if (vida == 0) {
			printf("Voce perdeu o jogo. O numero era %d\n", n);
		}
		
		printf("Quer tentar de novo ? 1 - Sim 2 - Nao\n");
		scanf_s("%d", &dnovo);
	}
	system("pause");
	return 0;
}