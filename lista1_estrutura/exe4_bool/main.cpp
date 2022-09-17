#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

bool condicao(bool,bool);

bool condicao(){
	bool cond;	
 	if(cond==sim){
 	return true;
//	}else if(cond==nao){
	//return false;
	}else{
	cout<<"palavra invalida"<<endl;
	}
	 return cond;
 }
	




int main() {
	setlocale(LC_ALL,"Portuguese");
	 
	bool cond;
	 char sim,nao;
	cout <<"digite sim ou nao \n";
	cin >>cond;
	cout<<condicao(sim,nao)<<endl;

	return 0;
}
