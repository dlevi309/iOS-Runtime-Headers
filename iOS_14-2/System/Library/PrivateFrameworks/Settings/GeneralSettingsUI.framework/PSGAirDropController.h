/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)discoveryControllerVisibilityDidChange:(id)arg1 ;
-(void)loadView;
-(void)discoveryControllerSettingsDidChange:(id)arg1 ;
-(void)dealloc;
-(void)_updateSpecifiersFromPreferences;
-(void)_refreshFooterForSpecifier:(id)arg1 ;
@end

