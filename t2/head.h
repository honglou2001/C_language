#include "dos.h"
#include "stdio.h"
#include "stdlib.h"
#include "Conio.h"
#include "graphics.h"

#define  closegr closegraph
#define  DOWN     20480
#define  UP       18432
#define  LEFT     19200
#define  RIGHT    19712
#define  DEL      21248
#define  INSERT   20992
#define  TAB      3849
#define  ENTER    7181
#define  ESC      283
#define  Alt_X    11520
#define  OK       1
#define  ERROR    0
#define  YES      5497
#define  NO       12654
#define  MAXVEX   100  /* ��󶥵�����Ӧ���û����� */

union REGS regs;                               /* ���汻��긲�ǵ�������ɫ*/
int   up[16][16],down[16][16],mouse_draw[16][16],pixel_save[16][16];
int   Mskind=0+1*2+15*4+2*64;; /* ����Ϊ��״,�����Χ���ڲ���ɫ*/
