void moveZeroes(int* nums, int numsSize) {
    int i = 0, j = 0;
    for (j = 0; j < numsSize; j++) {
        if (nums[j] != 0) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
        }
    }
}
