class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>hm;
        for(int num : nums){
            hm[num]++;
            if(hm[num]>1){
                return true;
            }
        }
        return false;
    }
};
TC = O(1)
SC = O(n) bcz we use hashmap  
