#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    /*
    PRE AND POST FIXES
    insert a[0] with 1, pre default is 1
    pre = 1;
    loop
    pre = 1
    i = 0, pre *= nums[0], put pre in a[0]
    i = 1, pre *= nums[1], put pre in a[1]
    i = 2, pre *= nums[2], put pre in a[2]
    */
}

int main(){
    vector<int> nums = {1, 2, 3, 4};
    productExceptSelf(nums);

    return 0;
}