#include <iostream>
#include <vector>

using namespace std;

int main(){
    int testCase{};
    vector<int> res{};
    cin >> testCase;

    int eventsNumber{}, timeA{}, timeB{};
    for (int i = 0; i < testCase; i++){
        cin >> eventsNumber >> timeA >> timeB; 
        
        int aEvent = 1, bEvent = 1;
        int lowestTime{};

        if (timeA < timeB){
            lowestTime = timeA;
        } else{
            lowestTime = timeB;
        }

        int s = lowestTime; 
        bool leftStartA = false, leftStartB = false;
        while(true){
            s++;
            if ((s-1) % timeA == 0) {
                aEvent++;
                aEvent = ((aEvent - 1) % eventsNumber) + 1;
                leftStartA = true;
            }
            if ((s-1) % timeB == 0){
                bEvent++;
                bEvent = ((bEvent - 1) % eventsNumber) + 1;
                leftStartB = true;
            }
            if (aEvent == bEvent && leftStartA == leftStartB){
                res.push_back(aEvent);
                break;
            }
        }
    }

    for (const int& i: res){
        cout << i << endl;
    }
    return 0;
}

// if (s%lowestTime == 0){
                //     continue;
                // }
                // s += lowestTime - (s % lowestTime);

                // 1, 4, then want to + 2 (3 - 4 % 3)
                // 2, 5, then want to + 1 (3 - 2 % 3)
                // 6 then want to + 0 (3 - 6%3)
                // 1, then want to + 1
                // 2, then want to + 0