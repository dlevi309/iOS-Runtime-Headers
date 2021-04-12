/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
*/

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <MobilePhoneSettings/PhoneSettingsListController.h>

@class NSString, NSArray, PhoneSettingsTelephony, VMVoicemailManager, TPSetPINViewController;

@interface PhoneSettingsController : PhoneSettingsListController {

	NSString* _cachedMobileIdentity;
	MGNotificationTokenStructRef _capabilitiesChangedNotificationToken;
	NSArray* _allSpecifiers;
	PhoneSettingsTelephony* _telephonySettings;
	VMVoicemailManager* _voicemailManager;
	TPSetPINViewController* _setPINViewController;

}

@property (nonatomic,retain) VMVoicemailManager * voicemailManager;                      //@synthesize voicemailManager=_voicemailManager - In the implementation block
@property (nonatomic,retain) TPSetPINViewController * setPINViewController;              //@synthesize setPINViewController=_setPINViewController - In the implementation block
@property (retain) NSArray * allSpecifiers;                                              //@synthesize allSpecifiers=_allSpecifiers - In the implementation block
@property (nonatomic,readonly) PhoneSettingsTelephony * telephonySettings;               //@synthesize telephonySettings=_telephonySettings - In the implementation block
-(id)init;
-(void)dealloc;
-(void)handleURL:(id)arg1 ;
-(id)specifiers;
-(NSArray *)allSpecifiers;
-(void)setAllSpecifiers:(NSArray *)arg1 ;
-(void)setPINViewControllerFinished:(id)arg1 success:(BOOL)arg2 oldPIN:(id)arg3 newPIN:(id)arg4 ;
-(VMVoicemailManager *)voicemailManager;
-(void)setVoicemailManager:(VMVoicemailManager *)arg1 ;
-(void)_updateCachedMobileIdentity;
-(PhoneSettingsTelephony *)telephonySettings;
-(void)_settingsResumed;
-(void)_updateSpecifiers:(BOOL)arg1 ;
-(void)_simChanged:(id)arg1 ;
-(BOOL)_shouldShowSpecifier:(id)arg1 ;
-(void)changeVoicemailPassword:(id)arg1 ;
-(TPSetPINViewController *)setPINViewController;
-(void)setSetPINViewController:(TPSetPINViewController *)arg1 ;
-(BOOL)_specifier:(id)arg1 isEqualToSpecifier:(id)arg2 ;
-(void)simRemoved;
-(BOOL)showRelayCalls;
-(void)setRelayCallsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getRelayCallsEnabled:(id)arg1 ;
-(int)showCallGroup;
-(BOOL)showVoicemailPassword;
-(int)showSIMSpacer;
@end

