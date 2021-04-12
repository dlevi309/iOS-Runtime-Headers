/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol OS_dispatch_queue;
#import <BaseBoard/BaseBoard-Structs.h>
@class BSZeroingWeakReference, NSObject, NSHashTable;

@interface BSPowerMonitor : NSObject {

	IONotificationPortRef _notificationPort;
	unsigned _notifier;
	BSZeroingWeakReference* _weakSelfWrapper;
	NSObject*<OS_dispatch_queue> _queue;
	os_unfair_lock_s _observersLock;
	NSHashTable* _lock_observers;
	unsigned _rootDomainConnect;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
@end

