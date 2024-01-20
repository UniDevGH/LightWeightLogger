#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
typedef struct tm time_s;
const char* GetTime()
{
	time_t t;
	time(&t);
	time_s* p;
	p = localtime(&t);
	char* strTime = (char*)malloc(22*sizeof(char));
	strftime(strTime,22 * sizeof(char),"[%Y-%m-%d %H:%M:%S]",p);
	return (const char*)strTime;
}
_declspec(dllexport) void __stdcall Debug(const char* text)
{
	printf("\033[2m%s[DEBUG]: %s\033[0m\n", GetTime(), text);
}
_declspec(dllexport) void __stdcall Info(const char* text)
{
	printf("%s[INFO]: %s\n", GetTime(), text);
}
_declspec(dllexport) void __stdcall Warn(const char* text)
{
	printf("\033[1;33;40m%s[WARN]: %s\033[0m\n", GetTime(), text);
}
_declspec(dllexport) void __stdcall Error(const char* text)
{
	printf("\033[1;31;40m%s[ERROR]: %s\033[0m\n", GetTime(), text);
}
_declspec(dllexport) void __stdcall Fatal(const char* text)
{
	printf("\033[0;31;40m%s[FATAL]: %s\033[0m\n", GetTime(), text);
}