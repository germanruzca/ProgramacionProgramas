using namespace std;
#include<iostream>

int llenarM(int M[][5], int ren);
int colInversaM(int M[][5], int ren);
int mostrarM(int M[][5], int ren);
int mostrardPrin(int M[][5], int ren);
int mostrardSec(int M[][5], int ren);
int mostrarDiagArribaPrin(int M[][5], int ren);
void mostrarDiagAbajoPrin(int M[][5], int ren);
void mostrarDiagAbajoSec(int M[][5], int ren);
void mostrarDiagArribaSec(int M[][5],int ren);


int main(){
	int Mat[5][5];
	
	llenarM(Mat,5);
	mostrarM(Mat,5);	
	colInversaM(Mat,5);
	mostrarM(Mat,5);
	mostrardPrin(Mat,5);
	mostrardSec(Mat,5);
	mostrarDiagArribaPrin(Mat,5);
	mostrarDiagAbajoPrin(Mat,5);
	mostrarDiagArribaSec(Mat,5);
	mostrarDiagAbajoSec(Mat,5);
	

}

int llenarM(int M[][5], int ren){
	int a=1;
	for(int i=0;i<ren;i++){
		for(int j=0;j<5;j++)
		   M[i][j]=a++;
	 cout<<endl;
	}
}
int mostrarM(int M[][5], int ren){
	for(int i=0;i<ren;i++){
		for(int j=0;j<5;j++)
		   cout<<M[i][j]<<" ";
	 cout<<endl;
	}
}
 
int colInversaM(int M[][5], int ren){
	int b=1;
	for(int j=4;j>=0;j--){
		for(int i=4;i>=0;i--)
		   M[i][j]=b++;
	 cout<<endl;
	}
}

int mostrardPrin(int M[][5], int ren){
	cout<<endl<<"Diagonal principal: "<<endl;
	for(int i=0;i<ren;i++){
		cout<<M[i][i]<<" ";
	}
}
int mostrardSec(int M[][5], int ren){
	cout<<endl<<"Diagonal secundaria: "<<endl;
	for(int i=4,j=0;i>=0;i--,j++){
		cout<<M[i][j]<<" ";
	}
}

int mostrarDiagArribaPrin(int M[][5], int ren){
	cout<<endl<<"Numeros arriba de la diagonal principal: "<<endl;
	for(int i=0;i<ren;i++){
		for(int j=i+1;j<ren;j++){
			 cout<<M[i][j]<<" ";
		}
		
	}
}

void mostrarDiagAbajoPrin(int M[][5], int ren){
	cout<<endl<<"Numeros abajo de la diagonal principal: "<<endl;
	for(int i=1;i<ren;i++){
		for(int j=0;j<i;j++){
			 cout<<M[i][j]<<" ";
		}
	}
}

void mostrarDiagArribaSec(int M[][5], int ren){
	cout<<endl<<"Numeros arriba de la diagonal secundaria: "<<endl;
	for(int i=0;i<ren;i++){
		for(int j=0;j<(ren-1)-i;j++)
		      cout<<M[i][j]<<" ";
	}
}

void mostrarDiagAbajoSec(int M[][5], int ren){
	cout<<endl<<"Numeros abajo de la diagonal secundaria: "<<endl;
	for(int i=1;i<ren;i++){
		for(int j=ren-i;j<ren;j++)
		      cout<<M[i][j]<<" ";
	}
}



