/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithSpecifier:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 inTableView:(id)arg2 shouldSetSize:(BOOL)arg3 ;
@end

