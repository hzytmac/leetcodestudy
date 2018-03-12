class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int last = -1;
        for (const auto& num : nums) {
            if (last == -1 || nums[last] != num) {
                nums[++last] = num;
            }
        }
        return last + 1;
    }
};

/*
Since the array is already sorted, we can keep two pointers ii and jj, 
where ii is the slow-runner while jj is the fast-runner. 
As long as nums[i] = nums[j], we increment j to skip the duplicate.
When we encounter nums[j]≠nums[i], 
the duplicate run has ended so we must copy its value to nums[i+1]. 
i is then incremented and we repeat the same process again until j reaches the end of array.

public int removeDuplicates(int[] nums) {
    if (nums.length == 0) return 0;
    int i = 0;
    for (int j = 1; j < nums.length; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}
*/
