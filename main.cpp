#include <stdlib.h>
#include <stdio.h>
#include "include/library.h"


//https://www.cnblogs.com/tongye/p/9650573.html
int main() {
    hello();
    int a =23;
    int *p =&a;// 声明一个 int 类型的指针 p
    int **p1=&p;        // 声明一个 char 类型的指针 p
    int arr0[10]={1,2,3};
    int *arr[10]={p, (int *) p1, p};   // 声明一个指针数组，该数组有10个元素，其中每个元素都是一个指向 int 类型对象的指针
    int (*arr1)[10] = &arr0; // 声明一个数组指针，该指针指向一个 int 类型的一维数组

    int *b;
    b=p;
    printf("%p\n",p);
    printf("%d\n",*p);

    printf("%p\n",p1);
    printf("%p\n",*p1);
    printf("%d\n",**p1);

    printf("%p\n",b);
    printf("%d\n",*b);

    printf("###################################\n");
    printf("%p\n",&arr0);
    printf("%p\n",arr0);
    printf("%p\n",&arr0[0]);
    printf("%p\n",&arr0[1]);
    printf("%p\n",arr);
    printf("%p\n",arr[0]);
    printf("%p\n",arr[1]);

    printf("****************************************\n");

    printf("%p\n",arr1);

    return 0;
}
