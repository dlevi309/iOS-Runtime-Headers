/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol CSAuthenticationManaging <NSObject>
@required
-(void)setPasscodeVisible:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setBiometricAutoUnlockingDisabled:(BOOL)arg1 forReason:(id)arg2;
-(void)attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

