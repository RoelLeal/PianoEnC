#include <stdio.h>
#include <windows.h>
#include <conio.h>
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

void R(int x,int y){
    // Posiciona el cursor en la posición (x, y)
    gotoxy(x, y);

    // Imprime la letra 'R' en mayúscula con el código ASCII 219 sin ciclos
    gotoxy(x, y); printf("%c", 219);
    gotoxy(x, y+1); printf("%c%c", 219, 219);
    gotoxy(x, y+2); printf("%c", 219);
    gotoxy(x, y+3); printf("%c", 219);
    gotoxy(x, y+4); printf("%c", 219);
    gotoxy(x, y+5); printf("%c", 219);

    gotoxy(x+1, y+2); printf("%c", 219);
    gotoxy(x+2, y+1); printf("%c", 219);
    gotoxy(x+3, y+2); printf("%c", 219);
    gotoxy(x+4, y); printf("%c", 219);
    gotoxy(x+4, y+1); printf("%c", 219);
    gotoxy(x+4, y+2); printf("%c", 219);
    gotoxy(x+4, y+3); printf("%c", 219);
    gotoxy(x+4, y+4); printf("%c", 219);
}
int main() {
	char letra;
	int i, j, y = 1;
	while(1) {
		letra = getch();
		letra = tolower(letra);
		switch(letra) {
			case let_a:
				// DO
				system("cls");
				system("color 1");
      			for (i = 0; i < 5; i++) {
        			gotoxy(50, 10 + i); 
       				for (j = 0; j < 5; j++) {
            			if ((i == 0 || i == 4) && (j > 0 && j < 4)) {
              				  printf("%c", 219); 
           				 } else if ((j == 1 || j == 4) && (i > 0 && i < 4)) {
                			printf("%c", 219); 
            				} else {
               				 printf(" "); 
          					  }
       					 }
   				 }
   				 
   				 
   				for (i = 0; i < 5; i++) {
        			gotoxy(60, 10 + i); // Posiciona el cursor en la coordenada (x, y+i)
        			for (j = 0; j < 5; j++) {
          				  if (i == 0 || i == 4 || j == 0 || j == 4) {
              				  printf("%c", 219); // Imprime el caracter con código ASCII 219 (bloque sólido)
            				} else {
               				 printf(" "); // Imprime un espacio en blanco para el interior de la "O"
           					 }
        				}
    			}
				Beep(261.626, 500);
				break;
			case let_s:
				// RE
				system("cls");
				system("color 2");
				R(1,1);
				Beep(293.66, 500);
				break;
			case let_d:
				// MI
				Beep(329.62, 500);
				break;
			case let_f:
				// FA
				Beep(349.22, 500);
				break;
			case let_g:
				// SOL
				Beep(391.99, 500);
				break;
			case let_h:
				// LA
				Beep(440.00, 500);
				break;
			case let_j:
				// SI
				Beep(493.88, 500);
				break;
			case let_k:
				// DO
				Beep(523.251, 500);
				break;
			case let_l:
				// RE
				Beep(554.365, 500);
				break;
			case let_esc:
				return 0;
				break;
		}
	}
}
