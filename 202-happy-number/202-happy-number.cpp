class Solution {
public:
    bool isHappy(int n) {
        if(n==1)
            return true;
        else if(n>1 && n<10 && n!=7)
            return false;
        int p=0;
        for(int i =n;i>0;i/=10){
            p+=pow(i%10,2);
        }
        return isHappy(p);
    }
};