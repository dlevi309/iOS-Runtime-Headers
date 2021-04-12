/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/HMHomeManagerDelegate.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>

@class PSSpecifier, HMHomeManager, NSString;

@interface PSUIPasscodeLockController : PSListController <HMHomeManagerDelegate, DevicePINControllerDelegate> {

	int _policyDictatedMaxFailedAttempts;
	PSSpecifier* _voiceDialSpecifier;
	PSSpecifier* _voiceDialGroupSpecifier;
	BOOL _canUnlockWatch;
	HMHomeManager* _homeManager;

}

@property (assign,nonatomic) BOOL canUnlockWatch;                      //@synthesize canUnlockWatch=_canUnlockWatch - In the implementation block
@property (nonatomic,retain) HMHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)passcodeGracePeriod;
-(void)suspend;
-(void)showPINSheet:(id)arg1 ;
-(id)specifiers;
-(BOOL)isPasscodeSet;
-(id)init;
-(void)profileNotification:(id)arg1 ;
-(void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(BOOL)arg2 ;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2 ;
-(void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2 ;
-(void)didAcceptRemovePIN;
-(void)devicePINController:(id)arg1 shouldAcceptPIN:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)showWeakWarningAlertForController:(id)arg1 offerUseAnyway:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(HMHomeManager *)homeManager;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)isWalletRestricted;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(id)wallet:(id)arg1 ;
-(void)dealloc;
-(BOOL)showReplyWithMessage;
-(void)updateGracePeriodSpecifier;
-(void)setCanUnlockWatch:(BOOL)arg1 ;
-(long long)fingerprintCount;
-(void)_showDeleteSavedFingerprintsAlert;
-(void)presentAppleIDAuthenticationController;
-(void)_updateGracePeriodForSpecifier:(id)arg1 ;
-(void)_localizeGracePeriodTitlesForSpecifier:(id)arg1 ;
-(BOOL)shouldShowVoiceDial;
-(BOOL)isVoiceDialRestricted;
-(void)updateVoiceDialGroup;
-(void)_setWipeEnabled:(BOOL)arg1 ;
-(void)_didUpdatePasscode:(id)arg1 ;
-(void)showKeychainAlert;
-(void)setEnabledInLockScreen:(id)arg1 specifier:(id)arg2 ;
-(id)enabledInLockScreen:(id)arg1 ;
-(void)setEnabledInLockScreenForUSB:(id)arg1 specifier:(id)arg2 ;
-(id)enabledInLockScreenForUSB:(id)arg1 ;
-(BOOL)isAssistantRestricted;
-(id)_makeWipeDeviceGroupFooter;
-(void)disablePasscodeRequiredSpecifiers:(id)arg1 ;
-(void)togglePasscode:(id)arg1 ;
-(id)graceValue:(id)arg1 ;
-(void)setGraceValue:(id)arg1 specifier:(id)arg2 ;
-(id)voiceDial:(id)arg1 ;
-(void)setVoiceDial:(id)arg1 specifier:(id)arg2 ;
-(id)assistantUnderLockEnabled:(id)arg1 ;
-(void)setAssistantUnderLockEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)homeControlAccessAllowedWhenLocked:(id)arg1 ;
-(void)setHomeControlAccessAllowedWhenLocked:(id)arg1 specifier:(id)arg2 ;
-(void)setWallet:(id)arg1 specifier:(id)arg2 ;
-(id)wipeEnabled:(id)arg1 ;
-(void)setWipeEnabled:(id)arg1 specifier:(id)arg2 ;
-(BOOL)canUnlockWatch;
@end

