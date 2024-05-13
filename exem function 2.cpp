#include<iostream>

#include<cmath>

using namespace std;

int kalon (int a, int b, int c){

    return max(a, max (b,c));
}
int xurdi (int a, int b,int c){

    return min(a, min (b,c));
}
int miyona (int a, int b, int c){

    return a+b+c-kalon (a,b,c)-xurdi(a,b,c);
}
int main (){

    int d,e,f;
    cin>>d>>e;
    cin>>f;

    cout<<miyona(d,e,f);

main();
}
