/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
*/

#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class WiFiSetupView, BluetoothSetupView, USBSetupView;

@interface TetheringSetupView : UIView <PSHeaderFooterView> {

	BOOL _showWifiView;
	WiFiSetupView* _wifiView;
	BluetoothSetupView* _btView;
	USBSetupView* _usbView;

}
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 inTableView:(id)arg2 shouldSetSize:(BOOL)arg3 ;
@end

