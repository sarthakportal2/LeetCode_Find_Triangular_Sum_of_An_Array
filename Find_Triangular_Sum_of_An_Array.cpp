class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();//Nums'size declar
        while(n!=1){//Iterating through nums's size
            for (int i=0;i<n-1;i++){
                nums[i]=(nums[i]+nums[i+1])%10;//nums's modulo indx calc
            }n--;}return nums[0];}};//decrementing nums's size and printing its 0th indx val
