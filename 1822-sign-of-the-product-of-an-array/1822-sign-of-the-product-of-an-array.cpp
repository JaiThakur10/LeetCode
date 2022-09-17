class Solution {
public:
    int arraySign(vector<int>& nums) {
          int cm=0,z=0;
    for(auto it: nums){
        if(it<0) cm++;
        if(it==0) return 0;
    }
    if(cm%2==0) return 1;
    return -1;
    }
};