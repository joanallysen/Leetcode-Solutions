#include <iostream>
#include <vector>


using namespace std;


int main(){
    int cr{}, ra{}, ir{}; // current rank, required amount, item rank needed
    cin >> cr >> ra >> ir;

    vector<int> res(cr, 0);
    vector<int> items{};

    int userInput{};
    for (int i = 0; i < cr; i++){
        cin >> userInput;
        items.push_back(userInput);
    }

    int memo = ra;
    bool isUpgradable = false;
    for (int i = ir-1; i < items.size(); i++){
        if (ra == items[i]){
            isUpgradable = true;
            break;
        }

        int craftNeeded = memo - items[i];

        if (craftNeeded <= 0){
            isUpgradable = true;
            break;
        } 

        res[i] = craftNeeded;
        memo = craftNeeded * 3;
    }

    if (isUpgradable){
        cout << "YES" << endl;
        for (const auto& i : res){
            cout << i << " ";
        }
    } else{
        cout << "NO" << endl;
    }

    return 0;
}



    // for (int i = cr; i > 0; i--){
    //     if (i == cr){
    //         res.push_back(items[i-1]);
    //         continue;
    //     }
    //     res.insert(res.begin(), (items[i-1] + items[i] / 3));
    // }
    // if (res[0] == ra){
    //     cout << "YES" << endl;
    // } else{
    //     cout << "NO" << endl;
    // }
    // cout << "Calculating" << endl;