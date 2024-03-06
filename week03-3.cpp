#include <stdio.h>
int main()
{
    int a=10;
    printf("%5d 佔了5格",a);
    float pi=3.14159265358979323842643383279;
    printf("%f 浮點數只有8格\n",pi);
    printf("%12f 如果印12格,結果是對齊右邊\n",pi);
    printf("%12f.10f 印12格,點的右邊10格,但不準\n",pi);
    double pi2=3.14159265358979323842643383279;
    printf("%12.10f 兩倍的浮點數double印點右邊10格\n",pi2);
}
