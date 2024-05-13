#include<iostream>

#include<cmath>

using namespace std;

string Taqsimiadadho (int a,int b){


    if (a%b==0 || b%a==0) return "Yes";
    else return "No";
}
int main(){

    int d,c;
    cin>>d>>c;

    cout<<Taqsimiadadho(d,c);
 main();
}

