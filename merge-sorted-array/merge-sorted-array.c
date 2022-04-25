void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    int i = m - 1;
    int j = n - 1;
    int len = i + j + 1;
    
    while(i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
            nums1[len--] = nums1[i--];
		else
			nums1[len--] = nums2[j--];
    }
	while (j >= 0)
		nums1[len--] = nums2[j--];
}