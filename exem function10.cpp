#include <iostream>

#include<cmath>

using namespace std;

char CheckGrade (int a){

    if (a<=100 && a>=90) return 'A';
    else if (a<=89 && a>=80) return'B';
    else if (a<=79 && a>=70) return 'C';
    else if (a<=69 && a>=60) return 'D';
    else if (a>=0 && a<=59) return 'F';
    else if (a>100)
    {
        cout<<" bali guzoshtai shumo az meyor ziyod ast.";
    }
    else
    {
        cout<<" bali guzoshtai shumo boyad az 0 xurd naboshad.";
    }
}
int main(){

    int b;
    cin>>b;

    cout<<" Bahoi donishju ==> "<<CheckGrade(b);
main();
}

