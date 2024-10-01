#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int minSize = min(word1.length(), word2.length());
        string mergedWord = "" ;

        for(int i = 0; i < minSize;i++){
            mergedWord.push_back(word1[i]);
            mergedWord.push_back(word2[i]);
        }
        if(word1.length() > word2.length()){
            mergedWord.append(word1.substr(minSize));
        }else{
            mergedWord.append(word2.substr(minSize));

        }

        return mergedWord;

    }
};

int main(){


    string test_1 , test_2;

    cout << "Enter the first word: ";
    cin >> test_1;
    cout << "Enter the second word: ";
    cin >> test_2;

    Solution solution;
    string result = solution.mergeAlternately(test_1, test_2);
    cout << "the merged world is : " << result << endl;

    return 0;
}