/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSListItemsController.h>
#import <libobjc.A.dylib/CoreTelephonyClientCapabilitiesDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class CTXPCServiceSubscriptionContext, PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory, CoreTelephonyClient, CTServiceDescriptor, Logger, NSString;

@interface PSUIVoiceAndDataDrillDownController : PSListItemsController <CoreTelephonyClientCapabilitiesDelegate, UIAlertViewDelegate> {

	CTXPCServiceSubscriptionContext* _subscriptionContext;
	PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory* _switchFactory;
	int _currentRATMode;
	CoreTelephonyClient* _ctClient;
	CTServiceDescriptor* _serviceDescriptor;
	Logger* _logger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setSpecifier:(id)arg1 ;
-(id)specifiers;
-(void)context:(id)arg1 capabilitiesChanged:(id)arg2 ;
-(void)nrDisableStatusChanged:(id)arg1 status:(id)arg2 ;
-(id)init;
-(void)listItemSelected:(id)arg1 ;
-(void)airplaneModeChanged;
-(void)reloadSpecifier:(id)arg1 ;
-(void)startObservingNotifications;
-(id)getLogger;
-(void)handleMaxDataRateChanged;
-(void)updateCurrentRATModeFromSpecifier:(id)arg1 ;
-(void)prepareSpecifiers:(id)arg1 ;
-(void)configureSpecifiers;
-(void)setUpRATModeSpecifierIdentifiers:(id)arg1 ;
-(id)getSwitchSpecifiers;
-(int)RATModeForSpecifier:(id)arg1 ;
-(id)identifierForRATMode:(int)arg1 ;
-(void)configure5GRATModeSpecifiersEnabledState;
-(void)setRATGroupFooterText;
-(BOOL)shouldShowFooterTextWithVoiceExplanation;
-(BOOL)shouldEnable5GRATModeSpecifiers;
-(void)set5GRATModeSpecifierEnabledState:(id)arg1 ;
-(BOOL)shouldShowVoLTESwitch;
-(BOOL)shouldShow5GSASwitch:(id)arg1 ;
-(id)initWithCTClient:(id)arg1 switchFactory:(id)arg2 ;
@end

