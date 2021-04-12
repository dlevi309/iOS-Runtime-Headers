/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
*/


@protocol DevicePINControllerDelegate <NSObject>
@optional
-(void)devicePINControllerDidDismissPINPane:(id)arg1;
-(void)didAcceptSetPIN;
-(void)devicePINController:(id)arg1 didFailToSetPinWithError:(id)arg2;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
-(void)devicePINController:(id)arg1 didFailToChangePinWithError:(id)arg2;
-(void)didAcceptChangedPIN;
-(void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
-(void)willAcceptEnteredPIN;
-(void)didAcceptEnteredPIN;
-(void)didAcceptRemovePIN;
-(void)devicePINController:(id)arg1 shouldAcceptPIN:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)willCancelEnteringPIN;
-(void)showWeakWarningAlertForController:(id)arg1 offerUseAnyway:(BOOL)arg2 withCompletion:(/*^block*/id)arg3;
-(void)didCancelEnteringPIN;
-(void)didAcceptEnteredPIN:(id)arg1;

@end

