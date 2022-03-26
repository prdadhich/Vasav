#ifdef VS_PLATFORM_WINDOWS
	#ifdef VS_BUILD_DLL
		#define VASAV_API  __declspec(dllexport)  
	#else
		#define VASAV_API __declspec(dllimport)
	#endif
#else
	#error Vasav Engine only supports Windows! 
#endif