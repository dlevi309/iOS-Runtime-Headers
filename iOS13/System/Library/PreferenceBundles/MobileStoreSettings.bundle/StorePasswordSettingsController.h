/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
*/

#import <Preferences/PSListController.h>

@interface StorePasswordSettingsController : PSListController {

	BOOL _ignoreAccountStoreChangedNotification;

}
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)_accountStoreChangedNotification:(id)arg1 ;
-(void)_updateSpecifierValues;
-(void)_setPurchasesPasswordSetting:(id)arg1 ;
-(void)_setFreeDownloadsRequirePasswordEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_freeDownloadsRequirePasswordEnabled;
-(void)_updateAccountPasswordSettings:(id)arg1 ;
@end

