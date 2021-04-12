/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
*/


@protocol AFUISiriSetupViewControllerDelegate <NSObject>
@optional
-(void)updateHomeGestureSharingForSiriSetup:(BOOL)arg1;

@required
-(void)openSiriRequestedBySiriSetupViewController:(id)arg1;
-(void)dismissSiriSetupViewController:(id)arg1;
-(void)disableSiriActivationRequestedBySiriSetupViewController:(id)arg1;
-(BOOL)siriSetupViewController:(id)arg1 openURL:(id)arg2;

@end

