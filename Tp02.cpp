//============================================================================
// Name        : tp02.cpp
// Author      : Nayla Taguada
// Version     :
// Copyright   : Your copyright notice
// Description : Numero par
//============================================================================

//Nayla Taguada
//Curso: k1091
//AED - Turno: Noche
//Fecha 22/04/15

#include <iostream>
using namespace std;

main() {
	int n, c ;

	cout << "Ingresar numero" << endl;
	cin >>n;
	c=n/2*2-n;
	if (c==0)
		cout<< "par"<<endl;
	else
		cout<< "impar" <<endl;
	return 0;
}
