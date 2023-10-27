#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int speed;
    cin>>speed;
    double milha = 0.62137;
    double res = speed/milha;
    cout<<fixed<<setprecision(2)<<res<<endl;
    return 0;
}

