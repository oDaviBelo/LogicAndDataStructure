#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int y;
    cin>>y;
    int sum = 1;
    for(int i = 0;i<y;i++){
        sum *= 2;
    }

    cout<<sum<<endl;
}