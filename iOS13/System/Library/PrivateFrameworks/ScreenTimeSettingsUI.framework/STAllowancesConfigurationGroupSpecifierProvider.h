/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>
#import <libobjc.A.dylib/STAlwaysAllowListControllerDelegate.h>
#import <libobjc.A.dylib/STDeviceBedtimeListControllerDelegate.h>

@class PSSpecifier, NSString;

@interface STAllowancesConfigurationGroupSpecifierProvider : STRootGroupSpecifierProvider <STAlwaysAllowListControllerDelegate, STDeviceBedtimeListControllerDelegate> {

	PSSpecifier* _deviceBedtimeSpecifier;
	PSSpecifier* _appLimitsSpecifier;
	PSSpecifier* _alwaysAllowedSpecifier;
	PSSpecifier* _communicationLimitsSpecifier;
	PSSpecifier* _contentPrivacySpecifier;

}

@property (nonatomic,retain) PSSpecifier * deviceBedtimeSpecifier;                    //@synthesize deviceBedtimeSpecifier=_deviceBedtimeSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * appLimitsSpecifier;                        //@synthesize appLimitsSpecifier=_appLimitsSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * alwaysAllowedSpecifier;                    //@synthesize alwaysAllowedSpecifier=_alwaysAllowedSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * communicationLimitsSpecifier;              //@synthesize communicationLimitsSpecifier=_communicationLimitsSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * contentPrivacySpecifier;                   //@synthesize contentPrivacySpecifier=_contentPrivacySpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCoordinator:(id)arg1 ;
-(void)showDeviceBedtimeViewController:(id)arg1 ;
-(void)setDeviceBedtimeSpecifier:(PSSpecifier *)arg1 ;
-(id)appLimitsDetailText;
-(void)showAppLimitsViewController:(id)arg1 ;
-(void)setAppLimitsSpecifier:(PSSpecifier *)arg1 ;
-(id)_communicationLimitsDetailText;
-(void)_showCommunicationLimitsViewController:(id)arg1 ;
-(void)setCommunicationLimitsSpecifier:(PSSpecifier *)arg1 ;
-(id)alwaysAllowedDetailText;
-(void)showAlwaysAllowedViewController:(id)arg1 ;
-(void)setAlwaysAllowedSpecifier:(PSSpecifier *)arg1 ;
-(id)contentPrivacyDetailText;
-(void)showContentPrivacyViewController:(id)arg1 ;
-(void)setContentPrivacySpecifier:(PSSpecifier *)arg1 ;
-(void)_communicationLimitsDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)_deviceBedtimeDidChange:(id)arg1 ;
-(void)_userTypeDidChange:(unsigned long long)arg1 ;
-(void)_isRemoteUserDidChangeFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(PSSpecifier *)deviceBedtimeSpecifier;
-(id)_subtitleTextForDeviceBedtime:(id)arg1 ;
-(BOOL)showDemoModeAlertIfNeeded;
-(PSSpecifier *)alwaysAllowedSpecifier;
-(PSSpecifier *)communicationLimitsSpecifier;
-(void)_resetCommunicationLimitsDetailText;
-(void)alwaysAllowListController:(id)arg1 didFinishEditingAlwaysAllowList:(id)arg2 ;
-(void)bedtimeListController:(id)arg1 didFinishEditingBedtime:(id)arg2 ;
-(PSSpecifier *)appLimitsSpecifier;
-(PSSpecifier *)contentPrivacySpecifier;
@end

