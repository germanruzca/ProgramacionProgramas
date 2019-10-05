using namespace std;
#include<iostream>

int fibonacci(int n);

int main(){
	int num;
	cout<<"Numero de veces: ";
	cin>>num;
	for(int i=1;i<=num;i++)
	   cout<<fibonacci(i)<<" ";
}

int  fibonacci(int n){
	if(n==1)
	  return 0;
	else if(n==2)
	  return 1;
	else{
		return fibonacci(n-1) + fibonacci(n-2);
	}	
}
