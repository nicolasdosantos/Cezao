#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float t;
	
	cout << "Informe o valor do ângulo do seu triangulo é igual";
	cin >> t;
	
	if ( t == 90){
		cout << "Você possui um Triângulo Retângulo";
	
	}
	else if (t >90){
		cout << "Você possui um Triângulo Obtusângulo";
	}
	
	else if  (t < 90){
		cout << "Você possui um Triângulo Acutângulo";
	}
}
