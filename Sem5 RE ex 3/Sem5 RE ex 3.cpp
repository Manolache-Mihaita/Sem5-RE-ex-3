// Sem5 RE ex 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>

int main()
{
	SYSTEMTIME l;
	GetSystemTime(&l);
	if (l.wHour / 10 + 1 == l.wHour % 10) {
		if (l.wHour % 10 + 1 == l.wMinute / 10) {
			if(l.wMinute/10+1==l.wMinute%10){
				MessageBoxA(NULL, "HOORAY", "HOORAY", NULL);
			}
		}
		else l.wMinute / 10 + 1;
	}
	else l.wHour/10 + 1;
    return 0;
}

