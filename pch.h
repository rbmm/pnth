#define PHNT_MODE PHNT_MODE_USER
#define PHNT_VERSION PHNT_WIN11_22H2

#pragma warning(disable : 4073 4074 4075 4097 4514 4005 4200 4201 4238 4307 4324 4471 4480 4530 4706 5040)

#define DECLSPEC_DEPRECATED_DDK

#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NON_CONFORMING_SWPRINTFS
#define _NO_CRT_STDIO_INLINE
#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 0

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <WinSock2.h>
#include <intrin.h>
#include <windowsx.h>
#undef WIN32_NO_STATUS
#include <ntstatus.h>
#include <winioctl.h>

typedef GUID *PGUID;

#include "phnt.h"
