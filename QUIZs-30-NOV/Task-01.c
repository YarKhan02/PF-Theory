#include <stdio.h>

int main(){
    int nums[4] = {2, 7, 11, 15};
    int target = 9;

    int l = sizeof(nums) / sizeof(int);

    for(int i = 0; i < l; i++){
        for(int j = 1; j < l; j++){
            if((nums[i] + nums[j]) == target){
                printf("%d %d", i, j);
            }
        }
    }
}