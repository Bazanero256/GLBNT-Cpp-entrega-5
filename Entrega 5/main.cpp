#include "stdafx.h"
#include <iostream>

/*
1) using std::cout;
void f(signed char c) { cout << "Signed char\n"; }
void f(unsigned char c) { cout << "Unsigned char\n"; }
int main() {
	char c1 = 'a';
	f(c1);
}
La respuesta d se produce un error de compilacion porque f es ambigua para el tipo char
*/

/* 2)
#include <iostream>
void f( int ) { std::cout << �f(int)�; }
And file B.cpp:
#include <iostream>
void f( double ) { std::cout << �f(double)�; }
int main () {
f(3);

en este caso imprime "f(double)" porque llama a la funcion declarada dentro del archivo B, ya que nunca se importa la funcion f() del archivo A

}*/

/* 3)
3) Given the file header.h:
#include <iostream>
void f( int d);
And the file A.cpp:
#include �header.h�
void f( int d = 10) {std::cout << d << �\t�; }
And the file B.cpp:
#include �header.h�
int main () {
f();
f(5);
}

 La respuesta es que imprime 10 5 ya que cuando se llama a f sin argumentos el programa utiliza el valor por defecto

*/

/* 4)
#include <iostream>
using std::cout;
void f(float) { cout << "f(float)"; }
void f(long double) { cout << "f(long double)"; }
int main() {
	f(2.0);
}
La respuesta es c, hay una ambiguedad dada la promocion del tipo float
*/

/* 5)
#include <iostream>
using std::cout;
using std::endl;
void f(int&) { cout << "A"; }
void f(const int&) { cout << "B"; }
int main() {
	int i = 10;
	const int ci = 11;
	f(i);
	f(ci);
}
 
 El programa va a imprimir AB  ya que no hay conflicto de promocion de las variables ni problemas de ese tipo 
*/

/* 6)
int f() { return 1; }
double f() { return 2.5; }
int main() {
	int ret = f();
	return ret;
}

Va a haber errores de compilacion ya que hay dos funciones con la misma firma y el tipo que va en el tipo de vuelta no forma parte
de la firma de la funcion por lo que el compilador no sabe diferenciar que funcion se intenta llamar.
*/

/* 7)
#include <iostream>
void f( int ) { std::cout << "int"; }
void f( double ) { std::cout << "double"; }
int main () {
char a = 'a';
f(a);
}
Los char son promocionados a Int y por lo tanto llama a la funcion que recibe como argumentos a un int

*/

int main() {

	return 0;
}