#include<iostream>
using namespace std;
long long int fibonacci(int);
int main(){
    cout << fibonacci(50);
    return 0; 
}
long long int fibonacci(int num){
	if(num==0)return 0;
	else if(num==1)return 1;
	else{
		return fibonacci(num-1)+fibonacci(num-2);
	}
	
}

