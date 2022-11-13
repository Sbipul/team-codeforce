#include<stdio.h>
int main (){

    int N,i,a,b,counter,j;
    scanf("%d",&N);
    int solve = 0;
    for(i=0;i<N;i++){
        counter = 0;
        for(j=0;j<3;j++){
            scanf("%d",&a);
            if(a==1){
                counter++;
            }
        };
        if(counter >=2){
            solve++;
        };
    };
    printf("%d",solve);
    return 0;
};
