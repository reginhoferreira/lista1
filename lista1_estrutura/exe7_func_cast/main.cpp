#include <iostream>
#include <locale>
#include <math.h>
#include <cmath>
using namespace std;




int main() {
	setlocale(LC_ALL,"Portuguese");
	
	int  n,j,func;
	float raiz,soma,valor;
	
	int cal[4];
	cout<<"Digite quatro valores inteiros: \n";
	for(int i=0; i<4; i++){
	cout<<"digite o "<<i+1<<"� numero " <<endl;
	cin >>cal[i];
	}
	
	soma=cal[0] * 3;
	cout<<"o primero numero triplicado � igual a "<<soma<<endl;
	valor=soma+pow(cal[1]+cal[2]+cal[3],2);
	cout <<"o resultado do primeiro numero elevado aos outros tr�s, � igual a "<<valor<<endl;
	raiz= sqrt(valor);
	cout<<"A raiz quadrada de "<<valor<<" � igual a: "<<raiz<<endl;
	
	



	




	return 0;
}
