/* 
Apellido y Nombre: Marin Facundo 
Curso: K1051 
Legajo: 158.829-1 
Fecha: 05/05/2016 
*/ 

#include <iostream>

	int main(){
	
	int a,b;
	int c = 0;
	int i = 0;
	std::cout << "ingrese el primer valor: ";
	std::cin >> a;
	std::cout << "ingrese el segundo valor: ";
	std::cin >> b;
if (a==0 || b==0)
std::cout << "el resultado es: 0" ;
else{
do {c=c+b;
i=i+1;
} while(i!=a);
std::cout << "el resultado es: " << c;
}
