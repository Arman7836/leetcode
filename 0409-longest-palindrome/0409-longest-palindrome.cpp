class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] = {0};

        for (char ch : s) {
            freq[(unsigned char)ch]++;
        }

        int length = 0;
        bool oddFound = false;

        for (int count : freq) {
            length += (count / 2) * 2;

            if (count % 2 == 1) {
                oddFound = true;
            }
        }

        if (oddFound) length++;

        return length;
    }
};