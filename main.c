#include <stdio.h>

int main()
{
    int qian=0;
    printf("进入钱包管理系统\n");
    {
        while (1)
        {
            printf("1---存钱\n");
            printf("2---取钱\n");
            printf("3---余额\n");
            printf("4---退出\n");
            printf("请选择相应功能\n");
            int code;
            scanf("%d", &code);

            if (code == 1)
            {
                char x;
                int cun;
                printf("请输入存入金额");
                scanf("%d",&cun);
                qian += cun;
                printf("存入成功，回车继续\n");
                scanf("%c", &x);
                scanf("%c", &x);
            }
            if (code == 2)
            {
                char x;
                int qu;
                printf("请输入取出金额");
                scanf("%d",&qu);
                if (qu > qian)
                    printf("余额不足，取钱失败");
                else
                    printf("取钱成功,回车继续");
                qian -= qu;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            if (code == 3)
            {
                char x;
                printf("你的余额为,%d",qian);
                scanf("%c", &x);
                scanf("%c", &x);
            }
            if (code == 4)
            {
                break;
            }
        }
    }
}