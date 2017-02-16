#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>
#include<ctype.h>


//hi justin
int main(int argc, char** argv){

        int* p = (int*)malloc(100);
        char* q = (char*)malloc(100);
        char** r = (char**)malloc(100);
        free(p);
        free(q);
        free(r);

        return 0;
}

