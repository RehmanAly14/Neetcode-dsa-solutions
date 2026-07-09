class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n =heights.size();
        int lp=0;
        int rp=n-1;
        int ans=0;
        while(lp<rp){
            int w=rp-lp;
            int h=min(heights[lp],heights[rp]);
            int currCon=w*h;
            ans=max(ans,currCon);
            if(heights[lp]<heights[rp]){
                lp++;
            }
            else{
                rp--;
            }
        }
        return ans;
        
    }
};
