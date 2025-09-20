#pragma once

#ifdef DARK_PLATFORM_WINDOWS
	#ifdef DARK_BUILD_DLL
		#define DARK_API __declspec(dllexport)
	#else
		#define DARK_API __declspec(dllimport)
	#endif
#else
	#error Dark only supports Windows!
#endif