#pragma once

#ifdef WBS_PLATFORM_WINDOWS
	#ifdef WBS_BUILD_DLL
		#define WEBS_API __declspec(dllexport)
	#else
		#define WEBS_API __declspec(dllimport)
	#endif
#else
	#error Only Supports Windows
#endif
