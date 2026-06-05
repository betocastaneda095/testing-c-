main.cpp
#include <iostream>

int main(){
    int n=0;
    std::cout<<"Ingrese un número entero: ";
    std::cin>>n;
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=(n*3)+1;
        }
        std::cout<<n;
    }
    return 0; 
}