#pragma once

#ifdef TIGHT_PLATFORM_WINDOWS
	#ifdef TIGHT_BUILD_DLL
		#define TIGHT_API __declspec(dllexport)
	#else
		#define TIGHT_API __declspec(dllimport)
	#endif // TIGHT_BUILD_DLL
#else
	#error Tight only support Windows!
#endif // TIGHT_PLATFORM_WINDOWS
