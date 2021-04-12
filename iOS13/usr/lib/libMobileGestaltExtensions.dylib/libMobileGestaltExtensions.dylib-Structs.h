/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libMobileGestaltExtensions.dylib
*/


@class NSMutableArray, MGFileWatcher, MCProfileConnection, CADisplay;

typedef struct __CFNumber* CFNumberRef;

typedef struct __CFData* CFDataRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct timespec {
	long long tv_sec;
	long long tv_nsec;
} timespec;

typedef struct _NSZone* NSZoneRef;

typedef union {
	NSMutableArray* _darwinTokens;
	__SCPreferences _scPrefs;
	MGFileWatcher* _fileWatcher;
	MCProfileConnection* _mcConnection;
	CADisplay* _mainDisplay;
	void _swBehaviorHandle;
	__CTServerConnection _ctCenter;
	__SCDynamicStore _scdynaStore;
} SCD_Union_MG6;

