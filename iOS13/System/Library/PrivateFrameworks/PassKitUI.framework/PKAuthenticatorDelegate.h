/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKAuthenticatorDelegate <NSObject>
@optional
-(id)passcodeViewController;
-(void)authenticatorDidEncounterMatchMiss:(id)arg1;
-(void)authenticatorWillRestartEvaluation:(id)arg1;
-(void)authenticator:(id)arg1 didTransitionToFaceIDState:(long long)arg2;
-(void)authenticator:(id)arg1 didTransitionToCoachingState:(long long)arg2;
-(void)authenticatorDidEncounterFingerOn:(id)arg1;
-(void)authenticatorDidEncounterFingerOff:(id)arg1;
-(void)authenticator:(id)arg1 didRequestUserAction:(long long)arg2;
-(void)authenticatorDidEncounterBiometricLockout:(id)arg1;
-(void)authenticatorDidActivateTouchID:(id)arg1;
-(void)authenticatorDidDeactivateTouchID:(id)arg1 status:(long long)arg2;
-(void)presentPasscodeViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3;
-(void)dismissPasscodeViewController;
-(id)passphraseViewController;
-(void)presentPassphraseViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3;
-(void)dismissPassphraseViewController;

@end

