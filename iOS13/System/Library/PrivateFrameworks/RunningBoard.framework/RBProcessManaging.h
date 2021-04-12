/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBProcessManaging <NSObject>
@required
-(id)processForIdentity:(id)arg1;
-(void)removeStateForProcessIdentity:(id)arg1;
-(void)applySystemState:(id)arg1;
-(id)processForIdentifier:(id)arg1;
-(id)processesMatchingPredicate:(id)arg1;
-(BOOL)isActiveProcess:(id)arg1;
-(id)executeLaunchRequest:(id)arg1 withError:(out id*)arg2;
-(BOOL)executeTerminateRequest:(id)arg1 withError:(out id*)arg2;
-(id)processForInstance:(id)arg1;
-(id)busyExtensionInstancesFromSet:(id)arg1;
-(id)processForAuditToken:(id)arg1;
-(void)didUpdateProcessStates:(id)arg1 completion:(/*^block*/id)arg2;

@end

