#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

//cabe�alho
void primo();

void primo(int n){
	int pri;
	cout <<"Digite um numero inteiro \n";
	cin >>n;
	if(n%2==0){
		cout <<"o numero � par \n";
	}else if(n>1 && n%2==1){
		cout <<"0 numero � primo \n";
	}else{
		cout <<"o numero � impar \n";
	}

}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	primo(n);
	
	return 0;
}
