#include <iostream>
#include <locale>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	double soma;
	int n;
	
	cout <<"quantos produtos serão cadastrados? \n";
	cin >>n;
	double vetor[n];
	for(int i=0; i<n; i++){
	cout <<"Digite o valor do "<< i+1 << "º Produto: \n";
	cin >>vetor[i];	
	}

	for(int i=0; i<n; i++){
	soma= (vetor[i] * 15)/100;
	cout <<" O valor reajustado do produto passa de: "<<vetor[i]<<" para: "<<vetor[i]+soma<<"reais"<<endl;
	}
	return 0;
}
