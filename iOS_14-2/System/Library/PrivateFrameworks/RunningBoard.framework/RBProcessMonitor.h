/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBProcessMonitoring.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol RBStateCaptureManaging, OS_dispatch_queue;
@class RBProcessIndex, RBProcessMap, NSCountedSet, NSMutableSet, NSSet, NSObject, NSString;

@interface RBProcessMonitor : NSObject <RBProcessMonitoring, RBStateCapturing> {

	RBProcessIndex* _processIndex;
	RBProcessMap* _stateMap;
	RBProcessMap* _suppressedState;
	RBProcessMap* _publishedState;
	NSCountedSet* _suppressedIdentities;
	os_unfair_lock_s _observersLock;
	NSMutableSet* _observers;
	id<RBStateCaptureManaging> _stateCaptureManager;
	NSSet* _preventLaunchPredicates;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> monitorSerializationQueue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(id)captureState;
-(void)addObserver:(id)arg1 ;
-(id)preventLaunchPredicates;
-(void)removeStateForProcessIdentity:(id)arg1 ;
-(void)trackStateForProcessIdentity:(id)arg1 ;
-(id)statesMatchingPredicate:(id)arg1 ;
-(NSString *)description;
-(id)initWithStateCaptureManager:(id)arg1 ;
-(NSString *)stateCaptureTitle;
-(id)statesMatchingConfiguration:(id)arg1 ;
-(void)didUpdateProcessStates:(id)arg1 ;
-(void)suppressUpdatesForIdentity:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)unsuppressUpdatesForIdentity:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)monitorSerializationQueue;
-(void)didAddProcess:(id)arg1 withState:(id)arg2 ;
-(void)didResolvePreventLaunchPredicates:(id)arg1 ;
-(void)didRemoveProcess:(id)arg1 withState:(id)arg2 ;
@end

