#include "stdafx.h"
#include "stdlib.h"
#include "userinfo.h"
#include "Head.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h> 

void initgr() /* BGI��ʼ�� */
{
    int gdriver, gmode;
    gdriver=VGA;
    gmode=VGAHI;
    initgraph(&gdriver, &gmode, "G:\\C");
	
    bar3d(100, 100, 300, 250, 50, 1); /*��һ������*/
    getch();
    closegraph();
    //return 0;

}

int main()
{

	FILE *fp;
	date tmps,show;
	char ch,exitch;
	char datafile[]="f:\\c_user.txt";
	int i,success=0;


	printf("����������:");
	scanf("%s",tmps.name);

	printf("��������������:");
	for(i=0;i<=5;i++)
		tmps.ps[i]=getch();

	tmps.ps[6]='\0';
	fp=fopen(datafile,"rb");

	initgr();

	if(fp==NULL)
	{
		printf("�ļ�%s�򲻿�\n",datafile);
		//exit(1);
	}
	else
	{		
		date * object=(date * )malloc(sizeof(date));
		date * object2=(date * )malloc(sizeof(date));

		strcpy(object->day,"��qx");
		object->year=2014;
		object->month=6;
		strcpy(object->name,tmps.name);
		strcpy(object->ps,tmps.ps);

		fp= fopen(datafile, "a++");
		if (fp != NULL) {
			fwrite(object, sizeof(date), 1, fp);
			fclose(fp);
		}
		
		fp= fopen(datafile, "rb");
		if (fp != NULL) {

			while(fread(object2,sizeof(date),1,fp)!=0)
			{
				printf("%s/%d/%d\n",object2->day,object2->month,object2->year);
			}
			fclose(fp);
		}
	}

	//printf(tmps.name);
	//printf("����������:");
	//exitch = getche();

	//if(exitch == 'q')
	//{
	//	 exit(0);
	//}

	getchar();
	return 0;
}

