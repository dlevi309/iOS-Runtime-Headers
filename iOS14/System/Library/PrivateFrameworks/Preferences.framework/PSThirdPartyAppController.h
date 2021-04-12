/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSSpecifierController.h>
#import <libobjc.A.dylib/PSSystemPolicyForAppDelegate.h>

@class PSSystemPolicyForApp, NSString;

@interface PSThirdPartyAppController : PSSpecifierController <PSSystemPolicyForAppDelegate> {

	PSSystemPolicyForApp* _systemPolicy;
	PSSystemPolicyForApp* _appPolicy;

}

@property (nonatomic,retain) PSSystemPolicyForApp * appPolicy;                 //@synthesize appPolicy=_appPolicy - In the implementation block
@property (nonatomic,retain) PSSystemPolicyForApp * systemPolicy;              //@synthesize systemPolicy=_systemPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bundle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(PSSystemPolicyForApp *)appPolicy;
-(id)_uiValueFromValue:(id)arg1 specifier:(id)arg2 ;
-(id)_valueFromUIValue:(id)arg1 specifier:(id)arg2 ;
-(void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)arg1 ;
-(void)setAppPolicy:(PSSystemPolicyForApp *)arg1 ;
-(id)_readToggleSwitchSpecifierValue:(id)arg1 ;
-(void)_setToggleSwitchSpecifierValue:(id)arg1 specifier:(id)arg2 ;
-(void)showPrivacyControllerForSpecifier:(id)arg1 ;
-(void)setSystemPolicy:(PSSystemPolicyForApp *)arg1 ;
-(PSSystemPolicyForApp *)systemPolicy;
-(id)loadSpecifiers;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
@end

