/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

