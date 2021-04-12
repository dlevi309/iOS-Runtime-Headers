/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKAuthenticatorDelegate <NSObject>
@optional
-(void)authenticator:(id)arg1 didTransitionToEvaluationStateWithEvent:(SCD_Struct_PK4)arg2;
-(void)authenticator:(id)arg1 didTransitionToCoachingState:(long long)arg2;
-(void)authenticatorDidActivateTouchID:(id)arg1;
-(void)authenticatorDidDeactivateTouchID:(id)arg1 status:(long long)arg2;
-(id)passcodeViewController;
-(void)presentPasscodeViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3;
-(void)dismissPasscodeViewController;
-(id)passphraseViewController;
-(void)presentPassphraseViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3;
-(void)dismissPassphraseViewController;

@end

