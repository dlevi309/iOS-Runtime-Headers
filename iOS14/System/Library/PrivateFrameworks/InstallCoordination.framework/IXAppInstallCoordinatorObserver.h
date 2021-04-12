/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/


@protocol IXAppInstallCoordinatorObserver <NSObject>
@optional
-(void)coordinatorDidRegisterForObservation:(id)arg1;
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
-(void)coordinator:(id)arg1 didUpdateProgress:(double)arg2 forPhase:(unsigned long long)arg3 overallProgress:(double)arg4;
-(void)coordinatorDidInstallPlaceholder:(id)arg1 atURL:(id)arg2;
-(void)coordinatorDidCompleteSuccessfully:(id)arg1 forAppAtURL:(id)arg2;

@end

