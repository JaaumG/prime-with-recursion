#include <stdio.h>

void primeVerify(int prime, int n, int quantidade){
    if(quantidade>0){
        if((int)(prime/2)>n){
            if(prime%n==0){
                primeVerify(prime+=1, 2, quantidade);
            }else{
                primeVerify(prime, n+=1, quantidade);
            }
        }else {
            if(prime!=4){
                quantidade-=1;
                printf("%d\n", prime);
            }
            primeVerify(prime+=1, 2, quantidade);
        }
    }
}

int main(){
	primeVerify(1,2, 20);
}