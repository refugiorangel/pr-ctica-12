#ifndef COMPLEX_H
#define COMPLEX_H
#include <stdio.h>
//Este archivo crea la estructura del número complejo
struct _complex{//struct es para generar nuevos tipos de variable
	float real;
	float img;
};
typedef struct _complex complex;//typedef sirve para renombara un tipo

#endif
