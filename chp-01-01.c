#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<sys/time.h>
#include "common.h"

int main(int argc,char *argv[]){
    if(argc!=2){
        printf("wrong format");
    }
    char *character=argv[1];
    while(1){
        Spin(1);
        printf("%s\n",character);
    }
    return 0;
}
