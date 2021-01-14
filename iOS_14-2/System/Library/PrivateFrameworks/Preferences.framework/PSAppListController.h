/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSSystemPolicyForAppDelegate.h>

@class PSSystemPolicyForApp, NSString;

@interface PSAppListController : PSListController <PSSystemPolicyForAppDelegate> {

	PSSystemPolicyForApp* _systemPolicy;
	PSSystemPolicyForApp* _appPolicy;

}

@property (nonatomic,retain) PSSystemPolicyForApp * appPolicy;                 //@synthesize appPolicy=_appPolicy - In the implementation block
@property (nonatomic,retain) PSSystemPolicyForApp * systemPolicy;              //@synthesize systemPolicy=_systemPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)titleValueSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
+(id)specifiersFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
+(id)textFieldSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
+(id)onBoardingKitBundleIDDict;
+(id)allowedPrivacyBundles;
+(id)childPaneSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
+(id)groupSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
+(id)toggleSwitchSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
+(id)multiValueSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
+(id)radioGroupSpecifiersFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
+(BOOL)canUseOnBoardingKitForPrivacyDisplayForBundleID:(id)arg1 ;
+(id)_typeErrorStringForKeyWithName:(id)arg1 expectedType:(Class)arg2 actualType:(Class)arg3 ;
+(id)sliderSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4 ;
+(id)localizedTitlesFromUnlocalizedTitles:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 ;
-(id)bundle;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
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
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
@end

