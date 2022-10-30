#include <stdio.h>

int main(){
    int f = 2, s = 2, count = 0;
    int nums[10] = {1, 3, 3, 3, 4, 4, 4, 5, 5, 5};
    int l = sizeof(nums) / sizeof(int);
    printf("%d\n", l);

    while(f < l){
        if(nums[f] != nums[s - 2]){
            nums[s++] = nums[f];
        }
        f++;
    }

    for(int i = 0; i < s; i++){
        printf("%d ", nums[i]);
    }

    printf("\nk = %d", s);
}