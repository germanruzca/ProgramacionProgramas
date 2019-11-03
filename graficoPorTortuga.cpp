using namespace std;
#include<iostream>

void Mueve(int M[][20],int);
int Menu();
void plumaArriba(bool &pluma);
void plumaAbajo(bool &pluma);
void mostrarGrafico(int M[][20],int );
void girarDerecha(int &direc,int &camino);
void girarIzquierda(int &direc,int &camino);
void avanzar(int M[][20], int, bool &pluma, int direc, int &Col, int &Ren, int &camino);
void mostrarCor(int &Ren, int &Col);

int main(){
	int piso[20][20]={{0}}, sal;
	bool pluma=false;
	int torCol=0,torRen=0;
	char pos;
	int direc=1,camino=1;//Direccion, indica si va por columnas=-1 o renglones=1;
	do{
	    sal=Menu();
	    switch(sal){
			case 1:
				plumaArriba(pluma);
			break;
			case 2:
				plumaAbajo(pluma);
			break;
			case 3:
				girarDerecha(direc,camino);
			break;
			case 4:
				girarIzquierda(direc,camino);
			break;
			case 5: case 10:
				avanzar(piso,20,pluma,direc, torCol, torRen,camino);
			break;
			case 6:
				mostrarGrafico(piso,20);
			break;
			case 8:
				mostrarCor(torRen,torCol);
		
	  }
	}while(sal!=7);
	system("cls");
	cout<<"Saliendo...";
}


void Mueve(int M[][20],int ren){
	
}

int Menu(){
   int Op;
     cout<<"\n1 Pluma hacia arriba\n2 Pluma hacia abajo\n3 Gira a la derecha\n4 Gira a la izquierda\n5 o 10 Avanzar\n6 Imprime el arreglo de 20 por 20\n7 Fin de datos (centinela)\n8 Mostrar Coordenas\n";
     cin>>Op;
   return Op;
}

void plumaArriba(bool &pluma){
	pluma=false;
	cout<<"Pluma arriba!"<<endl;
}

void plumaAbajo(bool &pluma){
	pluma=true;
	cout<<"Pluma abajo!"<<endl;
}

void mostrarGrafico(int M[][20],int ren){
	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++)
		    if(M[i][j]==1){
		    	cout<<"*";
			}
			else if(M[i][j]==0) 
			     cout<<" ";
	cout<<endl;	    
	}
}

void girarDerecha(int &direc,int &camino){
	if(direc==-1){
		 if (camino==1 )
		 {  
		     direc = 1;
             camino = -1;
		 }

    else{
	     direc = 1;
		 camino=1;
	}
}
   else{
   	     if(camino==1){
             direc = -1;
             camino = 1;
        }
         else{
             direc=-1;
             camino=-1;
		}
   }
   cout<<"Girado a la derecha!"<<endl;
}
void girarIzquierda(int &direc,int &camino){
	if(direc==-1){
		 if ( camino==1 )
		 {  
		     direc = 1;
             camino = 1;
		 }

    else{
	     direc = 1;
		 camino=-1;
	}
}
   else{
   	     if(camino==1){
             direc = -1;
             camino = -1;
        }
         else{
             direc=-1;
             camino=1;
		}
   }
	cout<<"Girado a la izquierda!";
}
void avanzar(int M[][20], int ren, bool &pluma, int direc, int &Col, int &Ren,int &camino){
	int avan;
	int stop;
	cout<<"Cuantas casillas a avanzar: "; 
	cin>>avan;
	if(direc==1){
		if(camino==1){
		  if(pluma==true){
			for(int i=0;i<avan;i++){
				Col++;
			    if(Col==20)
			         Col=19;
			    M[Ren][Col]=1;
			}
			    
			}
		  
	}
		else{
			if(pluma==true){
			     for(int i=avan;i>=0;i--){
			     	Col--;
			          if(Col==-1)
			             Col=0;
			          M[Ren][Col]=1;
				 }
			          
			          
		     }
		}
		
	

	}
	else if(direc==-1){
		if(camino==1){
			if(pluma==true){
				for(int i=0;i<avan;i++){
					Ren++;
				    if(Ren==20)
				        Ren=19;
					M[Ren][Col]=1;
				}
				    
				
			}
	}
		else{
			if(pluma==true){
				for(int i=avan;i>=0;i--){
					Ren--;
				    if(Ren==-1)
				        Ren=0;
				    M[Ren][Col]=1;
				}
				    
			}
	
		}
	}
	cout<<"Cordenadas: ("<<Ren<<","<<Col<<")";
}

void mostrarCor(int &Ren, int &Col){
	cout<<"Cordenadas: ("<<Ren<<","<<Col<<")";
}
