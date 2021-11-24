#include <stdio.h>
#include <limits.h>

#define TRUE 1
#define FALSE 0

int mat[10][10];

void initMat(){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            scanf("%d", &(mat[i][j]));
        }
    }
}

int min(int x, int y){
    if(x<=y){
        return x;
    }
    return y;
}

int ShortRoute(int x, int y){
    if (x==y){
        return -1;
    }
    int mat2[10][10];
    for(int i=0; i<10; i++){
        for(int j = 0; j < 10; j++){
            if(mat[i][j] == 0){
                mat2[i][j] = INT_MAX;
            }
            else{
                mat2[i][j] = mat[i][j];
            }
        }
    }
    for(int k = 0; k < 10; k++){
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if(mat2[i][k] == INT_MAX || mat2[k][j] == INT_MAX){
                    continue;
                }
                mat2[i][j] = min(mat2[i][j], mat2[i][k] + mat2[k][j]);
            }
        }
    }
    if (mat2[x][y] == INT_MAX){
        return -1;
    }
    return mat2[x][y];
}

int Route(int i, int j){ // Return if their is a route between i and j
    if (ShortRoute(i, j) != -1){
        return TRUE;
    }
    return FALSE;
}
