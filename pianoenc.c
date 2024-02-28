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

int main() {
	char letra;
	while(1) {
		letra = getch();
		letra = tolower(letra);
		switch(letra) {
			case let_a:
				// DO
				Beep(261.626, 500);
				break;
			case let_s:
				// RE
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
