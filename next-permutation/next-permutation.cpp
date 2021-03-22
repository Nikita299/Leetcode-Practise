class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int n=A.size();
        if(n==2){
            reverse(A.begin(), A.end());
        }else{
            int index1 = 0, index2 = 0;
        for(int i=n-2; i>=0; i--){
            if(A[i]<A[i+1]){
                index1 = i;
                break;
            }
        }
        for(int i=n-1; i>index1; i--){
            if(A[i]>A[index1]){
                index2 = i;
                break;
            }
        }
        swap(A[index1], A[index2]);
        if(index1==0 && index2==0){
            reverse(A.begin(), A.end());
        }else{
            reverse(A.begin()+index1+1, A.end());
        }    
        }
        
    }
};