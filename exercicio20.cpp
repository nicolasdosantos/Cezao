#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	string l,s;
	
	cout << "Informe seu login";
	cin >> l;
	
	cout << "Informe sua senha";
	cin >> s;
	
	if ( l == "admin" && s == "admin"){
		cout << "Pode entrar";
	}
	
	else {
		cout << "Login e senha incorretos";
	}
	
}
