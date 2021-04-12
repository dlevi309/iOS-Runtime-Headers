/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
*/


@protocol DATask <NSObject>
@optional
-(void)setTaskManager:(id)arg1;
-(BOOL)shouldForceNetworking;
-(void)requestCancelTaskWithReason:(int)arg1;
-(void)startModal;
-(BOOL)shouldHoldPowerAssertion;

@required
-(void)finishWithError:(id)arg1;
-(void)performTask;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;

@end

