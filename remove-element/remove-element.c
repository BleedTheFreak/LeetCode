
int removeElement(int* nums, int numsSize, int val){
    int i , j;
	i = j = 0;
	while (i < numsSize)
    {
        if (nums[i] != val)
            nums[j++] = nums[i];
        i++;
    }
	return j;
}