#include <stdio.h>
#include "my_mat.h"

int main(){
    while(1){
        char x;
        scanf("%c", &x);
        if(x == 'A'){
            initMat();
        }
        else if(x == 'B'){
            int i, j;
            scanf("%d%d", &i, &j);
            if(Route(i, j) == 0){
                printf("False\n");
            }
            else{
                printf("True\n");
            }
        }
        else if(x == 'C'){
            int i, j;
            scanf("%d%d", &i, &j);
            printf("%d\n", ShortRoute(i, j));
        }
        else if(x == 'D'){
            return 0;
        }
    }
}