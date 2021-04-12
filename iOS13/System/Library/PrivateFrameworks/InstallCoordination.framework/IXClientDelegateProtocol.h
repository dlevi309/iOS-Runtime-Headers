/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/


@protocol IXClientDelegateProtocol <NSObject>
@required
-(oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)arg1;
-(oneway void)_client_coordinatorShouldResumeWithUUID:(id)arg1;
-(oneway void)_client_coordinatorShouldPauseWithUUID:(id)arg1;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
-(oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)arg1;
-(oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg1;
-(oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg1;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
-(oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)arg1;
-(oneway void)_client_promiseWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;

@end

