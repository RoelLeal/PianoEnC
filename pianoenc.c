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

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos); 
}

void D(int x, int y) {
    // Definición de la letra "D" con el carácter ASCII 219
    int d[5][4] = {
        {219, 219, 219, 32},
        {219, 32, 32, 219},
        {219, 32, 32, 219},
        {219, 32, 32, 219},
        {219, 219, 219, 32}
    };

    int i, j;

    // Posiciona el cursor y escribe la letra "D" en la posición dada
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            gotoxy(x + j, y + i); // Posición ajustada a (x, y)
            printf("%c", d[i][j]);
        }
    }
}
void R(int x, int y) {
    // Definición de la letra "R" con el carácter ASCII 219
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
            gotoxy(j + x, i + y); // Sumamos 1 para ajustar la posición
            printf("%c", r[i][j]);
        }
    }

    gotoxy(1, 7); // Mueve el cursor a una nueva línea después de imprimir la letra
}
void E(int x, int y) {
	// Definición de la letra "E" con el carácter ASCII 219
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
            gotoxy(j + x, i + y); // Sumamos 1 para ajustar la posición
            printf("%c", e[i][j]);
        }
    }

    gotoxy(1, 7);
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

    // Posiciona el cursor y escribe la letra "I" en la posición (50, 10)
    for (l = 0; l < 5; l++) {
        for (j = 0; j < 3; j++) {
            gotoxy(j + x, l + y); // Posición ajustada a (50, 10)
            printf("%c", i[l][j]);
        }
    }

    gotoxy(1, 17);
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

    // Posiciona el cursor y escribe la letra "M" en la posición (50, 10)
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            gotoxy(j + x, i + y); // Posición ajustada a (50, 10)
            printf("%c", m[i][j]);
        }
    }

    gotoxy(1, 17);
}
void F(int x, int y) {
    // Definición de la letra "F" con el carácter ASCII 219
    int f[5][5] = {
        {219, 219, 219, 219, 219},
        {219, 32, 32, 32, 32},
        {219, 219, 219, 219, 32},
        {219, 32, 32, 32, 32},
        {219, 32, 32, 32, 32}
    };

    int i, j;

    // Posiciona el cursor y escribe la letra "F" en la posición dada
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            gotoxy(x + j, y + i); // Posición ajustada a (x, y)
            printf("%c", f[i][j]);
        }
    }
}
void A(int x, int y) {
    // Definición de la letra "A" con el carácter ASCII 219
    int a[5][5] = {
        {32, 32, 219, 32, 32},
        {32, 219, 32, 219, 32},
        {219, 219, 219, 219, 219},
        {219, 32, 32, 32, 219},
        {219, 32, 32, 32, 219}
    };

    int i, j;

    // Posiciona el cursor y escribe la letra "A" en la posición dada
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            gotoxy(x + j, y + i); // Posición ajustada a (x, y)
            printf("%c", a[i][j]);
        }
    }
}
void S(int x, int y) {
    // Definición de la letra "S" con el carácter ASCII 219
    int s[5][5] = {
        {219, 219, 219, 219, 219},
        {219, 32, 32, 32, 32},
        {219, 219, 219, 219, 32},
        {32, 32, 32, 32, 219},
        {219, 219, 219, 219, 219}
    };

    int i, j;

    // Posiciona el cursor y escribe la letra "S" en la posición dada
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            gotoxy(x + j, y + i); // Posición ajustada a (x, y)
            printf("%c", s[i][j]);
        }
    }
}
void O(int x, int y) {
    // Definición de la letra "O" con el carácter ASCII 219
    int o[5][5] = {
        {32, 219, 219, 219, 32},
        {219, 32, 32, 32, 219},
        {219, 32, 32, 32, 219},
        {219, 32, 32, 32, 219},
        {32, 219, 219, 219, 32}
    };

    int i, j;

    // Posiciona el cursor y escribe la letra "O" en la posición dada
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            gotoxy(x + j, y + i); // Posición ajustada a (x, y)
            printf("%c", o[i][j]);
        }
    }
}
void L(int x, int y) {
    // Definición de la letra "L" con el carácter ASCII 219
    int l[5][3] = {
        {219, 32, 32},
        {219, 32, 32},
        {219, 32, 32},
        {219, 32, 32},
        {219, 219, 219}
    };

    int i, j;

    // Posiciona el cursor y escribe la letra "L" en la posición dada
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            gotoxy(x + j, y + i); // Posición ajustada a (x, y)
            printf("%c", l[i][j]);
        }
    }
}
int main() {
	char letra;
	while(1) {
		letra = getch();
		letra = tolower(letra);
		switch(letra) {
			case let_a:
				// DO
				system("cls");
				system("color 1");
				D(50,10);
				O(60,10);
				Beep(261.626, 200);
				gotoxy(1,1);
				break;
			case let_s:
				// RE
				system("cls");
				system("color 2");
				R(50, 10);
				E(60, 10);
				Beep(293.66, 200);
				gotoxy(1,1);
				break;
			case let_d:
				// MI
				system("cls");
				system("color C");
				M(50, 10);
				I(60, 10);
				Beep(329.62, 200);
				gotoxy(1,1);
				break;
			case let_f:
				// FA
				system("cls");
				system("color 4");
				F(50, 10);
				A(60, 10);
				Beep(349.22, 200);
				gotoxy(1,1);
				break;
			case let_g:
				// SOL
				system("cls");
				system("color E");
				S(45, 10);
				O(55, 10);
				L(65, 10);
				Beep(391.99, 200);
				gotoxy(1,1);
				break;
			case let_h:
				// LA
				system("cls");
				system("color 7");
				L(50, 10);
				A(60, 10);
				Beep(440.00, 200);
				gotoxy(1,1);
				break;
			case let_j:
				// SI
				system("cls");
				system("color F");
				S(50, 10);
				I(60, 10);
				Beep(493.88, 200);
				gotoxy(1,1);
				break;
			case let_k:
				// DO
				system("cls");
				system("color 9");
				D(50, 10);
				O(60, 10);
				Beep(523.251, 200);
				gotoxy(1,1);
				break;
			case let_l:
				// RE
				system("cls");
				system("color E");
				R(50, 10);
				E(60, 10);
				Beep(554.365, 200);
				gotoxy(1,1);
				break;
			case let_esc:
				return 0;
				break;
		}
	}
}
