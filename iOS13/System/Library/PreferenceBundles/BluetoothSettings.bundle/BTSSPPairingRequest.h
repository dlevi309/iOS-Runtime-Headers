/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/


@class BluetoothDevice, PSSpecifier, UIAlertController;

@interface BTSSPPairingRequest : NSObject {

	BluetoothDevice* _device;
	PSSpecifier* _specifier;
	UIAlertController* _alert;
	id _delegate;
	int _pairingStyle;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)show;
-(void)dismiss;
-(void)acceptSSP:(long long)arg1 ;
-(id)initWithDevice:(id)arg1 andSpecifier:(id)arg2 ;
-(void)setPairingStyle:(int)arg1 andPasskey:(id)arg2 ;
-(int)pairingStyle;
-(void)hidPairingResult:(id)arg1 ;
-(id)sanitizeNameForAlert:(id)arg1 ;
-(BOOL)hasLimitedSupportForHID;
@end

