#include<stdio.h>
#include<stdio.h>
#include<unistd.h>
#include "common.h"
#include<stdlib.h>

int main(){
    int *p=malloc(sizeof(int));
    printf("(%d) address pointed to by p %p \n",getpid(),p);
    *p=0;
    while(1){
        Spin(1);
        *p=*p+1;
        printf("(%d) p : %d \n",getpid(),*p);
    }
    return 0;
}
