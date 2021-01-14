/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBProcessMonitoring <NSObject>
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> monitorSerializationQueue; 
@required
-(void)addObserver:(id)arg1;
-(id)preventLaunchPredicates;
-(void)removeStateForProcessIdentity:(id)arg1;
-(void)trackStateForProcessIdentity:(id)arg1;
-(id)statesMatchingPredicate:(id)arg1;
-(id)statesMatchingConfiguration:(id)arg1;
-(void)didUpdateProcessStates:(id)arg1;
-(void)suppressUpdatesForIdentity:(id)arg1;
-(void)removeObserver:(id)arg1;
-(void)unsuppressUpdatesForIdentity:(id)arg1;
-(NSObject*<OS_dispatch_queue>)monitorSerializationQueue;
-(void)didAddProcess:(id)arg1 withState:(id)arg2;
-(void)didResolvePreventLaunchPredicates:(id)arg1;
-(void)didRemoveProcess:(id)arg1 withState:(id)arg2;

@end

