/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
*/


@protocol APUIIntentHandlingViewControllerDelegate <NSObject>
@required
-(void)intentHandlingViewController:(id)arg1 wantsPreferredSize:(CGSize)arg2;
-(void)intentHandlingViewController:(id)arg1 requiresConfirmationWithResponse:(id)arg2 confirmationActionTitle:(id)arg3;
-(void)intentHandlingViewController:(id)arg1 willContinueInAppForIntent:(id)arg2 completion:(/*^block*/id)arg3;
-(void)intentHandlingViewControllerDidFailAuthorizationCheck:(id)arg1;
-(void)intentHandlingViewController:(id)arg1 didComplete:(BOOL)arg2;

@end

