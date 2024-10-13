#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int numJewelsInStones(string jewels, string stones) { // time complexity = n + m
    unordered_set<char> set{}; 
    int res{};

    for (int i = 0; i < jewels.length(); i++){
        set.insert(jewels[i]);
    }    

    for (int i = 0; i < stones.length(); i++){
        if(set.find(stones[i]) != set.end()){
            res += 1;
        }
    }

    return res;
}

int main(){
    // loop through j, loop through stones, if match then add 1. n^2
    // jewels are all unique. stones.length < 50
    // loop through J and put it inside an unordered map, loop through stone and check if theres j element.
    cout << numJewelsInStones("aA", "aAAbbbbccdd");
    return 0;
}