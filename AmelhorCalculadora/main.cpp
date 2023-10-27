#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



int main(){
    string signal;
    cin>>signal;
    float A;
    cin>>A;
    float B;
    cin>>B;
    if(signal == "+"){
        cout<<A+B<<endl;
    }else if(signal == "-"){
        cout<<A-B<<endl;
    }else if(signal == "/"){
        cout << fixed << showpoint;
        cout << setprecision(1);
        cout<<A/B<<endl;
    }else if(signal == "*"){
        cout<<A*B<<endl;
    }


    


    return 0;
}