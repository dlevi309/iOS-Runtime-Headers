/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/


@protocol IXAppInstallCoordinatorObserver <NSObject>
@optional
-(void)coordinator:(id)arg1 canceledWithReason:(id)arg2;
-(void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;
-(void)coordinatorDidCompleteSuccessfully:(id)arg1;
-(void)coordinatorShouldPrioritize:(id)arg1;
-(void)coordinatorShouldResume:(id)arg1;
-(void)coordinatorShouldPause:(id)arg1;
-(void)promiseDidBeginFulfillmentWithIdentifier:(unsigned long long)arg1;
-(void)coordinator:(id)arg1 configuredPromisePromiseDidBeginFulfillment:(unsigned long long)arg2;
-(void)coordinator:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
-(void)coordinatorShouldBeginRestoringUserData:(id)arg1;
-(void)coordinatorDidInstallPlaceholder:(id)arg1;

@end

