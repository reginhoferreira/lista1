#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	int n,media,soma=0,aux,vetor[10];
	cout <<"digite dez numeros inteiros \n \n";
	for(int i=0; i<10; i++){
	cout << "digite o "<<i+1<<"� numero"<<endl;
	cin >>vetor[i];
			
	}
	cout <<endl;
	
	//FOR- IMPRESS�O
	for(int i=0; i<10; i++){
		cout<<vetor[i]<<" ";
	}
	
	//FOR -SOMA
	for(int i=0; i<10; i++){
	soma=soma + vetor[i];
	}
	media=soma/10;
   cout << "A soma dos numeros digitados � "<<soma<<endl;
   cout <<"A m�dia �: "<<media<<endl;
   
	
	//FOR-M�DIA
	for(int i=0; i<10; i++){
		aux=media;
		if(aux==vetor[i]){
			cout<<"valor igual a m�dia dos numeros digitados"<<aux<<endl;
		}
	}
			

	return 0;
}
