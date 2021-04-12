/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
*/


@protocol OS_dispatch_queue;
#import <AssertionServices/AssertionServices-Structs.h>
@class RBSProcessMonitor, NSMutableSet, NSObject;

@interface BKSTerminationAssertionObserverManager : NSObject {

	RBSProcessMonitor* _monitor;
	BOOL _monitorIsReady;
	NSMutableSet* _observers;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_createMonitor;
-(BOOL)hasTerminationAssertionForBundleID:(id)arg1 ;
-(unsigned long long)efficacyForBundleID:(id)arg1 ;
@end

