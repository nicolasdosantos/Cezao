#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float t;
	
	cout << "Informe a quantidade do lado do seu triangulo é igual";
	cin >> t;
	
	if ( t == 3){
		cout << "Você possui um triangulo Equilátero";
	
	}
	else if (t == 2){
		cout << "Você possui um triangulo Isóscele";
	}
	
	else if  (t == 0){
		cout << "Você possui um triangulo Escaleno";
	}
}
