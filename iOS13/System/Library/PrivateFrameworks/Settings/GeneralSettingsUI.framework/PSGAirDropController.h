/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/SFAirDropDiscoveryControllerDelegate.h>

@class SFAirDropDiscoveryController, PSSpecifier, NSString;

@interface PSGAirDropController : PSListController <SFAirDropDiscoveryControllerDelegate> {

	SFAirDropDiscoveryController* _airDropDiscoveryController;
	PSSpecifier* _groupSpecifier;
	PSSpecifier* _offSpecifier;
	PSSpecifier* _contactsOnlySpecifier;
	PSSpecifier* _everyoneSpecifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)discoveryControllerSettingsDidChange:(id)arg1 ;
-(void)discoveryControllerVisibilityDidChange:(id)arg1 ;
-(void)_updateSpecifiersFromPreferences;
-(void)_refreshFooterForSpecifier:(id)arg1 ;
@end

