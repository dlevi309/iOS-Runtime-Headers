/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSSpecifier.h>

@class CTXPCServiceSubscriptionContext, PSListController, PSConfirmationSpecifier, PSUICoreTelephonyCallCache, PSUICoreTelephonyCapabilitiesCache, PSUICoreTelephonyCarrierBundleCache, PSSpecifier;

@interface PSUIVoLTESwitchSpecifier : PSSpecifier {

	CTXPCServiceSubscriptionContext* _subscriptionContext;
	PSListController* _listController;
	PSConfirmationSpecifier* _unsupportedCarrierWarning;
	PSConfirmationSpecifier* _phoneCallWillEndWarning;
	PSUICoreTelephonyCallCache* _callCache;
	PSUICoreTelephonyCapabilitiesCache* _capabilitiesCache;
	PSUICoreTelephonyCarrierBundleCache* _carrierBundleCache;
	PSSpecifier* _parentSpecifier;

}
-(id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 ;
-(id)groupFooterText;
-(void)addSpinnerIfNeededToCell:(id)arg1 ;
-(void)setVoLTEEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getVoLTEEnabled;
-(BOOL)shouldEnableVoLTESwitchCell;
-(id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 callCache:(id)arg3 capabilitiesCache:(id)arg4 carrierBundleCache:(id)arg5 ;
-(BOOL)showWarningsIfNeededForEnableState:(BOOL)arg1 ;
-(void)setVoLTEEnabled:(BOOL)arg1 ;
-(BOOL)showEnableVoLTEWarningsIfNeeded;
-(BOOL)showDisableVoLTEWarningsIfNeeded;
-(BOOL)shouldShowCallCarrierAlert;
-(void)showCallCarrierAlert;
-(BOOL)shouldShowVoLTECanCauseIssuesWarning;
-(void)showVoLTECanCauseIssuesWarning;
-(BOOL)shouldShowCallWillEndWarning;
-(void)showPhoneCallWillEndWarning;
-(void)setUpPhoneCallWillEndWarningSpecifier;
-(void)setVoLTEOff;
-(void)reloadSelfInListController;
-(void)setUpVoLTEWarningSpecifier;
-(void)setVoLTEOn;
-(id)createCallCarrierAlertForContext:(id)arg1 ;
-(BOOL)isVoLTEProvisioning;
@end

