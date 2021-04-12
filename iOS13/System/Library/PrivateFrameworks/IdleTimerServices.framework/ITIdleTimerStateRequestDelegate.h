/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
*/


@protocol ITIdleTimerStateRequestDelegate <NSObject>
@required
-(BOOL)handleIdleEvent:(unsigned long long)arg1 usingConfigurationWithIdentifier:(id)arg2;
-(void)resendIdleTimerAssertions;

@end

