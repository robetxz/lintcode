// 注意建堆复杂度O(n)
class Solution {

 public:
  /**
   * @param A: Given an integer array
   * @return: void
   */
  void heapify(vector<int> &A) {
    // write your code here
    for(int i = 0; i < A.size(); ++i) {
      swim(A, i);
    }
  }

 private:
  void swim(vector<int> & A, int indx) {
    int parent = (indx - 1) / 2;
    while(A[parent] > A[indx]) {
      swap(A[parent], A[indx]);
      indx = parent;
      parent = (indx - 1) / 2;
    }
  }
};

