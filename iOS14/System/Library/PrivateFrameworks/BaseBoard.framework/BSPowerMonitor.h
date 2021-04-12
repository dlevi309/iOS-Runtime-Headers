/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
@end

