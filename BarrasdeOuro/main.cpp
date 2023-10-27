#include <iostream>
using namespace std;

int main(){
    int n;
    int total;
    for(int i=0;i<500;i++){
        cin>>n;
        total += n;
        if(n == 0){
            break;
        }else{
            continue;
        }
        
    }
    cout<<total<<endl;
    return 0;
}