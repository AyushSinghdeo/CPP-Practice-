#include<iostream>
using namespace std;
int sum(int a, int b);
int main(){
    int num1, num2;
    cin>>num1;
    cin>>num2;
    cout<<"sum"<<sum(num1, num2);
return 0;
}
int sum(int a, int b){
int c = a+b;
return c;
}