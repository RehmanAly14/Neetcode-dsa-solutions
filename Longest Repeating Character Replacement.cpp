class Solution {
   public:
    int getMaxCount(vector<int>& f) {
        int mx = 0;
        for (int i = 0; i < 256; i++) {
            mx = max(mx, f[i]);
        }
        return mx;
    }
    int characterReplacement(string s, int k) {
        int n = s.size();
        int low = 0;
        int res = INT_MIN;
        vector<int> f(256, 0);
        for (int high = 0; high < n; high++) {
            f[s[high]]++;
            int len = high - low + 1;
            int maxCount = getMaxCount(f);
            int diff = len - maxCount;
            while (diff > k) {
                f[s[low]]--;
                low++;
                 len = high - low + 1;
                maxCount = getMaxCount(f);
                 diff = len - maxCount;
            }

            len = high - low + 1;
            res = max(res, len);
        }
        return res;
    }
};
