class Solution {
 public:
  /**
   * @param A: A string includes Upper Case letters
   * @param B: A string includes Upper Case letter
   * @return:  if string A contains all of the characters in
   * B return true 
   *           else return false
   */
  bool compareStrings(string A, string B) {
    // write your code here
    unordered_map<char, int> M;
    for(auto & ch : A) M[ch] += 1;
    for(auto & ch : B) {
      if(M.count(ch)) {
        M[ch] -= 1;
        if(M[ch] == 0) M.erase(ch);
      }
      else return false;
    }
    return true;
  }
};


