class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        //char a,b;
        int a = 0,b=n-1;
        while(a<=b){
            swap(s[a],s[b]);
            a++;
            b--;
        }
    }
};
