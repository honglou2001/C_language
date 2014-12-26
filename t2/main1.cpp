#include "stdafx.h"
#include "VirtualClass.h"
#include "OverrideClass.h"


void Test03VirtualMethod()
{
	// create a VirtualClass object
    VirtualClass * virtualClassObj = NewVirtualClass();
    virtualClassObj->pVirtual1(virtualClassObj);
    // create a OverrideClass object
    OverrideClass * overrideClassObj = NewOverrideClass();
    overrideClassObj->pBase->pVirtual1(overrideClassObj->pBase);
    // OverrideClass object assigned to VirtualClass object
    VirtualClass * pVirtualClass = NewOverrideClass()->pBase;
    pVirtualClass->pVirtual1(pVirtualClass);
}

int main1(int argc)
{
	Test03VirtualMethod();

	return 0;
}