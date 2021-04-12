/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
*/

#import <WelcomeKitUI/WLWelcomeGroupViewController.h>

@class WLSourceDevicesController, NSString, UILabel, UIButton;

@interface WLPairingViewController : WLWelcomeGroupViewController {

	WLSourceDevicesController* _sourceDevicesController;
	NSString* _pairingCode;
	NSString* _ssid;
	NSString* _wifiPSK;
	UILabel* _pairingCodeView;
	UILabel* _explanationView;
	UIButton* _wifiInfoButton;

}
-(void)dealloc;
-(void)loadView;
-(id)initWithSourceDevicesController:(id)arg1 pairingCode:(id)arg2 wifiPSK:(id)arg3 ssid:(id)arg4 metrics:(id)arg5 ;
-(void)wifiInfoTapped:(id)arg1 ;
-(void)_setStashDataLocally:(BOOL)arg1 ;
-(void)_importLocalContent;
-(void)showDirectConnectionUI;
@end

