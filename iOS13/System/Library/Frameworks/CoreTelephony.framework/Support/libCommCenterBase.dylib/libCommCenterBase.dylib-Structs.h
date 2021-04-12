/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/libCommCenterBase.dylib
*/

typedef struct object {
	dispatch_object_s fObj;
} object;

typedef struct queue {
	object fObj;
} queue;

typedef struct OSSharedRef<os_log_s> {
	os_log_s fRef;
} OSSharedRef<os_log_s>;

typedef struct OsLogContext {
	char* domain;
	OSSharedRef<os_log_s> handle;
} OsLogContext;

