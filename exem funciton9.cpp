#include<iostream>

#include<cmath>

using namespace std;

int MinutSecond (int a){

    return a*60;
}
int main(){

    int b;
    cin>>b;

    cout<<MinutSecond(b);
}
