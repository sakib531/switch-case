#include<stdio.h>
int main(){
    int x;
    printf ("enter the value :");
    scanf ("%d", &x);

    switch(x){
    case 1:
        printf("hi\n");
        break;
    case 2:
        printf("hello \n");
        break;
    default:
        printf("goodbye\n");
    }
    return 0;
}
