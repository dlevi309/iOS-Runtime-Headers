/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBAssertionManaging, RBDomainAttributeManaging, RBAssertionOriginatorPidPersisting, OS_dispatch_queue;
#import <RunningBoard/RunningBoard-Structs.h>
@class RBProcess, NSMutableSet, NSObject;

@interface RBProcessReconnectManager : NSObject {

	id<RBAssertionManaging> _assertionManager;
	id<RBDomainAttributeManaging> _domainAttributeManager;
	id<RBAssertionOriginatorPidPersisting> _assertionOriginatorPidStore;
	RBProcess* _originatorProcess;
	NSMutableSet* _currentAssertionIdentifiers;
	NSMutableSet* _pendingProcesses;
	NSObject*<OS_dispatch_queue> _queue;
	os_unfair_lock_s _lock;

}
-(id)init;
-(void)didInvalidateAssertion:(id)arg1 ;
-(void)reconnectProcesses:(id)arg1 ;
-(id)initWithAssertionManager:(id)arg1 domainAttributeManager:(id)arg2 assertionOriginatorPidStore:(id)arg3 originatorProcess:(id)arg4 ;
@end

