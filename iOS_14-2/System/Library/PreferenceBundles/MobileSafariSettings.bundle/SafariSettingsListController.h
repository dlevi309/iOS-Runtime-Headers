/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <MobileSafariSettings/MobileSafariSettings-Structs.h>
#import <Preferences/PSListController.h>

@interface SafariSettingsListController : PSListController
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3 ;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3 ;
-(void)reloadSpecifierAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)postDistributedNotificationNamed:(CFStringRef)arg1 ;
-(void)updateRestrictionsForSpecifiers:(id)arg1 ;
-(id)safariDefaultsValueForKey:(id)arg1 ;
-(void)setSafariDefaultsValue:(id)arg1 forKey:(id)arg2 ;
-(void)synchronizeSafariDefaults;
-(BOOL)_evaluateBoolSelectorWithPropertyKey:(id)arg1 specifier:(id)arg2 defaultValue:(BOOL)arg3 ;
-(BOOL)userInterfaceIdiomIsPhone:(id)arg1 ;
-(BOOL)userInterfaceIdiomIsPad:(id)arg1 ;
@end

