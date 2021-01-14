/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSSpecifier.h>

@class PSListController, PSSpecifier, CTXPCServiceSubscriptionContext, CTServiceDescriptor, CoreTelephonyClient, PSUICoreTelephonyCallCache, PSUICoreTelephonyRegistrationCache, PSUICoreTelephonyCarrierBundleCache, PSUIDeviceWiFiState, NSArray, PSConfirmationSpecifier, Logger;

@interface PSUIVoiceAndDataSpecifier : PSSpecifier {

	PSListController* _hostController;
	PSSpecifier* _mobileDataGroup;
	CTXPCServiceSubscriptionContext* _subscriptionContext;
	CTServiceDescriptor* _serviceDescriptor;
	CoreTelephonyClient* _ctClient;
	PSListController* _drillDownController;
	PSUICoreTelephonyCallCache* _callCache;
	PSUICoreTelephonyRegistrationCache* _regCache;
	PSUICoreTelephonyCarrierBundleCache* _carrierBundleCache;
	PSUIDeviceWiFiState* _deviceWifiState;
	NSArray* _supportedDataRates;
	BOOL _3GOverrideTo4G;
	BOOL _LTEOverrideTo4G;
	PSConfirmationSpecifier* _warningFor5G;
	BOOL _showLegacyRAT;
	Logger* _logger;

}
-(void)startObservingNotifications;
-(id)initWithName:(id)arg1 identifier:(id)arg2 hostController:(id)arg3 subscriptionContext:(id)arg4 groupSpecifierToUpdateFooterFor:(id)arg5 ;
-(void)setRATMode:(id)arg1 specifier:(id)arg2 ;
-(id)getRATMode;
-(void)setUpInternalState;
-(void)setUpRATSpecifers;
-(id)getLogger;
-(id)initWithName:(id)arg1 identifier:(id)arg2 hostController:(id)arg3 subscriptionContext:(id)arg4 groupSpecifierToUpdateFooterFor:(id)arg5 serviceDescriptor:(id)arg6 coreTelephonyClient:(id)arg7 callCache:(id)arg8 registrationCache:(id)arg9 carrierBundleCache:(id)arg10 deviceWifiState:(id)arg11 ;
-(void)handleMaxDataRateChanged;
-(BOOL)shouldOverrideRATModeForCBKey:(id)arg1 ;
-(void)populateSpecifiers:(id)arg1 values:(id)arg2 ;
-(id)getRATModesFromDataRate:(long long)arg1 ;
-(id)getLocalizedStringsFromDataRate:(long long)arg1 ;
-(id)getSmartDataModeState;
-(BOOL)shouldShow5GUnsupportedWarningForTargetRATMode:(int)arg1 currentRATMode:(int)arg2 ;
-(void)show5GUnsupportedWarning:(id)arg1 ;
-(BOOL)shouldShowCallEndWarningForTargetRATMode:(int)arg1 currentRATMode:(int)arg2 ;
-(void)showCallMayEndWarningForTargetRATMode:(int)arg1 currentRATMode:(int)arg2 ;
-(void)setMaxDataRateForRATMode:(int)arg1 ;
-(void)setSmartDataModeState:(int)arg1 ;
-(void)setUp5GWarningSpecifier:(id)arg1 ;
-(void)accepted5GWarning:(id)arg1 ;
-(void)rejected5GWarning;
-(void)update5GWarningSpecifierTargetRATModeWithUserInput:(id)arg1 ;
-(id)createCallMayEndConfirmationSpecifierForTargetRATMode:(int)arg1 currentRATMode:(int)arg2 ;
-(id)localizedRATModeStringForPrefix:(id)arg1 targetMode:(int)arg2 ;
-(void)acceptedRATSelectionDuringCall:(id)arg1 ;
-(void)canceledRATSelectionDuringCall;
-(int)warningRATModeForTargetMode:(int)arg1 currentMode:(int)arg2 ;
-(id)suffixStringFromRATMode:(int)arg1 ;
-(id)localizedWarningStringForKey:(id)arg1 andRATMode:(int)arg2 ;
-(id)getLocalizedStringFromRATMode:(int)arg1 ;
@end

