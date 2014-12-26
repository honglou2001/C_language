#include "stdafx.h"
#include "stdlib.h"
#include "VirtualClass.h"

#ifndef OVERRIDE_CLASS
#define OVERRIDE_CLASS

typedef struct _OverrideClass
{
	VirtualClass * pBase;
} OverrideClass;

void VirtualMethod1_OverrideClass(VirtualClass * pThis);

OverrideClass * NewOverrideClass()
{
	// alloc for space
	OverrideClass * pResult = (OverrideClass * )malloc(sizeof(OverrideClass));
	// initialize base class
	pResult->pBase = NewVirtualClass();
	// initialize fields
	// initialize virtual methods 
	pResult->pBase->pVirtual1 = VirtualMethod1_OverrideClass;
	// return result
	return pResult;
}

void VirtualMethod1_OverrideClass(VirtualClass * pThis) 
{
	printf("OverrideClass.VirtualMethod1()\n");
}

#endif