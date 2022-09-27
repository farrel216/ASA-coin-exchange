#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
#define mak 20
#define koin 9 
int x[koin] = { 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100 }; 

void CoinExchange(int C,int A){
    int S[mak] = {0};
    int i=0,k=0,temp=0;
    while((temp!=A)&&(C!=0)){
    	C = C - x[i];
    	if((temp + x[i]) <= A){
    		S[k++] = x[i];
    		temp = temp + x[i];
    	}
    	else{
    		C = C + x[i];
    		i++;
    	}
    }
    for (i = 0; i < k; i++) { 
		printf("%d ", S[i]); 
	} 
	return;
}


int main(void) 
{ 

	int uang ; 
	scanf("%d", &uang); //memnbaca jumlah uang yang akan ditukar

	CoinExchange(uang, uang); //panmggil function 
	return 0; 
} 

