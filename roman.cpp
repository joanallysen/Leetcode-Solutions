#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int romanToInt(string s){
    unordered_map<char, int> symbolsMap {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };
    int total = 0;
    int i = 0;
    while (i < s.size()){
        int current = symbolsMap[s[i]];
        int next = i + 1 < s.size() ? symbolsMap[s[i + 1]] : 0;

        if (current < next){
            total += next - current;
            i+=2;
        } else{
            total += current;
            i++;
        }
    }

    return total;
}
int main(){
    cout << romanToInt("MDCCLXXVI");
    return 0;
}