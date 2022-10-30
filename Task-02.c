#include <stdio.h>

int main(){
    char str[50] = "prrrogram is prrrogramming";
    char ss[20] = "rr";
    int x = strlen(str);
    int y = strlen(ss);
    int count = 0, j = 0, max = 0;

    for(int i = 0; i < x;){
        while(str[i] == ss[j]){
            j++;
            i++;
        }
        if(j == y){
            max++;
            j = 0;
        }
        else{
            i++;
        }
    }
    printf("\nNo of matches of substring in main string is: %d", max);
}