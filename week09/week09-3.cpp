#include <stdio.h>
int main()
{
    printf("請輸入10個字母,不能有空格在裡面:\n");
    char line[30];
    scanf("%s", line);
    printf("這行字是:%s裡面的字,分別是:\n", line);

    for(int i=0; i<11; i++){
        printf("第%d個字母: %c 對應的數字是: %d\n",i,line[i],line[i]);
    }

}

