#include <stdio.h>

int main(){
    int a,b;
    a=b;//for verification
    int A[2][2] = { {5,a} , {b,0} }; //given matrix
    int Atran[2][2];//Transpose of A
    //Finding Transpose of A
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            Atran[i][j]=A[j][i];
        }
    }
    //Verifying whether A is symmetric or not
    for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
            if(A[i][j] != Atran[i][j]){
                printf("There is an error\n");
                return -1;
            }
        }
    }
    printf("A is symmetric\n");
    printf("Verified");
    return 0;
}
