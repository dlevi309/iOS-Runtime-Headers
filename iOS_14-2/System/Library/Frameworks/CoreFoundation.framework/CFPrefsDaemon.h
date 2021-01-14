/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


@protocol OS_xpc_object;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSObject;

@interface CFPrefsDaemon : NSObject {

	NSObject*<OS_xpc_object> _listener;
	const char* _name;
	int _role;
	CFSetRef _sourceCache;
	CFBagRef _sourceCacheUsageCounts;
	os_unfair_lock_s _sourceCacheLock;
	CFSetRef _deadSourceShmemIndexes;
	SCD_Struct_CF32 _deadManagedSourceBitSet;
	BOOL _testMode;
	AI* _shmem;

}
@end

