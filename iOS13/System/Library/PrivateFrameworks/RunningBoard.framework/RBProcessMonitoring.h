/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBProcessMonitoring <NSObject>
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> monitorSerializationQueue; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(void)didUpdateProcessStates:(id)arg1;
-(void)removeStateForProcessIdentity:(id)arg1;
-(void)suppressUpdatesForIdentity:(id)arg1;
-(void)unsuppressUpdatesForIdentity:(id)arg1;
-(NSObject*<OS_dispatch_queue>)monitorSerializationQueue;
-(id)statesMatchingPredicate:(id)arg1;
-(void)didRemoveProcess:(id)arg1 withState:(id)arg2;
-(id)statesMatchingConfiguration:(id)arg1;
-(void)didAddProcess:(id)arg1 withState:(id)arg2;
-(void)trackStateForProcessIdentity:(id)arg1;

@end

