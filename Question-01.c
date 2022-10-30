#include <stdio.h>

int main(){
    char id[5] = {'6', '1', '9', '8', '4'};
    char temp;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(id[j] < id[j + 1]){
                temp = id[j];
                id[j] = id[j + 1];
                id[j + 1] = temp;
            }
        }
    }

    for(int k = 0; k < 5; k ++){
        printf("%c ", id[k]);
    }
}