class Solution {
public:
//ritika
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int, int> Rit;
       for(int i=0; i< nums.size(); i++){
        auto id = Rit.find(target-nums[i]);
        if(id==Rit.end()){
            Rit.insert({nums[i], i});
        }
        else{
            return {id-> second, i};
        }
       } 
       return {};
    }
};