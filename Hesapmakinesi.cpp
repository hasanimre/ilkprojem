#include<iostream>
//my first project...
using namespace std;

int main(){
	double x, y ;
	char op;
		cout << "Ahmet'in hesap makinesi : " << endl << " +  -  *  / " << endl;
		cout << "ilk sayi : " ;
		cin >> x ;
		cout << "islem ? ";
		cin >> op;
		cout << "ikinci sayi : " ;
		cin >> y ;
		switch(op){
	
			case '+' : cout << "Sonucunuz : " << x+y ; break;
			case '-' : cout << "Sonucunuz : " << x-y ; break; 
			case '*' : cout << "Sonucunuz : " << x*y ; break;
			case '/' : 
				if (y == 0){
				cout << "Sonuc tanimsiz." ;
				}
				else{
				cout << "Sonucunuz : " << x/y;
				}
				break;
				default: cout << "Gecersiz islem !" ;
}
	
	return 0;
}
