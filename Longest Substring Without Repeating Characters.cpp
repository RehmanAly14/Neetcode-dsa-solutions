class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0){
            return 0;
        }
        int left=0;
        int right=0;
        int ans=0;
        unordered_set<char>f;
        while(right<n){
            char c=s[right];
            while(f.find(c)!=f.end()){
                f.erase(s[left]);
                left++;
            }
            f.insert(c);
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};
