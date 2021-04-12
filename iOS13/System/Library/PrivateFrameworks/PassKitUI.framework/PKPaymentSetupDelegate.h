/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPaymentSetupDelegate <NSObject>
@optional
-(void)paymentSetupDidShowError:(id)arg1;
-(void)paymentSetupDidShowEligibilityIssue;
-(void)paymentSetupRequestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 withVisibleViewController:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentSetupDidExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 withShouldContinue:(BOOL)arg2 error:(id)arg3;
-(void)paymentSetupRequestPasscodeUpgradeWithVisibleViewController:(id)arg1 completion:(/*^block*/id)arg2;
-(void)paymentSetupDidExitPasscodeUpgradeWithShouldContinue:(BOOL)arg1 error:(id)arg2;

@required
-(void)paymentSetupDidFinish:(id)arg1;

@end

