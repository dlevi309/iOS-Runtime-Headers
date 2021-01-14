/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)show;
-(void)setDelegate:(id)arg1 ;
-(id)initWithDevice:(id)arg1 andSpecifier:(id)arg2 ;
-(void)setPairingStyle:(int)arg1 andPasskey:(id)arg2 ;
-(int)pairingStyle;
-(void)dealloc;
-(void)dismiss;
-(void)hidPairingResult:(id)arg1 ;
-(id)sanitizeNameForAlert:(id)arg1 ;
-(BOOL)hasLimitedSupportForHID;
-(void)acceptSSP:(long long)arg1 ;
@end

