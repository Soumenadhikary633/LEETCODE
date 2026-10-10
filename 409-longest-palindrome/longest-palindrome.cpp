
class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] = {0};

        for (char ch : s) {
            freq[ch]++;
        }

        int length = 0;
        bool odd = false;

        for (int i = 0; i < 128; i++) {
            length += (freq[i] / 2) * 2;

            if (freq[i] % 2 == 1) {
                odd = true;
            }
        }

        if (odd) {
            length++;

        }

        return length;
    }
};
