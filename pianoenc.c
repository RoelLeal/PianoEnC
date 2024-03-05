#include <stdio.h>
#include <windows.h>
//DO
#define let_a 97
//RE
#define let_s 115
//MI
#define let_d 100
//FA
#define let_f 102
//SOL
#define let_g 103
//LA
#define let_h 104
//SI
#define let_j 106
//DO
#define let_k 107
//RE
#define let_l 108
// CERRAR PROGRAMA
#define let_esc 27
// GUARDAR
#define let_cero 48

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos); 
}

void D(int x, int y) {
    // Definici�n de la letra "D" con el car�cter ASCII 219
    int d[5][4] = {
        {219, 219, 219, 32},
        {219, 32, 32, 219},
        {219, 32, 32, 219},
        {219, 32, 32, 219},
        {219, 219, 219, 32}
    };

    int i, j;

    // Posiciona el cursor y escribe la letra "D" en la posici�n dada
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            gotoxy(x + j, y + i); // Posici�n ajustada a (x, y)
            printf("%c", d[i][j]);
        }
    }
}
void R(int x, int y) {
    // Definici�n de la letra "R" con el car�cter ASCII 219
    int r[5][5] = {
        {219, 219, 219, 219, 177},
        {219, 32, 32, 219, 177},
        {219, 219, 219, 219, 177},
        {219, 32, 219, 177, 32},
        {219, 32, 32, 219, 177}
    };
    gotoxy(x, y);
    int i, j;
    // Posiciona el cursor y escribe la letra "R"+
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            gotoxy(j + x, i + y); // Sumamos 1 para ajustar la posici�n
            printf("%c", r[i][j]);
        }
    }
}
void E(int x, int y) {
	// Definici�n de la letra "E" con el car�cter ASCII 219
    int e[5][5] = {
        {219, 219, 219, 219, 219},
        {219, 32, 32, 32, 32},
        {219, 219, 219, 219, 219},
        {219, 32, 32, 32, 32},
        {219, 219, 219, 219, 219}
    };

    int i, j;

    // Posiciona el cursor y escribe la letra "E"
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            gotoxy(j + x, i + y); // Sumamos 1 para ajustar la posici�n
            printf("%c", e[i][j]);
        }
    }
}
void I(int x, int y) {
	int i[5][3] = {
        {219, 219, 219},
        {32, 219, 32},
        {32, 219, 32},
        {32, 219, 32},
        {219, 219, 219}
    };

    int j, l;

    // Posiciona el cursor y escribe la letra "I" en la posici�n (50, 10)
    for (l = 0; l < 5; l++) {
        for (j = 0; j < 3; j++) {
            gotoxy(j + x, l + y); // Posici�n ajustada a (50, 10)
            printf("%c", i[l][j]);
        }
    }
}
void M(int x, int y) {
	int m[5][5] = {
        {219, 32, 32, 32, 219},
        {219, 219, 32, 219, 219},
        {219, 32, 219, 32, 219},
        {219, 32, 32, 32, 219},
        {219, 32, 32, 32, 219}
    };

    int i, j;

    // Posiciona el cursor y escribe la letra "M" en la posici�n (50, 10)
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            gotoxy(j + x, i + y); // Posici�n ajustada a (50, 10)
            printf("%c", m[i][j]);
        }
    }
}
void F(int x, int y) {
    // Definici�n de la letra "F" con el car�cter ASCII 219
    int f[5][5] = {
        {219, 219, 219, 219, 219},
        {219, 32, 32, 32, 32},
        {219, 219, 219, 219, 32},
        {219, 32, 32, 32, 32},
        {219, 32, 32, 32, 32}
    };

    int i, j;

    // Posiciona el cursor y escribe la letra "F" en la posici�n dada
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            gotoxy(x + j, y + i); // Posici�n ajustada a (x, y)
            printf("%c", f[i][j]);
        }
    }
}
void A(int x, int y) {
    // Definici�n de la letra "A" con el car�cter ASCII 219
    int a[5][5] = {
        {32, 32, 219, 32, 32},
        {32, 219, 32, 219, 32},
        {219, 219, 219, 219, 219},
        {219, 32, 32, 32, 219},
        {219, 32, 32, 32, 219}
    };

    int i, j;

    // Posiciona el cursor y escribe la letra "A" en la posici�n dada
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            gotoxy(x + j, y + i); // Posici�n ajustada a (x, y)
            printf("%c", a[i][j]);
        }
    }
}
void S(int x, int y) {
    // Definici�n de la letra "S" con el car�cter ASCII 219
    int s[5][5] = {
        {219, 219, 219, 219, 219},
        {219, 32, 32, 32, 32},
        {219, 219, 219, 219, 32},
        {32, 32, 32, 32, 219},
        {219, 219, 219, 219, 219}
    };

    int i, j;

    // Posiciona el cursor y escribe la letra "S" en la posici�n dada
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            gotoxy(x + j, y + i); // Posici�n ajustada a (x, y)
            printf("%c", s[i][j]);
        }
    }
}
void O(int x, int y) {
    // Definici�n de la letra "O" con el car�cter ASCII 219
    int o[5][5] = {
        {32, 219, 219, 219, 32},
        {219, 32, 32, 32, 219},
        {219, 32, 32, 32, 219},
        {219, 32, 32, 32, 219},
        {32, 219, 219, 219, 32}
    };

    int i, j;

    // Posiciona el cursor y escribe la letra "O" en la posici�n dada
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            gotoxy(x + j, y + i); // Posici�n ajustada a (x, y)
            printf("%c", o[i][j]);
        }
    }
}
void L(int x, int y) {
    // Definici�n de la letra "L" con el car�cter ASCII 219
    int l[5][3] = {
        {219, 32, 32},
        {219, 32, 32},
        {219, 32, 32},
        {219, 32, 32},
        {219, 219, 219}
    };

    int i, j;

    // Posiciona el cursor y escribe la letra "L" en la posici�n dada
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            gotoxy(x + j, y + i); // Posici�n ajustada a (x, y)
            printf("%c", l[i][j]);
        }
    }
}

void DO(FILE* file) {
	system("cls");
	system("color 1");
	D(50,10);
	O(60,10);
	Beep(261.626, 200);
	fprintf(file, "DO\n");
	gotoxy(1,1);
}
void RE(FILE* file) {
	system("cls");
	system("color 2");
	R(50, 10);
	E(60, 10);
	Beep(293.66, 200);
	fprintf(file, "RE\n");
	gotoxy(1,1);
}
void MI(FILE* file) {
    system("cls");
    system("color C");
    M(50, 10);
    I(60, 10);
    Beep(329.62, 200);
    fprintf(file, "MI\n");
    gotoxy(1, 1);
}
void FA(FILE* file) {
    system("cls");
    system("color 4");
    F(50, 10);
    A(60, 10);
    Beep(349.22, 200);
    fprintf(file, "FA\n");
    gotoxy(1, 1);
}
void SOL(FILE* file) {
    system("cls");
    system("color E");
    S(45, 10);
    O(55, 10);
    L(65, 10);
    Beep(391.99, 200);
    fprintf(file, "SOL\n");
    gotoxy(1, 1);
}
void LA(FILE* file) {
    system("cls");
    system("color 7");
    L(50, 10);
    A(60, 10);
    Beep(440.00, 200);
    fprintf(file, "LA\n");
    gotoxy(1, 1);
}
void SI(FILE* file) {
    system("cls");
    system("color F");
    S(50, 10);
    I(60, 10);
    Beep(493.88, 200);
    fprintf(file, "SI\n");
    gotoxy(1, 1);
}
void DO2(FILE* file) {
    system("cls");
    system("color 9");
    D(50, 10);
    O(60, 10);
    Beep(523.251, 200);
    fprintf(file, "DO2\n");
    gotoxy(1, 1);
}
void RE2(FILE* file) {
    system("cls");
    system("color E");
    R(50, 10);
    E(60, 10);
    Beep(554.365, 200);
    fprintf(file, "RE2\n");
    gotoxy(1, 1);
}

int main() {
	char letra;
	FILE* file = fopen("notas.txt", "w"); 
	
	while(1) {
		letra = getch();
		letra = tolower(letra);
		switch(letra) {
			case let_a:
				// DO
				DO(file);
				break;
			case let_s:
				// RE
				RE(file);
				break;
			case let_d:
				// MI
				MI(file);
				break;
			case let_f:
				// FA
				FA(file);
				break;
			case let_g:
				// SOL
				SOL(file);
				break;
			case let_h:
				// LA
				LA(file);
				break;
			case let_j:
				// SI
				SI(file);
				break;
			case let_k:
				// DO2
				DO2(file);
				break;
			case let_l:
				// RE2
				RE2(file);
				break;
			case let_esc:
				return 0;
				break;
			case let_cero:
				fclose(file);
				return 0;
				break;
		}
	}
}
