/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, CTServiceDescriptor;

@interface PSUICellularDataOptionsController : PSListController {

	PSSpecifier* _parentSpecifier;
	CTServiceDescriptor* _serviceDescriptor;

}
-(id)specifiers;
-(id)init;
-(void)airplaneModeChanged;
-(void)dealloc;
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

