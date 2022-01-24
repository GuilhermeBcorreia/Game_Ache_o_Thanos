#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <ctime>

//programmed for Guilherme Correia..*

using namespace std;

class Thanos{
	public:
		int random, tiros, arvore;
	
	Thanos();
		
	void setTiro(int valor);
	void setRandom(int valor);
	void setArvore(int valor);
	
	int getTiro();
	int getRandom();
	int getArvore();
	
	void jogo();
};

Thanos::Thanos(){
    int i=0;
	
    
	setTiro(5);
    setArvore(50);
	
	srand(time(NULL));
    
    for( i=0; i<1; i++){
    	
    i = rand()%getArvore(); 
		
    
	} 
	setRandom(i);
//	cout<<" "<<getRandom()<<endl; //caso queira descobrir onde o thanos está
};

void Thanos::setTiro(int valor){
	tiros = valor;
};

void Thanos::setRandom(int valor){
	random = valor;
};

void Thanos::setArvore(int valor){
	arvore = valor;
};

int Thanos::getTiro(){
	return tiros;
};

int Thanos::getRandom(){
	return random;
};

int Thanos::getArvore(){
	return arvore;
};

void Thanos::jogo(){
	int chance=0, acertei=0;
	
	cout<<"-----------------------------\n"<<endl;
	cout<<"---THANOS x LANTERNA VERDE---\n"<<endl;
	cout<<"-----------------------------\n\n\n"<<endl;
						
	cout<<"VOCE TERA 5 CHANCES DE MATAR O THANOS"<<endl;
	
	while (chance != getTiro() ){   
	 
		
		cout<<"\n\n*****Atire!!****"<<endl;
		cin>>acertei;
		
		
		if( (acertei <= 0) or (acertei > 50) ){
			cout<<"Digite um numero entre 1 e 50...\n\n"<<endl;
		}
		
			if( (acertei > 0) and (acertei <= 50) ){
				chance++;
				
				if(acertei < getRandom() ){
					system("cls");
					cout<<"\nLANTERNA VERDE DESPREZIVEL!! TENTE UM NUMERO MAIOR!"<< endl;
					
				}
				
				if(acertei > getRandom() ){
					system("cls");
					cout<<"\nLANTERNA VERDE DESPREZIVEL!! TENTE UM NUMERO MENOR!"<< endl;
									
				}
				
				if(acertei == getRandom() ){
					
					system("cls");
					cout<<"----------VOCE SO ADIOU O INEVITAVEL!!!-----------\n"<<endl;
					cout<<"--------PARABENS!! VOCE SALVOU O UNIVERSO--------"<<endl;
					exit(0);
				}		
		}
					
	}
	system("cls");
	cout<<"*********************GAME OVER**********************\n\n"<<endl;
	cout<<"\n\n--------HUMANO DESPREZIVEL, VOCE PERDEU!!!--------"<<endl;			
};	
