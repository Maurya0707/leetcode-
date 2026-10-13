/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
   int* result = (int*)malloc(2 * sizeof(int));
    
    // 2. Set the return size to 2 as required by the caller
    *returnSize = 2;
    
    // 3. Double loop to find the pair matching the target
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result; // Return the allocated array
            }
        }
    }
    
    // Return NULL if no solution is found (though a solution is guaranteed)
    *returnSize = 0;
    free(result);
    return NULL; 
}