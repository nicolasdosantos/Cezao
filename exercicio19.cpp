#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float t;
	
	cout << "Informe o valor do �ngulo do seu triangulo � igual";
	cin >> t;
	
	if ( t == 90){
		cout << "Voc� possui um Tri�ngulo Ret�ngulo";
	
	}
	else if (t >90){
		cout << "Voc� possui um Tri�ngulo Obtus�ngulo";
	}
	
	else if  (t < 90){
		cout << "Voc� possui um Tri�ngulo Acut�ngulo";
	}
}
