/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
*/


@protocol ITIdleTimerStateServerDelegate <NSObject>
@required
-(BOOL)isIdleTimerServiceAvailable;
-(void)clientDidDisconnect:(id)arg1;
-(void)removeIdleTimerConfigurationFromProcess:(id)arg1 forReason:(id)arg2;
-(BOOL)addIdleTimerConfiguration:(id)arg1 fromProcess:(id)arg2 forReason:(id)arg3;

@end

