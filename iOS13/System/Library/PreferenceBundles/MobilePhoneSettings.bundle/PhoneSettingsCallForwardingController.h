/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
*/

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <MobilePhoneSettings/PhoneSettingsListController.h>

@class NSArray, PhoneSettingsTelephony;

@interface PhoneSettingsCallForwardingController : PhoneSettingsListController {

	NSArray* unconditionalSpecifiers;
	NSArray* customSpecifiers;
	NSArray* switcherSpecifiers;
	int _interfaceState;
	int _previousState;
	BOOL _isSettingForwardingStateFromStoredNumber;
	int groupResponseRegister;
	PhoneSettingsTelephony* _telephonySettings;

}

@property (nonatomic,readonly) PhoneSettingsTelephony * telephonySettings;              //@synthesize telephonySettings=_telephonySettings - In the implementation block
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(id)specifiers;
-(void)reloadSpecifiers;
-(id)callForwardingEnabled:(id)arg1 ;
-(id)callForwardingNumber:(id)arg1 ;
-(PhoneSettingsTelephony *)telephonySettings;
-(void)updateCellStates;
-(void)_callForwardingChanged:(id)arg1 ;
-(BOOL)_shouldDisplayExtendedInterface;
-(void)_callForwardingForMobileBusyChanged:(id)arg1 ;
-(void)_callForwardingForNoReplyChanged:(id)arg1 ;
-(void)_callForwardingForNotReachableChanged:(id)arg1 ;
-(void)reRequestCallForwardingStateIfNecessary;
-(id)_createUnconditionalForwardingSpecifiers;
-(id)_createSwitcherSpecifiers;
-(id)_createCustomForwardingSpecifiers;
-(void)unconditionalForwardingAction:(id)arg1 ;
-(void)customForwardingAction:(id)arg1 ;
-(void)setCallForwardingNumber:(id)arg1 specifier:(id)arg2 ;
-(id)_getCustomForwardingLabelTranslationFromDictionary:(id)arg1 reasonKey:(id)arg2 defaultValue:(id)arg3 ;
-(id)_labelForForwardingReason:(CFStringRef)arg1 ;
-(void)setCallForwardingNumberForNoReply:(id)arg1 specifier:(id)arg2 ;
-(id)callForwardingNumberForNoReply:(id)arg1 ;
-(void)setCallForwardingNumberForMobileBusy:(id)arg1 specifier:(id)arg2 ;
-(id)callForwardingNumberForMobileBusy:(id)arg1 ;
-(void)setCallForwardingNumberForNotReachable:(id)arg1 specifier:(id)arg2 ;
-(id)callForwardingNumberForNotReachable:(id)arg1 ;
-(id)_cellforSpecifierID:(id)arg1 ;
-(void)_setMasterSwitchEnabled:(BOOL)arg1 ;
-(void)_setUnconditionalCellEnabled:(BOOL)arg1 ;
-(void)_requestTransitionToUnconditionalState;
-(void)_requestTransitionToCustomState;
-(void)_setMasterSwitchLoading:(BOOL)arg1 ;
-(void)_setNumberFieldsEnabled:(BOOL)arg1 ;
-(void)_setSwitcherFieldsEnabled:(BOOL)arg1 ;
-(void)_transitionToUnconditionalForwardingState;
-(void)_transitionToCustomForwardingState;
-(void)_transitionToSimpleForwardingState;
-(void)_popupCallForwardingErrorAlertView;
-(void)_requestTransitionToOffState;
-(void)_transitionToOffState;
-(void)_failTransitionToOff;
-(void)_failTransitionToCustom;
-(void)_discoveryStateDone;
-(void)_failTransitionToUnconditional;
-(id)indexPathForSpecifierIdentifier:(id)arg1 ;
-(void)setCallForwardingEnabled:(id)arg1 specifier:(id)arg2 ;
@end

