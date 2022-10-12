#include "data.h"
#include "shell.h"
#include "function.h"

void sh_clear()
{
	kprintf_clear_all();
	curline = -1;
}

void sh_version()
{
	kprintf("project-os-dev-beta-relese [version 0.0.1]", ++curline, 0);
	kprintf("Copyright <c> 2022 Noneinformation01. All rights reserved", ++curline, 0);
}