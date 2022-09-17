#include <iostream>
#include <locale>
#include <cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct{
	char nome[40];
}pessoa1,pessoa2;

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	char meunome[50] = "Régis";
	char sobrenome[50] = "Ferreira";
	
	//strcpy(nome,sobrenome);
	//cout <<nome<<endl;
	//memcpy(meunome,sobrenome,sizeof(sobrenome)+1);

	//MEMCPY/STRLEN
	memcpy(pessoa1.nome,meunome,strlen(meunome)+1);
	memcpy(pessoa2.nome,pessoa1.nome,sizeof(pessoa1.nome)+1);
	cout <<pessoa1.nome;
	cout <<endl;
	
	//STRCAT
	strcat(meunome,sobrenome);
	cout <<meunome<<endl;
	
	//STRCMP
	int res;
	res=strcmp(meunome,sobrenome);
	if(res==0){
		cout <<"iguais"<<endl;
	}else{
		cout<<"diferentes"<<endl;
	}
	return 0;
}
