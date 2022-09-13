#include <iostream>
using namespace std;

int main(){
	double calificacion;
	cout<<"Ingrese la calificacion:";
	cin>>calificacion;
	
	if( calificacion >=90) //90 O mas recibe una "A"
	cout << "A";
	else if( calificacion >=80) //80 O mas recibe "B"
	cout << "B";
	else if( calificacion >=70) //70 O mas recibe "C"
	cout <<"C" ;
	else if( calificacion >=60) //60 O mas recibe "D"
	cout <<"D" ;
	else//menos de 60 recibe "F"
	cout <<"F" ;
}
