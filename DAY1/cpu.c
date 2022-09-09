#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <assert.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    //argc 是argument count的缩写表示传入main函数中的参数个数，包括这个程序本身
    //argv 是 argument vector的缩写表示传入main函数中的参数列表，其中argv[0]表示这个程序的名字
    printf("%s\n",argv[1]);
    if (argc != 2) {
        fprintf(stderr, "usage: cpu <string>\n");
        exit(1);
    }
    char *str = argv[1];
    while (1) {
        sleep(1);
        printf("%s\n", str);
    }
    return 0;
}