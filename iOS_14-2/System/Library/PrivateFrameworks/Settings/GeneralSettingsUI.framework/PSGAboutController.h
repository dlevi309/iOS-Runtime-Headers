/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <Preferences/PSListController.h>

@interface PSGAboutController : PSListController {

	BOOL _firstViewDidAppear;
	id _effectiveSettingsChangedNotificationObserver;

}

@property (nonatomic,retain) id effectiveSettingsChangedNotificationObserver;              //@synthesize effectiveSettingsChangedNotificationObserver=_effectiveSettingsChangedNotificationObserver - In the implementation block
-(void)willBecomeActive;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willResignActive;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willUnlock;
-(void)setDeviceName:(id)arg1 specifier:(id)arg2 ;
-(id)deviceName:(id)arg1 ;
-(void)setEffectiveSettingsChangedNotificationObserver:(id)arg1 ;
-(id)effectiveSettingsChangedNotificationObserver;
-(void)updateDeviceNameSpecifierIfNeeded;
@end

