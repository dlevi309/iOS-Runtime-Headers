/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/


@protocol RBSServiceLocalProtocol;
#import <RunningBoardServices/RunningBoardServices-Structs.h>
@class RBSAssertion, RBSProcessMonitor, RBSTerminateContext, RBSProcessPredicate, NSHashTable;

@interface RBSTerminationAssertion : NSObject {

	os_unfair_lock_s _lock;
	RBSAssertion* _assertion;
	RBSProcessMonitor* _monitor;
	RBSTerminateContext* _terminateContext;
	RBSProcessPredicate* _predicate;
	id<RBSServiceLocalProtocol> _service;
	unsigned long long _state;
	BOOL _processExists;
	NSHashTable* _observers;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) BOOL processExists; 
-(void)addObserver:(id)arg1 ;
-(BOOL)acquireWithError:(out id*)arg1 ;
-(id)initWithTarget:(id)arg1 context:(id)arg2 ;
-(BOOL)processExists;
-(id)initWithPredicate:(id)arg1 context:(id)arg2 ;
-(BOOL)isValid;
-(BOOL)invalidateWithError:(out id*)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)invalidate;
-(id)initWithPredicate:(id)arg1 context:(id)arg2 service:(id)arg3 ;
@end

