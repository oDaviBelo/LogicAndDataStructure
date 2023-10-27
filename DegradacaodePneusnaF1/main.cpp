#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    string type;
    cin>>type;
    float dS;
    cin>>dS;
    float dM;
    cin>>dM;
    float dH;
    cin>>dH;
    if(type == "S"){
        cout<<fixed<<setprecision(0)<<floor(80/dS)<<endl;
    }else if(type == "M"){
        cout<<fixed<<setprecision(0)<<floor(80/dM)<<endl;
    }else if(type == "H"){
        cout<<fixed<<setprecision(0)<<floor(80/dH)<<endl;
    }

    return 0;

}