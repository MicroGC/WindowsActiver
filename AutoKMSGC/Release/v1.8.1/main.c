#include <stdio.h>
#include <string.h>

int main()
{
    char ver[40]="1.8.1";
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
    system("title AutoKMS by lmsdscav");
    system("color 2e");
    system("cls");
    puts("AutoKMS by lmsdscav");
    puts("�����Թ���Ա��Ȩ�޴��˱����������������˳���Ȼ���Ҽ��������ѡ���Թ���Ա���С�");
    puts("�����밴�س�������رմ˴���");
    gets(te);
    while(chunk1_01!=1)
    {
        int chunk1_02=NULL;
        //system("cls");
        system("cls");
        puts("1.�Զ�����Windows\n\
2.�ֶ�����Windows\n\
3.�鿴������Ϣ���汾��\n\
4.�鿴Windowsϵͳ�汾\n\
5.�鿴Windows������Ϣ\n6.�˳�");
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
                puts("��ѡ�����ϵͳ��");
                puts("\
1.WindowsXP �����ͺ�\n\
2.Windows7 �����ͺ�\n\
3.Windows10 רҵ��\n\
4.Windows10 ��ҵ��\n\
5.Windows8 רҵ��\n\
6.Windows8 ���۰�Pro\n\
7.Windows10 ��ͥ��\n\
0.���ص����˵�\
");
                scanf("%d",&chunk2_02);
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
            puts("���������Կ�Ϳ��Լ����ˣ��������ȡ���������B��b(�����ִ�Сд).����������");
            gets(chunk3_01);
            if(strcmpi("b",chunk3_01)==0)
            {
                break;
            }
            else{
                active(chunk3_01);
                break;
            }
            break;
        case 3:
            printf("�汾��: %s\n",ver);
            puts("������lmsdscav����");
            puts("����Ȩ��lmsdscav����");
            puts("Copyright [C] 2019-2022.lxStd Org. All Rights Reserved.");
            puts("��س��ص�������");
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
    char bun[500]="slmgr /ipk ";
    strcat(bun,key);
    system("slmgr /ckms");
    system("slmgr /upk");
    system(bun);
    system("slmgr /skms lxstd.top");
    system("slmgr /ato");
    puts("OK");
    return 0;
}