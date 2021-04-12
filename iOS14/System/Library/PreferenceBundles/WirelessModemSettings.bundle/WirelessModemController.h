/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
*/

#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
#import <Preferences/PSListController.h>

@protocol OS_dispatch_queue;
@class UIAlertController, PSSpecifier, NSObject;

@interface WirelessModemController : PSListController {

	WiFiManagerClientRef _wifiClient;
	WiFiDeviceClientRef _wifiDevice;
	BOOL _waitingOnBTPower;
	BOOL _waitingOnWifiPower;
	BOOL _wifiTetheringSupported;
	BOOL _wifiIsWAPI;
	BOOL _showBTPowerPrompt;
	BOOL _familyHotspotEnabled;
	BOOL _didRegisteredNotificationObservers;
	UIAlertController* _powerAlert;
	PSSpecifier* _tetheringGroupSpec;
	PSSpecifier* _tetheringSwitchSpec;
	PSSpecifier* _currentDeviceSpecifier;
	PSSpecifier* _passwordSpec;
	PSSpecifier* _stateFooterSpec;
	PSSpecifier* _setupViewSpec;
	CGRect _lastSuperviewBounds;
	Class _btPairControllerClass;
	Class _btPairSetupClass;
	Class _btSSPRequestClass;
	Class _btAlertClass;
	Class _btClassicDeviceClass;
	id _btSSPAlert;
	id _btAlert;
	long long _shareOption;
	BOOL _personalHotspotModificationDisabled;
	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _showBandPreferenceUI;
	PSSpecifier* _bandPreferenceSpec;

}
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)specifiers;
-(id)init;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(BOOL)_isD5X;
-(void)cleanupPairing;
-(void)_btSSPConfirmationHandler:(id)arg1 ;
-(void)_btSSPNumericComparisonHandler:(id)arg1 ;
-(void)_btSSPPasskeyDisplayHandler:(id)arg1 ;
-(void)alertSheetDismissed:(id)arg1 ;
-(void)showPairingAlert:(id)arg1 ;
-(void)dismissPairingAlert:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)showAlert:(id)arg1 ;
-(void)dealloc;
-(id)usageSpecifier;
-(id)dataUsageString;
-(void)_setWiFiPassword:(id)arg1 ;
-(id)_wiFiPassword;
-(id)wifiPassword:(id)arg1 ;
-(void)setShareOption:(id)arg1 ;
-(id)shareOption;
-(void)terminateSearching:(BOOL)arg1 ;
-(void)_setMISDiscoveryStateEnabled:(BOOL)arg1 effectiveImmediately:(BOOL)arg2 ;
-(void)_unregisterAllNotificationObservers;
-(void)allowWirelessConnections:(BOOL)arg1 ;
-(void)_registerAllNotificationObservers;
-(void)_updateTetheringText:(BOOL)arg1 ;
-(void)_updatePersonalHotspotModificationDisableState;
-(void)setPersonalHotspotModificationDisableState:(BOOL)arg1 ;
-(void)applicationWillResign:(id)arg1 ;
-(void)_misStateChangedHandler:(id)arg1 ;
-(void)_btPowerChangedHandler:(id)arg1 ;
-(void)_btAuthenticationRequestHandler:(id)arg1 ;
-(void)_btDevicePairedHandler:(id)arg1 ;
-(void)_managedConfigurationChangedHandler:(id)arg1 ;
-(void)_wiFiPowerChangedHandler;
-(void)_setMISDiscoveryStateEnabled:(BOOL)arg1 effectiveImmediately:(BOOL)arg2 forceBand:(BOOL)arg3 ;
-(void)_btPinRequestHandler:(id)arg1 ;
-(BOOL)_wiFiPower;
-(void)updateInstructionsSection:(int)arg1 ;
-(void)setInternetTethering:(id)arg1 specifier:(id)arg2 ;
-(id)internetTethering:(id)arg1 ;
-(id)_bandPreferenceSpecLabel;
-(void)setBandPreference:(id)arg1 specifier:(id)arg2 ;
-(id)bandPreference;
-(id)tetheringSwitchSpec;
-(id)passwordSpec;
-(id)stateFooterSpec;
-(id)familyShareSpecifier;
-(id)bandPreferenceSpec;
-(id)_bandPreferenceSpecFooterLabel;
-(id)setupViewSpec;
-(id)shareSpecifier;
@end

