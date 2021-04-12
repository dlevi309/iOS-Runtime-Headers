/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
*/

#import <Preferences/PSListController.h>

@interface StorePasswordSettingsController : PSListController {

	BOOL _ignoreAccountStoreChangedNotification;

}
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_accountStoreChangedNotification:(id)arg1 ;
-(void)dealloc;
-(void)_updateSpecifierValues;
-(void)_setPurchasesPasswordSetting:(id)arg1 ;
-(void)_setFreeDownloadsRequirePasswordEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_freeDownloadsRequirePasswordEnabled;
-(void)_updateAccountPasswordSettings:(id)arg1 ;
@end

