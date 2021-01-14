/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSUICellularRoamingController : PSListController {

	PSSpecifier* _voiceRoamingSpecifier;
	PSSpecifier* _dataRoamingSpecifier;
	PSSpecifier* _cdmaRoamingSpecifier;

}
-(id)specifiers;
-(id)init;
-(void)dealloc;
-(void)roamingOptionsDidChange;
-(id)getDataRoamingStatus:(id)arg1 ;
-(void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getEUInternetStatus:(id)arg1 ;
-(void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getCDMARoamingStatus:(id)arg1 ;
-(void)newCarrierNotification;
-(void)cellularPlanChangedNotification:(id)arg1 ;
-(void)reloadRoamingStatus;
-(id)_voiceRoamingFooterTextWithVoiceRoamingOn:(BOOL)arg1 ;
-(void)setVoiceRoamingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getVoiceRoamingStatus:(id)arg1 ;
-(id)dataRoamingSpecifiers;
-(id)cdmaRoamingSpecifiers;
-(id)getDataRoamingStatusForService:(id)arg1 specifier:(id)arg2 ;
-(void)setDataRoamingEnabledForService:(id)arg1 enabled:(id)arg2 specifier:(id)arg3 ;
@end

