/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSListController.h>

@class NSMutableArray, PSSpecifier, CTServiceDescriptor;

@interface PSUICellularDataOptionsController : PSListController {

	NSMutableArray* _ratSpecifiers;
	PSSpecifier* _parentSpecifier;
	CTServiceDescriptor* _serviceDescriptor;

}
-(id)init;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)specifiers;
-(id)controllerForSpecifier:(id)arg1 ;
-(id)roamingSpecifiers;
-(void)roamingOptionsDidChange;
-(id)initWithParentSpecifier:(id)arg1 ;
-(id)roamingSpecifierforSubscription;
-(id)roamingSettingsDescription:(id)arg1 ;
-(id)getDataRoamingStatus:(id)arg1 ;
-(id)getDataRoamingStatusForService:(id)arg1 ;
-(void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setDataRoamingEnabledForService:(id)arg1 specifier:(id)arg2 ;
-(id)getEUInternetStatus:(id)arg1 ;
-(void)setEUInternetCancelled:(id)arg1 ;
-(void)setEUInternetEnabledConfirmed:(id)arg1 ;
-(void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getCDMARoamingStatus:(id)arg1 ;
@end

