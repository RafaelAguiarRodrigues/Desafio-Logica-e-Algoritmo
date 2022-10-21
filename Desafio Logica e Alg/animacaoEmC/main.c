#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "conio2.h"
#include "modulo1.h"

/* Rafael Aguiar Rodrigues - ADS */

main() {
	int i, y, x;
	
	imprimeTi (); 
	x = 7;
	for (i = 0; i < 9; i++) {	
		imprimeBemVindo (x);	
		x += 8; 
	}
	
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
