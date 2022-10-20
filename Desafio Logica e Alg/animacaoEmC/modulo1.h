//textos
void imprimeTi () {
	int i, x = 0;
	for (i = 1; i < 25; i++) {
		srand(time(0));
		int randomico = rand() % 14;
		sleep(1);
		printf("SOU DE TI\n");
		gotoxy(x, i);
		textcolor(randomico+1);			
	}
}

void imprimeBemVindo (int x) {
	int i;
	for (i = 0; i < 24; i++) {
		srand(time(0));
		int randomico = rand() % 14;
		sleep(1);
		gotoxy(x+1, i);
		printf("Bem Vindo\n");
		textcolor(randomico+1);
	}
}

//coracao central

void imprimeCoracao () {
	int i, x, y, final1 = 35, final2 = 45;
	//topo
	gotoxy(x = 42, y = 2);
	printf("###");
	
	gotoxy(x = 36, y = 2);
	printf("###");
	
	sleep(1);
	
	//1 fileira
	gotoxy(x = 41, y = 3); 
	printf("#");
	
	gotoxy(x = 39, y = 3);
	printf("#");
	
	gotoxy(x = 35, y = 3); 
	printf("#");
	
	gotoxy(45, 3);
	printf("#");
	
	sleep(1);
	
	//2 fileira
	gotoxy(x = 40, y = 4); 
	printf("#");
	
	gotoxy(x = 34, y = 4); 
	printf("#");
	
	gotoxy(46, 4);
	printf("#");
	
	sleep (1);
	
	//3 e 4 fileira
	for (i = 5; i < 7; i++) {
		gotoxy(x = 34, i);
		printf("#");
		
		gotoxy(x = 46, i);
		printf("#");
		sleep(1);
	}
	
	//final 
	for (i = 7; i < 13; i++) {
		gotoxy(x = final1, y = i);
		printf("#");
		final1 += 1;

		gotoxy(x = final2, y = i);
		printf("#");
		final2 -= 1;
		sleep(1);
	}
}

// outros coracoes
void imprimeTopoCoracoes (int x, int y) {
		gotoxy(x, y);
		printf("###");		
}

void imprimeFileiraUm (int x, int y) {
	int i;
	//superior 1
	gotoxy(x = 18, y);
	printf("#");
	gotoxy(x = 20, y); 
	printf("#");
	
	gotoxy(x = 58, y);
	printf("#");
	gotoxy(x = 60, y); 
	printf("#");
	
	//superior 2
	gotoxy(x = 14, y); 
	printf("#");
	gotoxy(24, y);
	printf("#");
	
	gotoxy(x = 54, y); 
	printf("#");
	gotoxy(64, y);
	printf("#");
	
	//inferior 3
	gotoxy(x = 44, y+10);
	printf("#");
	gotoxy(x = 48, y+10);
	printf("#");
	
	gotoxy(x = 50, y+10);
	printf("#");
	gotoxy(x = 54, y+10);
	printf("#");

	//inferior 4
	gotoxy(x = 24,y+10);
	printf("#");
	gotoxy(x = 28, y+10);
	printf("#");
	
	gotoxy(x = 30, y+10);
	printf("#");
	gotoxy(x = 34, y+10);
	printf("#");
	
	sleep(1);
}

void imprimeFileiraDois (int x, int y) {
	//superiores
	gotoxy(x = 19, y); 
	printf("#");
	gotoxy(x = 59, y); 
	printf("#");
	
	gotoxy(x = 13, y); 
	printf("#");
	gotoxy(x = 53, y); 
	printf("#");
	
	gotoxy(25, y);
	printf("#");
	gotoxy(65, y);
	printf("#");
	
	//inferiores
	gotoxy(x = 43, 10+y);
	printf("#");
	gotoxy(x = 55, 10+y);
	printf("#");
	gotoxy(x = 49, 10+y);
	printf("#");
	
	gotoxy(x = 23, 10+y);
	printf("#");
	gotoxy(x = 35, 10+y);
	printf("#");
	gotoxy(x = 29, 10+y);
	printf("#");	
	
	sleep (1);
}

void imprimeFileiraTresQuatro (int i, int x) {
	for (i = 5; i < 7; i++) {
		gotoxy(x = 13, i);
		printf("#");
		gotoxy(x = 53, i);
		printf("#");
		
		gotoxy(x = 25, i);
		printf("#");
		gotoxy(x = 65, i);
		printf("#");
		
		gotoxy(x = 43, i+10);
		printf("#");
		gotoxy(x = 55, i+10);
		printf("#");
		
		gotoxy(x = 23, i+10);
		printf("#");
		gotoxy(x = 35, i+10);
		printf("#");
		
		sleep(1);
	}
}

void imprimeFinalCoracoes () {
	int x, i, final1 = 14, final2 = 24, final3 = 54, final4 = 64;
	int final5 = 44, final6 = 54, final7 = 24, final8 = 34;
	
	for (i = 7; i < 13; i++) {
		gotoxy(final1, i);
		printf("#");
		final1 += 1;

		gotoxy(final2, i);
		printf("#");
		final2 -= 1;
		
		gotoxy(final3, i);
		printf("#");
		final3 += 1;

		gotoxy(final4, i);
		printf("#");
		final4 -= 1;
		
		gotoxy(final5, i+10);
		printf("#");
		final5 += 1;

		gotoxy(final6, i+10);
		printf("#");
		final6 -= 1;
		
		gotoxy(final7, i+10);
		printf("#");
		final7 += 1;
		
		gotoxy(final8, i+10);
		printf("#");
		final8 -= 1;
		sleep(1);
	}
}

void imprimeCoracoes () {
	int i, x, y;
	//topo
	imprimeTopoCoracoes (x = 15, y = 2);
	imprimeTopoCoracoes (x = 55, y = 2);
	imprimeTopoCoracoes (x = 21, y = 2);
	imprimeTopoCoracoes (x = 61, y = 2);
	
	imprimeTopoCoracoes (x = 25, y = 12);
	imprimeTopoCoracoes (x = 45, y = 12);
	imprimeTopoCoracoes (x = 31, y = 12);
	imprimeTopoCoracoes (x = 51, y = 12);
	sleep(1);
	//1 fileira
	imprimeFileiraUm (x, y = 3);
	
	//2 fileira
	imprimeFileiraDois (x, y = 4);
	
	//3 e 4 fileira
	imprimeFileiraTresQuatro (i = 5,x);
	
	//final
	imprimeFinalCoracoes ();
}

//preenche corações
void preencheCoracao () {
	textcolor(12);
	
	gotoxy(40, 11);
	printf("#");
	sleep(1);
	
	gotoxy(39, 10);
	printf("###");
	sleep(1);
	
	gotoxy(38, 9);
	printf("#####");
	sleep(1);
	
	gotoxy(37, 8);
	printf("#######");
	sleep(1);
	
	gotoxy(36, 7);
	printf("#########");
	sleep(1);
	
	gotoxy(34, 6);
	printf("############");
	sleep(1);
	
	gotoxy(34, 5);
	printf("############");
	sleep(1);
	
	gotoxy(34, 4);
	printf("############");
	sleep(1);
	
	gotoxy(35, 3);
	printf("####");
	
	
	gotoxy(41, 3);
	printf("####");
	sleep(1);
}

void preencheCoracoes () {
	textcolor(12);
	//linha 1
	gotoxy(19, 11);
	printf("#");
	gotoxy(59, 11);
	printf("#");
	gotoxy(49, 21);
	printf("#");
	gotoxy(29, 21);
	printf("#");
	sleep(1);
	
	//linha 2
	gotoxy(18, 10);
	printf("###");
	gotoxy(58, 10);
	printf("###");
	gotoxy(48, 20);
	printf("###");
	gotoxy(28, 20);
	printf("###");
	sleep(1);
	
	//linha 3
	gotoxy(17, 9);
	printf("#####");
	gotoxy(57, 9);
	printf("#####");
	gotoxy(47, 19);
	printf("#####");
	gotoxy(27, 19);
	printf("#####");
	sleep(1);
	
	//linha 4
	gotoxy(16, 8);
	printf("#######");
	gotoxy(56, 8);
	printf("#######");
	gotoxy(46, 18);
	printf("#######");
	gotoxy(26, 18);
	printf("#######");
	sleep(1);
	
	//linha 5
	gotoxy(15, 7);
	printf("#########");
	gotoxy(55, 7);
	printf("#########");
	gotoxy(45, 17);
	printf("#########");
	gotoxy(25, 17);
	printf("#########");
	sleep(1);
	
	//linha 6
	gotoxy(13, 6);
	printf("############");
	gotoxy(53, 6);
	printf("############");
	gotoxy(43, 16);
	printf("############");
	gotoxy(23, 16);
	printf("############");
	sleep(1);
	
	//linha 7
	gotoxy(13, 5);
	printf("############");
	gotoxy(53, 5);
	printf("############");
	gotoxy(43, 15);
	printf("############");
	gotoxy(23, 15);
	printf("############");
	sleep(1);
	
	//linha 8
	gotoxy(13, 4);
	printf("############");
	gotoxy(53, 4);
	printf("############");
	gotoxy(43, 14);
	printf("############");
	gotoxy(23, 14);
	printf("############");
	sleep(1);
	
	//linha 9
	
	gotoxy(14, 3);
	printf("####");
	gotoxy(20, 3);
	printf("####");
	
	gotoxy(54, 3);
	printf("####");
	gotoxy(60, 3);
	printf("####");
	
	gotoxy(44, 13);
	printf("####");
	gotoxy(50, 13);
	printf("####");
	
	gotoxy(24, 13);
	printf("####");
	gotoxy(30, 13);
	printf("####");
	sleep(1);
}

void imprimeFuturoProgramar (int x, int y) {
	gotoxy(x, y);
	printf("PROGRAMAR E BOM");
}
void futuro (x, y) {
	gotoxy(x, y);
	printf("FUTURO  ");
}
void imprimeFrases () {
		while (1) {
		srand(time(0));
		int randomico = rand() % 14;
		sleep(1);
		imprimeFuturoProgramar(15, 6);
		imprimeFuturoProgramar(36, 6);
		imprimeFuturoProgramar(55, 6);
		imprimeFuturoProgramar(45, 16);
		imprimeFuturoProgramar(25, 16);
		sleep(1);
		futuro(15, 6);
		futuro(36, 6);
		futuro(55, 6);
		futuro(45, 16);
		futuro(25, 16);
		textcolor(randomico+1);
	}
}
