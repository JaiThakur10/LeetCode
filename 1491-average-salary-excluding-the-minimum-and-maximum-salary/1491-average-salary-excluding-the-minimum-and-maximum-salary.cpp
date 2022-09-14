class Solution {
public:
    double average(vector<int>& salary) {
        int mn=INT_MAX,mx=INT_MIN;
        double sum = 0;
        for(int i =0;i<salary.size();i++){
            sum+=salary[i];
            mn=min(mn,salary[i]);
            mx=max(mx,salary[i]);
        }
        return(sum-mn-mx)/(salary.size()-2);
    }
};