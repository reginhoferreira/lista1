#include <iostream>
#include <locale>
#include <math.h>
#define max 30 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void preencher_vetor(float v[], float tam){
	for(int i=0; i<tam; i++){
	cin >>v[i];
	}
}

void imprimir_vetor(float v[], float tam){
	for(int i=0; i<tam;i++){
		cout <<v[i]<<"|";
	}
}
float menor(float v[], float tam){
	float aux_menor = v[0];
	
	for(int i=0; i<tam; i++){
		if(aux_menor > v[i+1]){
			aux_menor = v[i+1];
			
		}
	}
	return aux_menor;	
}


float maior(float v[], float tam){
	float aux_maior = v[0];
	
	for(int i=0; i<tam; i++){
	if(aux_maior < v[i+1]){
	aux_maior = v[i+1];
			
		}
	}
	return aux_maior;	
}

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	float v[max],tam;
	
	cout<<"Digite o tamanho do vetor \n";
	cin >>tam;
	//v[tam];
	
	preencher_vetor(v,tam);
	
	cout <<endl;
	imprimir_vetor(v,tam);
	
	cout<< "maior elemento do vetor"<<maior(v,tam)<<endl;
	cout<< "menor elemento do vetor"<<maior(v,tam)<<endl;
	return 0;
}
