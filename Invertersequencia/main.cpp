#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    int N;
    cin>>N;
    int O[N] = {};
    for(int i = 0; i<N;i++){
        int num;
        cin>>num;
        O[i] = num;
        
    }

    for(int i = N-1; i>=0; i--)
    cout<<O[i]<<" ";
    return 0;


}