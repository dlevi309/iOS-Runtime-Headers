/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/


@protocol IXClientDelegateProtocol <NSObject>
@required
-(oneway void)_client_coordinatorWithUUID:(id)arg1 didUpdateProgress:(double)arg2 forPhase:(unsigned long long)arg3 overallProgress:(double)arg4;
-(oneway void)_client_coordinatorDidRegisterForObservationWithUUID:(id)arg1;
-(oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)arg1;
-(oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg1;
-(oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg1;
-(oneway void)_client_coordinatorShouldResumeWithUUID:(id)arg1;
-(oneway void)_client_promiseWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
-(oneway void)_client_coordinatorShouldPauseWithUUID:(id)arg1;
-(oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)arg1;
-(oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)arg1;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;

@end

