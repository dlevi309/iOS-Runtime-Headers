/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STPINListViewController.h>

@class PSSpecifier, NSArray;

@interface STContentPrivacyListController : STPINListViewController {

	PSSpecifier* _enableRestrictionsSwitchSpecifier;

}

@property (copy,readonly) NSArray * storeDetailSpecifiers; 
@property (retain) PSSpecifier * enableRestrictionsSwitchSpecifier;              //@synthesize enableRestrictionsSwitchSpecifier=_enableRestrictionsSwitchSpecifier - In the implementation block
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCoordinator:(id)arg1 ;
-(id)specifiers;
-(BOOL)canBeShownFromSuspendedState;
-(void)setItemSpecifierValue:(id)arg1 specifier:(id)arg2 ;
-(id)getItemSpecifierValue:(id)arg1 ;
-(NSArray *)storeDetailSpecifiers;
-(void)_isLoadedDidChange:(BOOL)arg1 ;
-(void)_viewProfilesAndDeviceManagement:(id)arg1 ;
-(id)_enableRestrictionsSwitchSpecifier;
-(void)setEnableRestrictionsSwitchSpecifier:(PSSpecifier *)arg1 ;
-(id)_topLevelSpecifiers;
-(id)_allowChangesSpecifiers;
-(void)setRestrictionsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getRestrictionsEnabled:(id)arg1 ;
-(void)showiTunesPurchasesRestrictions:(id)arg1 ;
-(id)_topLevelSpecifierWithAction:(SEL)arg1 name:(id)arg2 ;
-(void)showAllowedAppsRestrictions:(id)arg1 ;
-(void)showMediaRestrictions:(id)arg1 ;
-(id)_privacySpecifiers;
-(id)defaultLinkListSpecifierWithConfiguration:(id)arg1 key:(id)arg2 ;
-(id)radioGroupSpecifierWithName:(id)arg1 footerText:(id)arg2 item:(id)arg3 ;
-(id)defaultRadioItemSpecifierWithGroup:(id)arg1 name:(id)arg2 value:(id)arg3 ;
-(id)tccSpecifierWithCapabilityKey:(id)arg1 id:(id)arg2 ;
-(PSSpecifier *)enableRestrictionsSwitchSpecifier;
-(id)defaultLinkListSpecifierWithItem:(id)arg1 ;
-(id)_topLevelExternalSpecifierWithClass:(Class)arg1 name:(id)arg2 idTitle:(id)arg3 ;
@end

