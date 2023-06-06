/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void w()
{
float w,f,d;
cout<<"enter the value of f :"<<endl; 
cin>>f; 
cout<<"enter the value of d :"<<endl; 
cin>>d; 
cout<<"the work is "<<f*d<<" J"<<endl; 
}
 
void f()
{
float w,f,d;
cout<<"enter the value of w : "<<endl; 
cin>>w; 
cout<<"enter the value of d :"<<endl; 
cin>>d; 
cout<<"the force is "<<w/d<<" N"<<endl; 
}
void d()
{
float w,f,d;
cout<<"enter the value of w :"<<endl; 
cin>>w; 
cout<<"enter the value of f :"<<endl; 
cin>>f; 
cout<<"the displacement is "<<w/f<<" m"<<endl; 
}
int main()
{
int x;
 
do{ 
cout<<"pleas chooce what you want to calculate :"<<endl<< "1:to find w \n2:to find f\n3:to find d"<<endl; 
cin>>x; 
switch(x){
 
case 1:
w(); 
break; 
 
case 2:
f(); 
break; 
 
case 3:
d(); 
break; 
 
default: cout<<"Wrong Choice!"<<endl;
}
}while(x<=3 && x>=1); 
 

    return 0;
}
