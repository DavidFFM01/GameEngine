#pragma once


/*_declspec(dllimport) and _declspec(dllexport) is a windows only thing!*/
#ifdef GE_PLATFORM_WINDOWS	// if platform == windows
	#ifdef GE_BUILD_DLL		// if build == dll
		#define GAMEENGINE_API __declspec(dllexport)
	#else
		#define GAMEENGINE_API __declspec(dllimport)
	#endif
#else
	#error GameEngine only supports Windows!
#endif

