#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isSubsequence(string s, string t) {
    int j = 0;
    int correct = 0;
    for (int i=0; i<t.size(); i++){
        if (t[i] == s[j]){
            correct++;
            j++;
        }
    }
    
    if (correct == s.size()){
        return true;
    } return false;
}

int main(){
    if(isSubsequence("abc", "ahbgdc")){
        cout << "TRUE" << endl;
    } else{
        cout << "FALSE" << endl;
    }

    return 0;
}