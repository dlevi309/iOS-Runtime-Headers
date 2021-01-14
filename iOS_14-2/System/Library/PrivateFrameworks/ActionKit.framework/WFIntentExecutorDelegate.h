/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol WFIntentExecutorDelegate <NSObject>
@optional
-(void)intentExecutorRequestsContinueInApp:(id)arg1;
-(void)intentExecutor:(id)arg1 showConfirmationForSlot:(id)arg2 item:(id)arg3 intent:(id)arg4 completion:(/*^block*/id)arg5;
-(void)intentExecutor:(id)arg1 showConfirmationForInteraction:(id)arg2 confirmationRequired:(BOOL)arg3 authenticationRequired:(BOOL)arg4 completionHandler:(/*^block*/id)arg5;
-(void)intentExecutor:(id)arg1 receivingRideStatusDidReceiveUpdate:(id)arg2;
-(void)intentExecutor:(id)arg1 receivingRideStatusDidReceiveError:(id)arg2;

@end

