class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        
        int n = s.length();
        int j = 0; 
        
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                if (j != 0) {
                    s[j++] = ' ';
                }
                
                int start = j;
                
                while (i < n && s[i] != ' ') {
                    s[j++] = s[i++];
                }
                
                reverse(s.begin() + start, s.begin() + j);
            }
        }

        s.erase(s.begin() + j, s.end());
        return s;
    }
};