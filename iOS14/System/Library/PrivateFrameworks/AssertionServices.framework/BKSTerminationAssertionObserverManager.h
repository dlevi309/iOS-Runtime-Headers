/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSMutableSet* _launchPreventedBundleIDs;

}
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)_createMonitor;
-(BOOL)hasTerminationAssertionForBundleID:(id)arg1 ;
-(unsigned long long)efficacyForBundleID:(id)arg1 ;
-(void)dealloc;
@end

