#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <string>
using namespace std;
std::string s;

int randomfunc(int j) 
{ 
    return rand() % j; 
} 
void num_moedas(std::vector<string>& moedas, int qnt)
{
	int tam_moedas = moedas.size();
    int h ;
	for(int i = 0; i < qnt; i++)
	{		

		if(moedas[i] == "1g")
		   cout << "Moeda "<< i+1 <<" Verdadeira \n";
		else{
           cout << "Moeda "<< i+1 <<" falsa \n";
           h = i; 
        }       
    }
    cout <<"\n Dentre as "<< qnt <<" moedas, a falsa se encontra na"<<" posicao "<< h+1 << "\n";   
}

int main(int argc, char *argv[])
{
	int t;	
    cout << "\n Nesse programa sera criado uma quantidade \n"<<
                " de moedas que o usuario solicitar \n"<<
                " e aleatoriamente colocara moedas de peso \n"<<
                " 1 e de peso 0,5 depois sera feito uma verificacao \n"<<
                " de qual moeda eh a falsa, ou seja a que possui \n"<<
                " peso diferente de 1\n\n Digite a quantidade de moedas : ";
	cin >> t;
    
    std::vector<string> moedas {"0.5g"};
    for(int i = 1; i < t; i++)
	{	
	  moedas.push_back("1g");
        
    } 

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    shuffle (moedas.begin(), moedas.end(), std::default_random_engine(seed));

	num_moedas(moedas, t);

	return 0;
}