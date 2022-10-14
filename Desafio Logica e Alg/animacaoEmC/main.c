#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "conio2.h"
#include "modulo1.h"

/*  */

int main() {
	int i, y, x;
	int aleatorio;
	
	imprimeTi (i);
	x = 7;
	for (i = 0; i < 9; i++) {	
		imprimeBemVindo (i, x);	
		x += 8;
	}

	//imprime coracao
	for (i = 14; i > 11; i--){	
		textcolor(i);
		imprimeCoracao();
		textcolor(i);
		imprimeCoracoes();	
	}
	
    preencheCoracao (); 
    preencheCoracoes ();
    
    imprimeFrases();
}
