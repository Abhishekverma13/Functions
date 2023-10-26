#include<iostream>
using namespace std;
int sum(int num1, int num2)
{
return num1 + num2;
}
double sum(double num1, int num2){
    return num1 + num2;    
}
double sum(double num1, double num2){
    return num1 + num2;
}
double sum(int num1, double num2){
    return num1 + num2;
}
double sum(int num1, int num2, double num3, double num4){
    return num1 + num2 + num3 + num4;
}
main(){
    cout<<"sum-:"<<sum(10,20)<<endl;
    cout<<"double-:"<<sum(10.50,20)<<endl;
    cout<<"two double-:"<<sum(10.50,10.50)<<endl;
    cout<<"one double one integer-:"<<sum(10.50,2)<<endl;
    cout<<"4 digit-:"<<sum(2,3,5.5,6.6)<<endl;

}
//ADVANTAGE-: size of executable will be reduced.
//Complile time polymorphism
//function overloading and operator overloading are two types of compile time polymorphism
//Assign some functionality logic to an operator is called an operator overloading.
//use structure to group an imaginary part together, or in a class.
// 
