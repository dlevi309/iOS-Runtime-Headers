/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)specifiers;
-(id)_accountStore;
-(id)locationServicesEnabled:(id)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)updateLocationServicesVisibility;
-(void)setCapabilityEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)capabilityEnabled:(id)arg1 ;
@end

