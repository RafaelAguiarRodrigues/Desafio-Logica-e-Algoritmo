//textos
void imprimeTi () {
	int i, x = 0;
	srand(time(NULL));
	for (i = 1; i < 25; i++) {
		int randomico = rand() % 14;
		printf("SOU DE TI\n");
		gotoxy(x, i);
		textcolor(randomico+1);	
		Sleep(100);		
	}
}

void imprimeBemVindo (int x) {
	int i;
	srand(time(0));
	for (i = 0; i < 24; i++) {	
		int randomico = rand() % 14;
		gotoxy(x+1, i);
		printf("Bem Vindo\n");
		textcolor(randomico+1);
		Sleep(100);
	}
}

//coracao principal
void imprimeCoracao () {
	int i, x, y, final1 = 35, final2 = 45;
	//topo
	imprimeTopoCoracoes (x = 36, y = 2);
	Sleep(100);
	
	//1 fileira
	gotoxy(x = 41, y = 3); 
	printf("#");
	gotoxy(x = 39, y = 3);
	printf("#");
	
	gotoxy(x = 35, y = 3); 
	printf("#");
	gotoxy(x = 45, y = 3);
	printf("#");
	
	Sleep(100);
	
	//2 fileira
	gotoxy(x = 34, y = 4); 
	printf("#");
	gotoxy(x = 40, y = 4); 
	printf("#");
	gotoxy(x = 46, y = 4);
	printf("#");
	
	Sleep (100);
	
	//3 e 4 fileira
	for (i = 5; i < 7; i++) {
		gotoxy(x = 34, i);
		printf("#");
		
		gotoxy(x = 46, i);
		printf("#");
		Sleep(100);
	}
	
	//final 
	for (i = 7; i < 13; i++) {
		gotoxy(x = final1, y = i);
		printf("#");
		final1 += 1;

		gotoxy(x = final2, y = i);
		printf("#");
		final2 -= 1;
		Sleep(100);
	}
}

// outros coracoes
void imprimeTopoCoracoes (int x, int y) {
		gotoxy(x, y);
		printf("###");	
		gotoxy(x+6, y);
		printf("###");
}

void imprimeFileiraUm (int x1, int x2, int y) {
	//esquerda e direita superior
	gotoxy(x1, y);
	printf("#");
	gotoxy(x1+4, y);
	printf("#");
	gotoxy(x1+10, y);
	printf("#");
	gotoxy(x1+6, y); 
	printf("#");
	
	//inferior direita e esquerda
	gotoxy(x2, y+10);
	printf("#");
	gotoxy(x2+4, y+10);
	printf("#");
	gotoxy(x2+10, y+10);
	printf("#");
	gotoxy(x2+6 , y+10);
	printf("#");
}

void imprimeFileiraDois (int x, int x2, int y) {
	int i;
	for (i = 0; i < 3; i++) {
		gotoxy(x, y); 
		printf("#");
		x += 6;

		gotoxy(x2, 10+y);
		printf("#");
		x2 += 6;
	}
}

void imprimeFileiraTresQuatro (int x, int x2) {
	int i;
	for (i = 5; i < 7; i++) {
		gotoxy(x, i);
		printf("#");
		gotoxy(x+12, i);
		printf("#");
		
		gotoxy(x2, i+10);
		printf("#");
		gotoxy(x2+12, i+10);
		printf("#");
	}
}

void imprimeFinalCoracoes (int x, int x2) {
	int i;
	for (i = 7; i < 13; i++) {
		gotoxy(x, i);
		printf("#");
		gotoxy(x+40, i);
		printf("#");
		gotoxy(x+30, i+10);
		printf("#");
		gotoxy(x+10, i+10);
		printf("#");
		x += 1;

		gotoxy(x2, i);
		printf("#");
		gotoxy(x2+40, i);
		printf("#");
		gotoxy(x2+30, i+10);
		printf("#");
		gotoxy(x2+10, i+10);
		printf("#");
		x2 -= 1;

		Sleep(100);
	}
}

void imprimeCoracoes () {
	int i, x, x2, x3, x4, y;
	//topo
	imprimeTopoCoracoes (x = 15, y = 2);
	imprimeTopoCoracoes (x = 55, y = 2);

	imprimeTopoCoracoes (x = 25, y = 12);
	imprimeTopoCoracoes (x = 45, y = 12); 
	Sleep(100);
	//1 fileira
	imprimeFileiraUm (x = 14, x2 = 24, y = 3);
	imprimeFileiraUm (x = 54, x2 = 44, y = 3);
	Sleep(100);
	
	//2 fileira
	imprimeFileiraDois (x = 53, x2 = 43, y = 4);
	imprimeFileiraDois (x = 13, x2 = 23, y = 4);
	Sleep (100);
	
	//3 e 4 fileira
	imprimeFileiraTresQuatro (x = 13, x2 = 43);
	imprimeFileiraTresQuatro (x = 53, x2 = 23);
	Sleep(100);
	
	//final
	imprimeFinalCoracoes (x = 14, x2 = 24);
}

//preenche corações
void preencheCoracao () {
	textcolor(12);
	
	gotoxy(40, 11);
	printf("#");
	Sleep(100);
	
	gotoxy(39, 10);
	printf("###");
	Sleep(100);
	
	gotoxy(38, 9);
	printf("#####");
	Sleep(100);
	
	gotoxy(37, 8);
	printf("#######");
	Sleep(100);
	
	gotoxy(36, 7);
	printf("#########");
	Sleep(100);
	
	int i, y = 6;
	for (i = 0; i < 3; i++) {
		gotoxy(35, y);
		printf("###########");
		Sleep(100);
		y--;
	}
	
	gotoxy(36, 3);
	printf("###");
	
	gotoxy(42, 3);
	printf("###");
	Sleep(100);
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
	Sleep(100);
	
	//linha 2
	gotoxy(18, 10);
	printf("###");
	gotoxy(58, 10);
	printf("###");
	gotoxy(48, 20);
	printf("###");
	gotoxy(28, 20);
	printf("###");
	Sleep(100);
	
	//linha 3
	gotoxy(17, 9);
	printf("#####");
	gotoxy(57, 9);
	printf("#####");
	gotoxy(47, 19);
	printf("#####");
	gotoxy(27, 19);
	printf("#####");
	Sleep(100);
	
	//linha 4
	gotoxy(16, 8);
	printf("#######");
	gotoxy(56, 8);
	printf("#######");
	gotoxy(46, 18);
	printf("#######");
	gotoxy(26, 18);
	printf("#######");
	Sleep(100);
	
	//linha 5
	gotoxy(15, 7);
	printf("#########");
	gotoxy(55, 7);
	printf("#########");
	gotoxy(45, 17);
	printf("#########");
	gotoxy(25, 17);
	printf("#########");
	Sleep(100);
	
	//linha 6, 7 e 8
	int i, y = 6;
	for (i = 0; i < 3; i++) {
		gotoxy(14, y);
		printf("###########");
		gotoxy(54, y);
		printf("###########");
		gotoxy(44, y+10);
		printf("###########");
		gotoxy(24, y+10);
		printf("###########");
		Sleep(100);
		y--;
	}
	
	//linha 9
	gotoxy(15, 3);
	printf("###");
	gotoxy(21, 3);
	printf("###");
	
	gotoxy(55, 3);
	printf("###");
	gotoxy(61, 3);
	printf("###");
	
	gotoxy(45, 13);
	printf("###");
	gotoxy(51, 13);
	printf("###");
	
	gotoxy(25, 13);
	printf("###");
	gotoxy(31, 13);
	printf("###");
	Sleep(100);
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
