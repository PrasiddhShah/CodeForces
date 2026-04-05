#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num_word;
    vector<string> arr;
    cin>>num_word;
    for(int i =0; i < num_word;i++){
        string input;
        cin>>input;
        arr.push_back(input);
    }
    for (string& word : arr) {
        if (word.length() <= 10) {
            cout << word << endl;
        } else {
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        }
    }
    return 0;
}