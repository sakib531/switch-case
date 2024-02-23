#include<stdio.h>
int main(){
    int x;
    printf ("enter the value :");
    scanf ("%d", &x);

    switch(x){
    case 1:
        printf("value is : 1\n");
        break;
    case 2:
        printf("value is : 2\n");
        break;
    case 3:
        printf("value is : 3\n");
        break;
    default:
        printf("value is : unkown\n");
    }
    return 0;
}
