/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
*/


@protocol ITIdleTimerServerInterface <NSObject>
@required
-(BOOL)isIdleTimerServiceAvailableWithError:(id*)arg1;
-(void)addIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3;
-(void)removeIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3;

@end

