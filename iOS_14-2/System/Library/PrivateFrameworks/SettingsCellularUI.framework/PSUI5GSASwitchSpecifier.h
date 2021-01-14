/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSSpecifier.h>

@class CTXPCServiceSubscriptionContext, PSListController, CoreTelephonyClient, PSConfirmationSpecifier, CTNRStatus, Logger;

@interface PSUI5GSASwitchSpecifier : PSSpecifier {

	CTXPCServiceSubscriptionContext* _subscriptionContext;
	PSListController* _listController;
	CoreTelephonyClient* _ctClient;
	PSConfirmationSpecifier* _enableSAAlert;
	CTNRStatus* _nrStatus;
	Logger* _logger;

}
-(id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 ;
-(BOOL)is5GSASupported;
-(id)getLogger;
-(id)groupFooterText;
-(void)set5GSASwitch:(id)arg1 specifier:(id)arg2 ;
-(id)is5GSAEnabled;
-(void)checkNRStatusAndDisableIfNeeded;
-(void)show5GStandaloneExperimentalAlert;
-(void)disable5GSA;
-(void)setUp5GSAAlertSpecifierIfNeeded;
-(void)enable5GSA;
-(void)refreshSelfInHostController;
-(void)set5GSAEnabled:(BOOL)arg1 ;
@end

