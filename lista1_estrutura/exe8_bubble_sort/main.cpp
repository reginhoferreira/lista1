#include <iostream>
#include <locale>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//cabeçalho
int funcao(int);

int vetor(int i,int opcao,int c,int d,int aux){
int	vet[10];

	for(int i=0; i<10; i++){
	cout<< "Digite o "<<i+1<<"º numero \n";
	cin >>vet[i];
	}
	cout <<endl;
		for(int i=0; i<10; i++){
			for(int j=i+1;j<10; j++){
			if(vet[i]>vet[j]){
			aux = vet[i];
			vet[i] = vet[j];
			vet[j] = aux;
		}
			}
		}
	
	for(int i=0; i<10; i++){
	cout<<vet[i]<<"|"<<endl;
	
	}
	cout<<endl;

	return vet[10];
}

int main() {
	setlocale(LC_ALL,"Portuguese");
	char op;
	char c;
	char d;
	int func,n,aux,i,j,opcao;
	cout <<"ordene em crescente: DIGITE C, decrescente: digite D \n";
	cin >>op;
	cout<<vetor(n,opcao,c,d,aux);
	
	
	
	
	 
	

	return 0;
}
