/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBProcessMonitoring.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol RBStateCaptureManaging, OS_dispatch_queue;
@class RBProcessIndex, RBProcessMap, NSCountedSet, NSMutableSet, NSObject, NSString;

@interface RBProcessMonitor : NSObject <RBProcessMonitoring, RBStateCapturing> {

	RBProcessIndex* _processIndex;
	RBProcessMap* _stateMap;
	RBProcessMap* _suppressedState;
	RBProcessMap* _publishedState;
	NSCountedSet* _suppressedIdentities;
	os_unfair_lock_s _observersLock;
	NSMutableSet* _observers;
	id<RBStateCaptureManaging> _stateCaptureManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> monitorSerializationQueue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
+(id)_clientStateForServerState:(id)arg1 process:(id)arg2 ;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)captureState;
-(void)didUpdateProcessStates:(id)arg1 ;
-(void)removeStateForProcessIdentity:(id)arg1 ;
-(NSString *)stateCaptureTitle;
-(void)suppressUpdatesForIdentity:(id)arg1 ;
-(void)unsuppressUpdatesForIdentity:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)monitorSerializationQueue;
-(id)statesMatchingPredicate:(id)arg1 ;
-(void)didRemoveProcess:(id)arg1 withState:(id)arg2 ;
-(void)_queue_updateServerState:(id)arg1 forProcess:(id)arg2 force:(BOOL)arg3 ;
-(void)_queue_suppressUpdatesForIdentity:(id)arg1 ;
-(void)_queue_unsuppressUpdatesForIdentity:(id)arg1 ;
-(void)_queue_publishState:(id)arg1 forIdentity:(id)arg2 ;
-(id)statesMatchingConfiguration:(id)arg1 ;
-(void)didAddProcess:(id)arg1 withState:(id)arg2 ;
-(void)trackStateForProcessIdentity:(id)arg1 ;
-(id)initWithStateCaptureManager:(id)arg1 ;
@end

