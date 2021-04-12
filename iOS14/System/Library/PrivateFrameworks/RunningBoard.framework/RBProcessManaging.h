/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBProcessManaging <NSObject>
@required
-(void)removeStateForProcessIdentity:(id)arg1;
-(void)executeTerminateRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(id)processForIdentifier:(id)arg1;
-(id)processForIdentity:(id)arg1;
-(void)didUpdateProcessStates:(id)arg1 completion:(/*^block*/id)arg2;
-(id)processForInstance:(id)arg1;
-(void)applySystemState:(id)arg1;
-(id)executeLaunchRequest:(id)arg1 withError:(out id*)arg2;
-(BOOL)isActiveProcess:(id)arg1;
-(id)busyExtensionInstancesFromSet:(id)arg1;
-(id)processesMatchingPredicate:(id)arg1;
-(id)processForAuditToken:(id)arg1;

@end

