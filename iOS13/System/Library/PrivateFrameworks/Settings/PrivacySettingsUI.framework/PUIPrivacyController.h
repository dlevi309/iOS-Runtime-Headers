/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSListControllerTestableSpecifiers.h>

@class PSSpecifier, ACAccountStore, NSString;

@interface PUIPrivacyController : PSListController <PSListControllerTestableSpecifiers> {

	PSSpecifier* _locationSpecifier;
	ACAccountStore* _accountStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)formatSearchEntries:(id)arg1 parent:(id)arg2 ;
+(id)booleanCapabilitiesToTest;
-(id)locationServicesEnabled:(id)arg1 ;
-(id)_accountStore;
-(id)specifiers;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)setCapabilityEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)capabilityEnabled:(id)arg1 ;
-(void)updateLocationServicesVisibility;
@end

