#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int insc;
    cin>>insc;
    float N1;
    cin>>N1;
    float N2;
    cin>>N2;
    float N3;
    cin>>N3;
    float N4;
    cin>>N4;
    float N5;
    cin>>N5;
    float resul = (N1+N2+N3+N4+N5)/5;
    cout<<insc;
    cout<<fixed<<setprecision(1)<<" "<<resul<<endl;


    return 0;

}