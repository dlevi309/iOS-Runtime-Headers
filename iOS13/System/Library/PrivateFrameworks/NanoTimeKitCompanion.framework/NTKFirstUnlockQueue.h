/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NTKFirstUnlockQueue : NSObject {

	const char* _name;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isSuspended;
	BOOL _isBeforeFirstUnlock;

}
-(void)dealloc;
-(id)initWithName:(const char*)arg1 ;
-(void)dispatch:(/*^block*/id)arg1 ;
-(void)_firstUnlock:(id)arg1 ;
@end

