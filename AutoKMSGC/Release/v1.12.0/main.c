#include <stdio.h>
#include <string.h>

int main()
{
    char copyright[3000]="��Ȩ��Ϣ���棩����������Ŀ��ȫ��lmsdscav������ɣ�֮����дMicroGC������Ϊ�Ȳ����ѣ���������Ŀ�������κ������벻Ҫȥ��MicroGC����Ϊ������������Դ���붼û�У����������ܸ���������⡣��������KMS����������lmsdscav�ṩ����MicroGC���޹�ϵ���ش���������������Ŀ��ͷ��β����lmsdscav������ɣ����ں����İ�Ȩ��Ϣ�Լ���Щ���ֲ���MicroGC���ң�lmsdscav���ĵģ����޷��ܾ���ֻ�����������ǣ�ǧ���ס�����������lmsdscav��!!!��lmsdscav��!!!��lmsdscav��!!!��Ҫ���Ի��ˣ�\n";
    char changelog[3000]="���θ����޸���һЩBUG�������һЩ��Ȩ��Ŀ���ְ���ɫ�����ˡ�\n";
    //char copyright[1000]="��ĺܷ���������Ŀ��ͷ��β����lmsdscav���~�߻�~��ɣ����Ƕ�����MicroGC��KMSActive������Ū�þ͸о���ֻռ��һ�������һ�����Ҿ�����̫���ˡ�������MicroGC���Ҹ����֣�Ȼ���������Ϣ�����ˣ���������Ȩ��������һ������Ҳ�Ƿ��ˣ���֪������ô�졣��֪��дע��Ҫ����������������Ծ�д���˵����������Ŀ��lmsdscav������ɣ�������Ŀ��lmsdscav������ɣ�������Ŀ��lmsdscav������ɣ�������Ҫ����MicroGC�������Ŀ�ˣ������Ŀ���ҵģ�\n";
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
    puts("��ӭʹ��WindowsActiver����ȷ���˳����Թ���Ա������С�");
    puts("���س���������������Alt��ͬʱ��F4���رմ˳���...");
    gets(te);
    while(chunk1_01!=1)
    {
        int chunk1_02=NULL;
        //system("cls");
        system("cls");
        printf("1.�Զ�����Windows\n\
2.�ֶ�����Windows\n\
3.����WindowsActiver\n\
4.�鿴Windows�汾\n\
5.�鿴Windows����״̬\n\
6.�˳�WindowsActiver\n\
�������Ӧ������ѡ��ѡ�");
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
                puts("�˵�>�Զ�����Windows>\n\
\n\
ѡ������Ҫ�����Windows����ϵͳ�汾: \
");
                printf("\
1.WindowsXP �����ͺ�\n\
2.Windows7 �����ͺ�\n\
3.Windows10 רҵ��\n\
4.Windows10 ��ҵ��\n\
5.Windows8 רҵ��\n\
6.Windows8 ���۰�Pro\n\
7.Windows10 ��ͥ��\n\
0.���ص����˵�\n\
\n\
�������Ӧ������ѡ��ѡ�\
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
            printf("�˵�>�ֶ�����Windows>\n\
\n\
���������Windows��Ʒ��Կ������İ�װ���ʰ�װ���ϵĻ�ɫ���ɽ��ϣ�������B�ص����˵�:");
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
����Ȩ��\n\
(C)MicroGC-PCs;\n\
(C)MicroGC-Creative;\n\
(C)lmsdscav;\n\
(C)lxStd.Jeskin;\n\
(C)lxStd.ServGr;\n\
(C)lxStd-ProjGr\n\
\n\
����Ȩ��\n\
(C)Copyright 2019-2022 MicroGC-PGC.\n\
(C)Copyright 2019-2022 lxStd Org.\n\
(C)Copyright 2019-2022 lxStd Org._ProjGr FS.\n\
����һ��Ȩ����\n\
\n\
��Ȩ��Ϣ��̬���ӿ�lxStd.lxlib.Copyright.Verb.fmt-By lmsdscav;\n\
\n\
������־��\n\
%s\n\
���س����ص���ҳ��...\n",ver,changelog);
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
    puts("���ڻ���Windows��KMS�������趨...");
    system("slmgr /ckms");
    puts("��ɣ�");
    puts("����ɾ��Windows��Ԥװ��Ʒ��Կ...");
    system("slmgr /upk");
    puts("��ɣ�");
    puts("���ڶ�Windows��KMS���������׼��...");
    system(bun);
    puts("��ɣ�");
    puts("��������Windows��KMS������...");
    system("slmgr /skms lxstd.top");
    puts("��ɣ�");
    puts("���ڼ���Windows����⼤��״̬...");
    system("slmgr /ato");
    puts("Windows�������ִ����ϣ�");
    puts("�밴�س�������...");
    gets(te2);
    return 0;
}