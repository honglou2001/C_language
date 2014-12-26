#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strhtable.h"

#define SUCCESS 1
#define FAILED 0
#define HASH_LEN 5


int hash_init(HashTable **ht) {
	(*ht) = (HashTable *)malloc(sizeof(HashTable));
	if (NULL == ht) {
		exit(1);
	}
	(*ht)->size = 0;
	(*ht)->total = HASH_LEN;
	Bucket *bucket = (Bucket *)malloc(sizeof(Bucket) * HASH_LEN);
	memset(bucket, 0, sizeof(sizeof(Bucket) * HASH_LEN));
	(*ht)->buckets = bucket;
	return SUCCESS;
}

int hash_insert(HashTable *ht, char *key1, void *value1) {
	Bucket *bucket = (Bucket *)malloc(sizeof(Bucket) * HASH_LEN);

	bucket->key = key1;
	bucket->value = value1;
	bucket->next = NULL;


	ht->buckets = bucket;
	ht->size=1;
	ht->total=1;
	return SUCCESS;
}

int MyFun(int x) //这里定义一个MyFun函数
{
	printf("%d\n",x);

	return x+1;
}

//int * funpoint (){
//
//	int *p;
//	*p =1;
//	return p;
//}

void strcpy1(char *s, char *t)
{
	/*int i;
	i = 0;
	while ((s[i] = t[i]) != '\0')
	i++;*/

	int i;
	i = 0;
	while ((*s = *t) != '\0') {
		s++;
		t++;
	}
}

int main()
{
	HashTable *htIn = NULL;
	hash_init(&htIn);

	char key[] = "key";
	char val[] = "value";

	hash_insert(htIn,key,val);


	//hash_insert(htIn,



	int **p;
	int i;

	p = (int **)malloc(4 * sizeof(int *));

	if( NULL == (p))
		return -1;


	for(i = 0; i < 4; i++)
	{
		p[i] = (int *)malloc(5 * sizeof(int));

		if( NULL == (p[i]) )
			return -1;
		*p[i] = i+10;
	}

	p[0][2] = 1;

	for(i = 0; i < 4; i++)
	{
		free(p[i]);
	}

	printf("&p\t\t\t%p\n", &p);
	printf("&p[0]\t\t\t%p\n", &p[0]);
	printf("&p[1]\t\t\t%p\n", &p[1]);
	printf("&p[0][1]\t\t\t%p\n", &p[0][1]);
	printf("&p[0][2]\t\t\t%p\n", &p[0][2]);

	printf("Val—&p[0][2]\t\t\t%p\n", p[0]);

	free(p);

	int k,*p12,**pp;
	k=8;
	p12=&k;
	pp=&p12;
	printf("k=%d\n",k);//*pp=p,**pp=k=8
	printf("*p12=%d\n",*p12);//*pp=p,**pp=k=8
	printf("**pp=%d\n",**pp);//*pp=p,**pp=k=8

	printf("&k=%d\n",&k);//*pp=p,**pp=k=8
	printf("p12=%d\n",p12);//*pp=p,**pp=k=8

	int a[10];
	int *pa;

	pa=&a[0];

	int x=*pa;

	printf("Val—x\t\t\t%p\n", x);

	unsigned char CbMbSendPro[10][100];

	CbMbSendPro[0][0] = '127';

	unsigned char GPRS_FIFO[0XFF]={0};

	GPRS_FIFO[1] = 'rere';

	printf("Val—x\t\t\t%d\n", CbMbSendPro[0][0]);

	char amessage[] = "now this is a array";
	char *smessage  = "now this is a array";

	char toMessage[20]  ;

	strcpy1(toMessage,amessage);

	printf("Val—x\t\t\t%s\n", smessage);


	//printf("**pp=%d\n",**pp);//*pp=p,**pp=k=8

	MyFun(100);
	funpoint = MyFun;
	funpoint(105);

	int max_int = (1<<31)-1;
	unsigned int uint = 6553512; 
	unsigned char uchar = '0';


	printf("The max value of int on 32 machine: %d/n", max_int);
	uchar = ((unsigned char  *)&uint)[2];
	printf("uchar\t\t\t%d\n", uchar);
	printf("((unsigned char  *)&uint)[2]\t\t\t%d\n", sizeof(unsigned char  *));
	printf(" sizeof(void*)\t\t\t%d\n",  sizeof(void*));


}