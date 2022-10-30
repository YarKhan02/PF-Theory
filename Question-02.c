#include <stdio.h>

int main(){
    int arr1[4] = {2, 4, 5, 1};
    int arr2[4] = {5, 7, 1 ,2};
    int arr[4];

    for(int i = 0; i < 4; i++){
        arr[i] = arr1[i] * arr2[i];
    }

    for(int j = 0; j < 4; j++){
        printf("%d ", arr[j]);
    } 
}