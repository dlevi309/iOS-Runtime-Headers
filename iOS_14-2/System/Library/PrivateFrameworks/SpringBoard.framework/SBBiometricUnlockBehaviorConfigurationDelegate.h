/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBBiometricUnlockBehaviorConfigurationDelegate <NSObject>
@optional
-(void)fillRestToOpenWithDuration:(double)arg1;
-(void)startRestToOpenCoachingWithCompletion:(/*^block*/id)arg1;
-(void)resetRestToOpen;
-(BOOL)isLockScreenShowingDefaultContent;
-(BOOL)isRestToOpenAvailable;
-(int)lockScreenWakeSource;

@required
-(void)biometricUnlockBehaviorConfigurationDidChange:(id)arg1;

@end

