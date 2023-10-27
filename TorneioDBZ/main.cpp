#include <iostream>
using namespace std;

int main(){
    int N1;
    cin>>N1;
    int N2;
    cin>>N2;
    int N3;
    cin>>N3;
    int N4;
    cin>>N4;
    int N5;
    cin>>N5;
    if(N1+N2+N3+N4+N5 <= 5000){
        cout<<"Acesso liberado"<<endl;
    }else{
        cout<<"Acesso proibido"<<endl;
        
    }

    return 0;
}