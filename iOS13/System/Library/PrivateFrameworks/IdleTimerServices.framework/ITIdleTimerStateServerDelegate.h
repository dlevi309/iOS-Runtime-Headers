/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
*/


@protocol ITIdleTimerStateServerDelegate <NSObject>
@required
-(BOOL)isIdleTimerServiceAvailable;
-(void)clientDidDisconnect:(id)arg1;
-(BOOL)addIdleTimerConfiguration:(id)arg1 fromProcess:(id)arg2 forReason:(id)arg3;
-(void)removeIdleTimerConfigurationFromProcess:(id)arg1 forReason:(id)arg2;

@end

