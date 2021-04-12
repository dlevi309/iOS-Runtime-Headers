/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;
-(void)performTask;

@end

