/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


@protocol OS_xpc_object;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSObject;

@interface _CFPrefsClientContext : NSObject {

	A@ _cfprefsd;
	CFDictionaryRef _suiteCache;
	CFSetRef _observedSources;
	NSObject*<OS_xpc_object> _entitlements;
	CFBooleanRef _sandboxed;
	os_unfair_lock_s _lock;
	char _isPlatformBinary;
	BOOL _impersonatingAnotherProcess;
	BOOL _hasInFlightKVONotifications;
	BOOL _didDeferKVONotifications;
	BOOL _valid;

}
@end

