#include <iostream>
using namespace std;

int main(){
    int num_input;
    cin>>num_input;
    int x = 0;
    for (int i =0;i<num_input;i++){
        string input;
        cin>>input;
        if (input == "++X" or input == "X++"){
            x+=1;
        }
        else{
            x-=1;
        }
    }
    cout<<x<<endl;
}