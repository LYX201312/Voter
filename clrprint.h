#ifndef CLR_PRINT_H
#define CLR_PRINT_H

#include <windows.h>
#include <stdio.h>

/*
0 = 黑色       8 = 灰色
1 = 蓝色       9 = 淡蓝色
2 = 绿色       A = 淡绿色
3 = 浅绿色     B = 淡浅绿色
4 = 红色       C = 淡红色
5 = 紫色       D = 淡紫色
6 = 黄色       E = 淡黄色
7 = 白色       F = 亮白色
*/
void clrprint(const char* s, int fgcolor,int bkcolor)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | fgcolor+bkcolor*16);
	printf(s);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7+bkcolor*16);
}


void replacecolor(){
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
}

#endif
