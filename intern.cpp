#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

void unreasonableIntern() { // time complexity = n + m
    int userInput{};
    int e{}, s{}, c{};
    int r = 0, nr = 0;

    cin >> userInput;

    for (int i = 0; i < userInput; i++){
        cin >> e >> s >> c;
        if (e > 0) {nr++; continue;};
        if (s > 5) {nr++; continue;};
        if (c < 1) {nr++; continue;};
        r++;
    }
    
    cout << r << endl << nr << endl;
}

int main(){
    unreasonableIntern();
    return 0;
}