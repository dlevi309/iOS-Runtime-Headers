/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
*/


@protocol ITIdleTimerServerInterface <NSObject>
@required
-(BOOL)isIdleTimerServiceAvailableWithError:(id*)arg1;
-(void)removeIdleTimerServiceConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3;
-(void)addIdleTimerServiceConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3;

@end

