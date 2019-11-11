#ifndef FUNCIONES_H
#define FUNCIONES_H
//Este programa contiene los prototipos de todas las funciones
//Los archivos .h nos sirven para poner los prototipos de las funciones
#include <stdio.h>
#include "complex.h"
//El archivo que nosotros creamos se incluye con comillas, los mayor que y menor que es para las bibliotecas del lunguaje c
complex suma(complex a, complex b);
complex resta(complex a, complex b);
complex multiplicacion(complex a, complex b);
complex division(complex a, complex b);
complex conjugado(complex a);
void printf_complex(complex a);
void menu();
void leer_complex(complex*a);

#endif
