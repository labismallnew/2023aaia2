#include <stdio.h>
int main()
{
    printf("�п�J10�Ӧr��,���঳�Ů�b�̭�:\n");
    char line[30];
    scanf("%s", line);
    printf("�o��r�O:%s�̭����r,���O�O:\n", line);

    for(int i=0; i<11; i++){
        printf("��%d�Ӧr��: %c �������Ʀr�O: %d\n",i,line[i],line[i]);
    }

}

