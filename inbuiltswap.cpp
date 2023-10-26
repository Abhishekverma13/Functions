#include<iostream>
using namespace std;
void swap(int,int);

int main(){
    int a = 5;
    int b = 10;
    cout<<"before swap"<<a<<b;
    swap(a,b);
}
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"after swap "<<""<<a<<""<<b<<endl;
    
    
    
}



