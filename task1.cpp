#include<iostream>

#include<cmath>

using namespace std;

int Addition_Of_Two_Numbers (int a, int b){

    return a+b;
}
int Subtraction_Of_Two_Numbers (int a, int b){

    return a-b;
}
int Multiplication_Of_Two_Numbers (int a, int b){

    return a*b;
}
int Division_Of_Two_Numbers (int a, int b){

    return a/b;
}
int main(){

    int c,d;
    cin>>c>>d;

    cout<<Addition_Of_Two_Numbers(c,d)<<endl;
    cout<<Subtraction_Of_Two_Numbers(c,d)<<endl;
    cout<<Multiplication_Of_Two_Numbers(c,d)<<endl;
    cout<<Division_Of_Two_Numbers(c,d)<<endl;
}

