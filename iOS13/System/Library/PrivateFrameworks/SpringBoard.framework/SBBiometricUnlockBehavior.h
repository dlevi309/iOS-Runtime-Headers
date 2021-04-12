/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBBiometricUnlockBehavior <BSDescriptionProviding>
@property (assign,nonatomic,__weak) id<SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate; 
@required
-(void)handleBiometricEvent:(unsigned long long)arg1;
-(id<SBBiometricUnlockBehaviorDelegate>)biometricUnlockBehaviorDelegate;
-(void)setBiometricUnlockBehaviorDelegate:(id)arg1;

@end

