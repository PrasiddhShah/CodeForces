#include <iostream>
using namespace std;
int main(){
    int question;
    cin>>question;
    int count = 0;
    for (int i = 0; i < question;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c >=2){
            count+=1;
        }
    }
    cout<<count<<endl;
    return 0;
}