/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSListController.h>

@class PSSystemPolicyForApp;

@interface PSAppListController : PSListController {

	PSSystemPolicyForApp* _systemPolicy;

}

@property (nonatomic,retain) PSSystemPolicyForApp * systemPolicy;              //@synthesize systemPolicy=_systemPolicy - In the implementation block
+(id)specifiersFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
+(id)onBoardingKitBundleIDDict;
+(id)allowedPrivacyBundles;
+(id)groupSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
+(id)localizedTitlesFromUnlocalizedTitles:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 ;
+(BOOL)canUseOnBoardingKitForPrivacyDisplayForBundleID:(id)arg1 ;
+(id)textFieldSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
+(id)toggleSwitchSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
+(id)sliderSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
+(id)titleValueSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
+(id)multiValueSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
+(id)childPaneSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
+(id)radioGroupSpecifiersFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
-(id)bundle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)_uiValueFromValue:(id)arg1 specifier:(id)arg2 ;
-(id)_valueFromUIValue:(id)arg1 specifier:(id)arg2 ;
-(void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)arg1 ;
-(id)_readToggleSwitchSpecifierValue:(id)arg1 ;
-(void)_setToggleSwitchSpecifierValue:(id)arg1 specifier:(id)arg2 ;
-(void)showPrivacyControllerForSpecifier:(id)arg1 ;
-(void)setSystemPolicy:(PSSystemPolicyForApp *)arg1 ;
-(PSSystemPolicyForApp *)systemPolicy;
@end

