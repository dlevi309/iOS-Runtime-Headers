/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FindMyDeviceUI.framework/FindMyDeviceUI
*/

#import <Preferences/PSListController.h>

@protocol SPSettingsConfigurating;
@class ACAccount, PSSpecifier, UIProgressHUD, NSObject;

@interface FMDUIFMIPiCloudSettingsViewController : PSListController {

	BOOL _firstTimeSetup;
	BOOL _togglingFMIPSwitch;
	BOOL _activityInProgress;
	BOOL _offlineFindingEnabled;
	BOOL _offlineFindingDisabledDueToNotHSA2;
	ACAccount* _account;
	PSSpecifier* _fmipSpecifier;
	PSSpecifier* _sendLastLocationSpecifier;
	UIProgressHUD* _hud;
	NSObject*<SPSettingsConfigurating> _spSession;

}

@property (nonatomic,retain) PSSpecifier * fmipSpecifier;                               //@synthesize fmipSpecifier=_fmipSpecifier - In the implementation block
@property (assign,nonatomic) BOOL togglingFMIPSwitch;                                   //@synthesize togglingFMIPSwitch=_togglingFMIPSwitch - In the implementation block
@property (nonatomic,retain) PSSpecifier * sendLastLocationSpecifier;                   //@synthesize sendLastLocationSpecifier=_sendLastLocationSpecifier - In the implementation block
@property (nonatomic,retain) UIProgressHUD * hud;                                       //@synthesize hud=_hud - In the implementation block
@property (assign,nonatomic) BOOL activityInProgress;                                   //@synthesize activityInProgress=_activityInProgress - In the implementation block
@property (nonatomic,retain) NSObject*<SPSettingsConfigurating> spSession;              //@synthesize spSession=_spSession - In the implementation block
@property (assign,nonatomic) BOOL offlineFindingEnabled;                                //@synthesize offlineFindingEnabled=_offlineFindingEnabled - In the implementation block
@property (assign,nonatomic) BOOL offlineFindingDisabledDueToNotHSA2;                   //@synthesize offlineFindingDisabledDueToNotHSA2=_offlineFindingDisabledDueToNotHSA2 - In the implementation block
@property (assign,nonatomic) BOOL firstTimeSetup;                                       //@synthesize firstTimeSetup=_firstTimeSetup - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                       //@synthesize account=_account - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(UIProgressHUD *)hud;
-(id)specifiers;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setHud:(UIProgressHUD *)arg1 ;
-(id)_clientInfoHeader;
-(void)hideActivityInProgressUI;
-(void)showActivityInProgressUIWithMessage:(id)arg1 ;
-(void)hideActivityInProgressUIWithDelay:(double)arg1 ;
-(BOOL)isShowingActivityInProgressUI;
-(void)setFirstTimeSetup:(BOOL)arg1 ;
-(id)_userAgentHeader;
-(void)setSpSession:(NSObject*<SPSettingsConfigurating>)arg1 ;
-(NSObject*<SPSettingsConfigurating>)spSession;
-(void)setOfflineFindingEnabled:(BOOL)arg1 ;
-(void)setOfflineFindingDisabledDueToNotHSA2:(BOOL)arg1 ;
-(void)_reloadSpecifiersOnMainQueue;
-(void)_loadSearchPartyConfiguration;
-(void)_fmipSettingsCacheDidUpdate:(id)arg1 ;
-(id)_groupSpecifierForFMIP;
-(id)_specifierForFMIP;
-(void)setFmipSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)fmipSpecifier;
-(BOOL)firstTimeSetup;
-(id)_fmipSwitchOnForSpecifier:(id)arg1 ;
-(id)_groupSpecifierForOfflineFinding;
-(id)_specifierForOfflineFinding;
-(id)_specifierForSendLastLocation;
-(void)setSendLastLocationSpecifier:(PSSpecifier *)arg1 ;
-(id)_groupSpecifierForSendLastLocation;
-(PSSpecifier *)sendLastLocationSpecifier;
-(void)_setFMIPSwitchOn:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_setOfflineFindingSwitchOn:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_offlineFindingSwitchOnForSpecifier:(id)arg1 ;
-(void)presentHSA2UpgradeForOfflineFinding;
-(void)setSearchPartyConfigurationActive:(BOOL)arg1 ;
-(void)_setSendLastLocationSwitchOn:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_sendLastLocationSwitchOnForSpecifier:(id)arg1 ;
-(void)_showFMIPPrivacyPage;
-(BOOL)togglingFMIPSwitch;
-(void)setTogglingFMIPSwitch:(BOOL)arg1 ;
-(void)_enableFMIP;
-(void)_disableFMIP;
-(BOOL)offlineFindingEnabled;
-(BOOL)offlineFindingDisabledDueToNotHSA2;
-(void)_showOfflineFindingAlertWhenTurningOff;
-(void)showHSA2UpgradeAlert;
-(BOOL)FMWLANEnabled;
-(void)_showOfflineFindingLearnMorePage;
-(BOOL)activityInProgress;
-(void)setActivityInProgress:(BOOL)arg1 ;
@end

