/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSSpecifierController.h>

@class PSSystemPolicyForApp;

@interface PSThirdPartyAppController : PSSpecifierController {

	PSSystemPolicyForApp* _systemPolicy;

}

@property (nonatomic,retain) PSSystemPolicyForApp * systemPolicy;              //@synthesize systemPolicy=_systemPolicy - In the implementation block
-(id)bundle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)_uiValueFromValue:(id)arg1 specifier:(id)arg2 ;
-(id)_valueFromUIValue:(id)arg1 specifier:(id)arg2 ;
-(void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)arg1 ;
-(id)_readToggleSwitchSpecifierValue:(id)arg1 ;
-(void)_setToggleSwitchSpecifierValue:(id)arg1 specifier:(id)arg2 ;
-(void)showPrivacyControllerForSpecifier:(id)arg1 ;
-(void)setSystemPolicy:(PSSystemPolicyForApp *)arg1 ;
-(PSSystemPolicyForApp *)systemPolicy;
-(id)loadSpecifiers;
@end

