/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

var twoSum = function(nums, target) {
    for (let i = 0 ;i < nums.length;i++)
    {
        for (let j = i + 1 ; j < nums.length;j++)
        {
            if ((nums[i] * 1 + nums[j] * 1) == target)
            return ([i,j])                      
        }     
    }
};