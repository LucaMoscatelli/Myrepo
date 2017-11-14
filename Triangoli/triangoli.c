#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(void) {

	int A, B, C, x;

		printf("Inserisci valore di A: ");
		scanf("%d", &A);
		printf("Inserisci valore di B: ");
		scanf("%d", &B);
		printf("Inserisci valore di C: ");
		scanf("%d", &C);

		A < B + C;
		B < A + C;
		C < A + B;

		A > B / C;
		A > C / B;
		B > A / C;
		B > C / A;
		C > A / B; 
		C > B / A;

		if ( A == B && B == C) {
			printf("Il triangolo è Equilatero\n");
		}
		else if ( A == B || A == C || B == C){
			printf("Il triangolo è Isoscele\n");
		}
		else {
			printf("Il triangolo è Scaleno\n");
		}

			x = C;
			if ( x < A ) {
				C = x;
				x = A;
				A = C;
			}
			if ( x < B ) {
				C = x;
				x = A;
				A = C;
			}

			if ( A * A + B * B == x * x ) {
				printf("Il triangolo è Rettangolo\n");
			}
			else if ( A * A + B * B < x * x  ) {
				printf("Il triangolo è Ottuso\n");
			}
			else printf("Il triangolo è Acuto\n");

 return 0;
}
