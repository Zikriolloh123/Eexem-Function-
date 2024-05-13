#include<iostream>

#include<cmath>

using namespace std;

int Findmin (int a, int b, int c, int d){

    return (min (a,b), min(c,d));
}
int main(){

    int e,f;
    cin>>e>>f;

    cout<<Findmin(e,f);
}
