#include "funciones.h"
//Este programa es utilizado para la llamada a las funciones
int main(){
	complex a, b;
	complex res;
	int op;
	leer_complex(&a);
	leer_complex(&b);
	do{
		menu();
		switch(op){
			case 1:
				res=suma(a,b);
				break;
			case 2:
				res=resta(a,b);
				break;
			case 3:
				res=multiplicacion(a,b);
				break;
			case 4:
				res=division(a,b);
				break;
			case 5:
				res=conjugado(a);
				break;
			default:
				printf("Esta opnción no existe\n");
				break;
		}
	}while(op!=6);
	return 0;
}
