/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/


@protocol DevicePINControllerDelegate <NSObject>
@optional
-(void)devicePINControllerDidDismissPINPane:(id)arg1;
-(void)devicePINController:(id)arg1 didFailToSetPinWithError:(id)arg2;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
-(void)didAcceptSetPIN;
-(void)devicePINController:(id)arg1 didFailToChangePinWithError:(id)arg2;
-(void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
-(void)didAcceptChangedPIN;
-(void)willAcceptEnteredPIN;
-(void)didAcceptEnteredPIN:(id)arg1;
-(void)didAcceptEnteredPIN;
-(void)didAcceptRemovePIN;
-(void)devicePINController:(id)arg1 shouldAcceptPIN:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)showWeakWarningAlertForController:(id)arg1 offerUseAnyway:(BOOL)arg2 withCompletion:(/*^block*/id)arg3;
-(void)willCancelEnteringPIN;
-(void)didCancelEnteringPIN;

@end

