#include <cstdio>
#include <iostream>
using namespace std;
int a = 6;
int *p; //-*first meaning: defination of pointer
char *pi;
int main()
{
    //&取地址
    printf("%p\n%p\n%d\n%d\n", a, &a, a, &a);//&a:取a的地址
    p = &a;
    //-*second meaning: 解指针
    printf("%p\n%p\n%d\n%d\n", p, *p, p, *p);
    system("pause");
    return 0;
} 