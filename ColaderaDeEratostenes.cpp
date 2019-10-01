using namespace std;
#include<iostream>
void llenarUno(int V[],int n);
void mostrarVec(int V[],int n);
void ponerCeros(int V[], int n);
int main(){
	int Vec[1000];
		
	llenarUno(Vec,1000);
	ponerCeros(Vec,1000);
	mostrarVec(Vec,1000);
		
}
void llenarUno(int V[],int n){
	for(int i=2;i<1000;i++)
	  V[i]=1;
}

void mostrarVec(int V[], int n){
	for(int i=0;i<1000;i++){
		if(V[i]==1)
	      cout<<i<<endl;
	}
	   
}

void ponerCeros(int V[], int n){
	for(int i=2;i<1000;i++){
		if(V[i]==1){
			for(int j=i+1;j<1000;j++){
				if(j%i==0)
					 V[j]=0;
			}
		}	     
	}	     			
}
	

