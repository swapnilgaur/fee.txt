#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}

int main(){
    int a,b,c;
    cout<<"Enter the first number :"<<endl;
    cin>>a;
    cout<<"Enter the second number :"<<endl;
    cin>>b;
    
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum(a,b)<<endl;
return 0;
}