#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float t;
	
	cout << "Informe a quantidade do lado do seu triangulo � igual";
	cin >> t;
	
	if ( t == 3){
		cout << "Voc� possui um triangulo Equil�tero";
	
	}
	else if (t == 2){
		cout << "Voc� possui um triangulo Is�scele";
	}
	
	else if  (t == 0){
		cout << "Voc� possui um triangulo Escaleno";
	}
}
