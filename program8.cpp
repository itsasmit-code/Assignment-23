// Write a c++ program to swap values of two int variables without using third variable 
#include <iostream>  
using namespace std;  
int main()  
{  
int x=5, y=10;      
cout<<"Before swap a= "<<x<<" b= "<<y<<endl;      
x = x + y; 
y = x - y; 
x = x - y;    
cout<<"After swap a= "<<x<<" b= "<<y<<endl;      
return 0;  
}  
