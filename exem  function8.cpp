#include<iostream>

#include<cmath>

using namespace std;

float AveregOfNumbers (float a, float b, float c, float d){

    return (a+b+c+d)/4;
}
int main(){
    float a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;

    cout<<AveregOfNumbers (a,b,c,d);
}
