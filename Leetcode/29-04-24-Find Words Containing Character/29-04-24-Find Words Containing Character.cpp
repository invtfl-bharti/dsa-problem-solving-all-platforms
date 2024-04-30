class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>arr;
        for(int i=0;i<words.size();i++) {
            if(words[i].find(x) != string::npos) {
                arr.push_back(i);
            }
        }
        return arr;
        // vector<int>arr;
        // for(int i=0;i<words.size();i++) {
        //     for(int j=0;j<words[i].size();j++) {
        //         if(words[i][j]==x) {
        //             arr.push_back(i);
        //             break;
        //         }
                
        //     }
        // }
        // return arr;
    }
};