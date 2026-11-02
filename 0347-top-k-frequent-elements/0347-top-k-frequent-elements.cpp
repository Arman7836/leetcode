
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        // Count frequency
        for (int x : nums) {
            freq[x]++;
        }

        // Max Heap
        priority_queue<pair<int, int>> pq;

        for (auto it : freq) {
            pq.push({it.second, it.first});
        }

        vector<int> ans;

        // Get top k elements
        for (int i = 0; i < k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
