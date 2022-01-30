#include <stdio.h>
#include <string.h>

int main()
{
    char copyright[3000]="版权信息（真）：本程序、项目完全由lmsdscav独立完成，之所以写MicroGC，是因为迫不得已，这属于项目合作。任何问题请不要去找MicroGC，因为她连这个程序的源代码都没有，根本不可能给你分析问题。程序乃至KMS服务器均由lmsdscav提供，与MicroGC毫无关系。特此声明：本程序、项目从头到尾都是lmsdscav独立完成，至于后来的版权信息以及有些文字才是MicroGC让我（lmsdscav）改的，我无法拒绝，只好这样，但是，千万记住，这个程序：是lmsdscav的!!!是lmsdscav的!!!是lmsdscav的!!!不要被迷惑了！\n";
    char changelog[3000]="本次更新修复了一些BUG，添加了一些版权条目。又把颜色加上了。\n";
    //char copyright[1000]="真的很烦，整个项目从头到尾都由lmsdscav提出~策划~完成，但是动机是MicroGC的KMSActive，所以弄得就感觉我只占了一半的作用一样，我觉得我太难了。。。（MicroGC叫我改文字，然后把她的信息加上了，整得所有权像是她的一样）我也是服了，不知道该怎么办。我知道写注释要被编译器打掉，所以就写这里。说明：整个项目由lmsdscav独立完成！整个项目由lmsdscav独立完成！整个项目由lmsdscav独立完成！！！不要看着MicroGC问这个项目了，这个项目是我的！\n";
    char ver[40]="v1.12.0";
    char te[3];
    char fx="";
    int chunk1_01=0;
    char Win10ProKey[30]="W269N-WFGWX-YVC9B-4J6C9-T83GX";
    char Win10CopKey[30]="NPPR9-FWDCX-D2C8J-H872K-2YT43";
    char Win8ProKey[30] ="3NHJ7-3WWQK-4RFTH-8FHJY-PRYQH";
    char Win8LsBKey[30] ="X7B3J-GNVTB-QB8D2-JKC48-BWMQH";
    char Win7SupKey[30] ="TFP9Y-VCY3P-VVH3T-8XXCC-MF4YK";
    char WinXPSupKey[30]="MRX3F-47B9T-2487J-KWKMF-RPWBY";
    char WinXPProKey[30]="CQWK3-CCYJY-TQDFV-2HJDR-W3B2M";
    char WinXPSP3ProKey[30]="Q7TG8-MQ3BK-RHXQC-YDXJD-6Q6M3";
    char WinXPNBKey[30] ="CXGDD-GP2B2-RKWWD-HG3HY-VDJ7J";
    char WinXHomeKey[30]="TX9XD-98N7V-6WMQ6-BX7FG-H8Q99";
    system("title MicroGC-Windows Activer");
    system("color 2e");
    system("cls");
    //puts("AutoKMS by lmsdscav");
    puts("欢迎使用WindowsActiver，请确保此程序以管理员身份运行。");
    puts("按回车键继续，否则按下Alt的同时按F4来关闭此程序...");
    gets(te);
    while(chunk1_01!=1)
    {
        int chunk1_02=NULL;
        //system("cls");
        system("cls");
        printf("1.自动激活Windows\n\
2.手动激活Windows\n\
3.关于WindowsActiver\n\
4.查看Windows版本\n\
5.查看Windows激活状态\n\
6.退出WindowsActiver\n\
请输入对应数字来选择选项：");
        scanf("%d",&chunk1_02);
        getchar();
        system("cls");
        switch (chunk1_02)
        {
        case 1:
            puts("AutoKMS Mode::");
            int chunk2_01=0;
            int chunk2_02=NULL;
            while(chunk2_01!=1)
            {
                puts("菜单>自动激活Windows>\n\
\n\
选择你需要激活的Windows操作系统版本: \
");
                printf("\
1.WindowsXP 任意型号\n\
2.Windows7 任意型号\n\
3.Windows10 专业版\n\
4.Windows10 企业版\n\
5.Windows8 专业版\n\
6.Windows8 零售版Pro\n\
7.Windows10 家庭版\n\
0.返回到主菜单\n\
\n\
请输入对应数字来选择选项：\
");
                scanf("%d",&chunk2_02);
                getchar();
                switch (chunk2_02)
                {
                case 1:
                    chunk2_01=1;
                    active(WinXPNBKey);
                    break;
                case 2:
                    chunk2_01=1;
                    active(Win7SupKey);
                    break;
                case 3:
                    chunk2_01=1;
                    active(Win10ProKey);
                    break;
                case 4:
                    chunk2_01=1;
                    active(Win10CopKey);
                    break;
                case 5:
                    chunk2_01=1;
                    active(Win8ProKey);
                    break;
                case 6:
                    chunk2_01=1;
                    active(Win8LsBKey);
                    break;
                case 7:
                    chunk2_01=1;
                    active(WinXHomeKey);
                    break;
                case 0:
                    chunk2_01=1;
                    break;
                default:
                    chunk2_01=0;
                    break;
                }
            }
            break;
        case 2:
            puts("KMS");
            char chunk3_01[50]="";
            printf("菜单>手动激活Windows>\n\
\n\
请输入你的Windows产品密钥（在你的安装介质包装盒上的黄色不干胶上）或输入B回到主菜单:");
            gets(chunk3_01);
            if(strcmpi("b",chunk3_01)==0)
            {
                break;
            }
            else if(strcmp(chunk3_01,"copyrightverbose")==0)
            {
                //getchar();
                printf(copyright);
                gets(te);
                break;
            }
            else{
                active(chunk3_01);
                break;
            }
            break;
        case 3:
            printf("WindowsActiver,%s\n\
\n\
所有权归\n\
(C)MicroGC-PCs;\n\
(C)MicroGC-Creative;\n\
(C)lmsdscav;\n\
(C)lxStd.Jeskin;\n\
(C)lxStd.ServGr;\n\
(C)lxStd-ProjGr\n\
\n\
解释权归\n\
(C)Copyright 2019-2022 MicroGC-PGC.\n\
(C)Copyright 2019-2022 lxStd Org.\n\
(C)Copyright 2019-2022 lxStd Org._ProjGr FS.\n\
保留一切权利。\n\
\n\
版权信息动态链接库lxStd.lxlib.Copyright.Verb.fmt-By lmsdscav;\n\
\n\
更新日志：\n\
%s\n\
按回车键回到主页面...\n",ver,changelog);
            gets(te);
            break;
        case 4:
            system("start winver");
            break;
        case 5:
            system("start slmgr /dlv");
            break;
        case 6:
            chunk1_01=1;
            break;
        default:
            break;
        }
    }
    return 0;
}
void active(char key[80])
{
    //printf("%s",key);
    //puts(*key);
    char te2[3];
    char bun[500]="slmgr /ipk ";
    strcat(bun,key);
    puts("正在回零Windows的KMS服务器设定...");
    system("slmgr /ckms");
    puts("完成！");
    puts("正在删除Windows的预装产品密钥...");
    system("slmgr /upk");
    puts("完成！");
    puts("正在对Windows的KMS激活程序做准备...");
    system(bun);
    puts("完成！");
    puts("正在设置Windows的KMS激活域...");
    system("slmgr /skms lxstd.top");
    puts("完成！");
    puts("正在激活Windows并检测激活状态...");
    system("slmgr /ato");
    puts("Windows激活程序执行完毕！");
    puts("请按回车键继续...");
    gets(te2);
    return 0;
}