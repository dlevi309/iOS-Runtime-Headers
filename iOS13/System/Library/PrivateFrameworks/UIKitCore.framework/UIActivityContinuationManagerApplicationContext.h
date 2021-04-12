/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIActivityContinuationManagerApplicationContext
@required
-(void)activityContinuationManager:(id)arg1 displayProgressUI:(id)arg2 dismissalHandler:(/*^block*/id)arg3;
-(void)activityContinuationManager:(id)arg1 configureProgressUIWithError:(id)arg2;
-(void)activityContinuationManager:(id)arg1 hideProgressUIWithCompletion:(/*^block*/id)arg2;
-(id)activityContinuationManagerUserCancelledError:(id)arg1;
-(BOOL)activityContinuationManagerHandleErrorsByConfiguringProgressUI:(id)arg1;
-(BOOL)activityContinuationManager:(id)arg1 willContinueUserActivityWithType:(id)arg2;
-(BOOL)activityContinuationManager:(id)arg1 continueUserActivity:(id)arg2;
-(void)activityContinuationManager:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
-(void)activityContinuationManager:(id)arg1 didUpdateUserActivity:(id)arg2;

@end

