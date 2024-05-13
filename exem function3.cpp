#include<iostream>

#include<cmath>

using namespace std;

string Psitiv_Negativ (int a, int b){

    if (a>0 && b>0) return "True";
    else if (a<0 && b<0) return "True";
    else if (a==0 && b==0) return "hardu adad ba 0 barobar ast";
    else return "False";
}
int main(){

    int d,c;
    cin>>d>>c;

    cout<<Psitiv_Negativ(d,c);
 main();
}

