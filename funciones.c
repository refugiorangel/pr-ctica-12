#include "funciones.h"
//Este programa contiene todos los procesos de todas las funciones
//no se incluye stdio.h, porque ya está incluida en funciones.h
complex suma(complex a, complex b){
	complex r;
	r.real=a.real + b.real;//con los puntos se hace referencia a la parte real del número a complejo
	r.img= a.img + b.img;
	return r;
}

complex resta(complex a, complex b){
	complex r;
	r.real = a.real - b.real;
	r.img = a.img - b.img;
	return r;
}

complex multiplicacion(complex a, complex b){
	complex r;
	r.real = (a.real * b.real)-(a.img*b.img);
	r.img = (a.img*b.real)+(a.real*b.img);
	return r;
}

complex division(complex a, complex b){
	complex r;
	float c,d;
	c = b.real*b.real;
	d = b.img*b.img;
	r.real = ((a.real*b.real)+(a.img*b.img))/(c + d);
	r.img =((b.real*a.img)-(a.real*b.img))/(c + d);
	return r;
}

complex conjugado(complex a){
	complex r;
	r.real=a.real;
	r.img=-(a.img);
	return r;
}

void menu(){
	printf("Escoje la operación que deseas realizar.\n 1.Suma\n 2.Resta\n 3.multiplicación\n 4.División\n 5.Conjugado\n 6.Salir\n");
}

void printf_complex(complex a){
	if(a.img>0)
		printf("%f + %fi\n", a.real, a.img);
	else
		printf("%f - %fi\n", a.real, a.img);
}

void leer_complex(complex *a){
	printf("Ingresa la parte real\n");
	scanf("%f", a->real);
	printf("Ingresa la parte imaginaria\n");
	scanf("%f", a->img);
	//Se utiliza la flecha en lugar del punto, porque es un apuntador
}
