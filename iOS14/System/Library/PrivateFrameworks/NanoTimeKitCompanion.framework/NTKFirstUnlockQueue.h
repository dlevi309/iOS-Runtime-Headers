/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol OS_dispatch_queue;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSObject;

@interface NTKFirstUnlockQueue : NSObject {

	const char* _name;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isSuspended;
	BOOL _isBeforeFirstUnlock;
	os_unfair_lock_s _suspendLock;
	int _notifyToken;

}
-(id)initWithName:(const char*)arg1 ;
-(void)_firstUnlock;
-(void)dispatch:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)_suspendThreadBeforeFirstUnlock;
@end

