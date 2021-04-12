/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/


@protocol IXAppInstallObserverProtocol <NSObject>
@required
-(oneway void)_client_coordinatorDidInstallPlaceholderWithSeed:(id)arg1;
-(oneway void)_client_coordinatorDidCompleteSuccessfullyWithSeed:(id)arg1;
-(oneway void)_client_coordinatorShouldResumeWithSeed:(id)arg1;
-(oneway void)_client_coordinatorShouldBeginRestoringUserDataWithSeed:(id)arg1;
-(oneway void)_client_coordinatorWithSeed:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
-(oneway void)_client_coordinatorWithSeed:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
-(oneway void)_client_shouldPrioritizeAppWithBundleID:(id)arg1;
-(oneway void)_client_coordinatorShouldPauseWithSeed:(id)arg1;
-(oneway void)_client_coordinatorShouldPrioritizeWithSeed:(id)arg1;

@end

