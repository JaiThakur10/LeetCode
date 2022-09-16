class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans = INT_MAX,res=-1;
        for(int i = 0;i<points.size();i++){
            if(x==points[i][0]||y==points[i][1]){
                if(ans>abs(x-points[i][0])+abs(y-points[i][1])){
                    res=i;
                    ans=abs(x-points[i][0])+abs(y-points[i][1]);
                }
            }
        }
       return res;                                         
    }
};