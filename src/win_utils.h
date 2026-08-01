#ifndef WIN_UTILS_H
#define WIN_UTILS_H

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#ifdef WIN_UTILS_EXPORTS
#define WIN_UTILS_API __declspec(dllexport)
#else
#define WIN_UTILS_API __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif

	struct return_value
	{
		int value;
		char message[256];
	};
	typedef void* WIN_HANDLE;
#define WIN_INVALID_HANDLE_VALUE ((WIN_HANDLE)-1)
	WIN_UTILS_API void MessageBox2(const char* str);
	WIN_UTILS_API void DebugPrint(const char* format, ...);
	WIN_UTILS_API WIN_HANDLE GetWinDiskHandle();
	WIN_UTILS_API void CloseWinDiskDriver(WIN_HANDLE h);
	WIN_UTILS_API char* InitAndGetCommand(struct return_value* ret);

#ifdef __cplusplus
}
#endif

#endif // WIN_UTILS_H