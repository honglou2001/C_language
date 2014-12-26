#include "stdafx.h"
#include "stdlib.h"

#ifndef VIRTUAL_CLASS
#define VIRTUAL_CLASS

typedef struct _VirtualClass
{
	void (* pVirtual1)(_VirtualClass * );
} VirtualClass;

void VirtualMethod1_VirtualClass(VirtualClass * pThis);

VirtualClass * NewVirtualClass()
{
	// initialize base class
	// alloc for space
	VirtualClass * pResult = (VirtualClass * )malloc(sizeof(VirtualClass));
	// initialize fields
	// initialize virtual methods 
	pResult->pVirtual1 = VirtualMethod1_VirtualClass;
	// return result
	return pResult;
}

void VirtualMethod1_VirtualClass(VirtualClass * pThis) 
{
	printf("VirtualClass.VirtualMethod1()\n");
}

#endif