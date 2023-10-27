#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    int temp;
    cin>>temp;
    int resto = temp%3600;
    int h = temp/3600;
    int m = resto/60;
    int restoSegundos = (resto%60);
    int s = restoSegundos;
    cout<<fixed<<setprecision(0)<<h<<"h ";
    cout<<fixed<<setprecision(0)<<m<<"m ";
    cout<<fixed<<setprecision(0)<<s<<"s"<<endl;

    

    return 0;

}