/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
*/


@interface SOSUtilities : NSObject
+(BOOL)isAutomaticCallCountdownEnabled;
+(void)setLongPressTriggersEmergencySOS:(BOOL)arg1 ;
+(long long)SOSTriggerClickCount;
+(BOOL)isSmallScreen;
+(void)setAllowedToMessageSOSContacts:(BOOL)arg1 ;
+(BOOL)canTriggerSOSWithVolumeLockHold;
+(BOOL)longPressTriggersEmergencySOS;
+(void)setAutomaticCallCountdownEnabled:(BOOL)arg1 ;
+(BOOL)isAllowedToMessageSOSContacts;
+(BOOL)deviceHasHomeButton;
+(long long)currentSOSTriggerMechanism;
+(id)newtonTriggersEmergencySOSNumber;
+(id)_userFriendsDomainAccessor;
+(id)_SOSDomainAccessor;
+(void)setNewtonTriggersEmergencySOSNumber:(id)arg1 ;
+(void)setNewtonTriggersEmergencySOS:(BOOL)arg1 ;
+(id)phoneAssetName;
+(long long)SOSSelectableTriggerMechanismCapability;
+(id)watchAssetNameWithCrownOrientationOnRightSide:(BOOL)arg1 layoutLeftToRight:(BOOL)arg2 ;
+(id)_userSOSDefaults;
+(BOOL)isIndiaSKU;
+(BOOL)isDeviceD2xOrNewer;
+(BOOL)mustAllowThreeClickTrigger;
+(BOOL)_hasAccessibilityConflict;
+(void)setCurrentSOSTriggerMechanism:(long long)arg1 ;
+(long long)SOSTriggerMechanismForClickCount:(long long)arg1 ;
+(long long)defaultSOSTriggerMechanism;
+(BOOL)autoCallRequiresSIM;
+(BOOL)hasActiveSIMForClient:(id)arg1 ;
+(BOOL)hasEmergencyContacts;
+(id)emergencyContactsFooterLinkTitle;
+(BOOL)isActivePairedDeviceTinker;
+(id)automaticDialingSectionDescription;
+(id)holdSideButtonTitleDescription;
+(id)holdSideButtonFooterDescription;
+(id)fallDetectionTitleDescription;
+(id)fallDetectionFooterDescription;
+(BOOL)newtonTriggersEmergencySOS;
+(void)setNewtonTriggersEmergencySOS:(BOOL)arg1 isWristDetectionEnabled:(BOOL)arg2 doesNewtonRequireConfirmation:(BOOL)arg3 presentConfirmationOnViewController:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)getAssetViewForPhoneWithCompletion:(/*^block*/id)arg1 ;
+(id)phoneTriggerAnimationFooterDescription;
+(id)getAssetViewForWatchWithCrownOrientationOnRightSide:(BOOL)arg1 layoutLeftToRight:(BOOL)arg2 tintColor:(id)arg3 ;
+(id)watchTriggerAnimationFooterDescription;
+(long long)mostRecentlyUsedSOSTriggerMechanism;
+(void)setMostRecentlyUsedSOSTriggerMechanism:(long long)arg1 ;
+(BOOL)supportsSOSWithSideButtonSelectableNumberOfClicks;
+(BOOL)canTriggerSOSWithSideButton;
+(id)callWithSideButtonTitleDescription;
+(id)callWithSideButtonFooterDescription;
+(void)setCanTriggerSOSWithSideButton:(BOOL)arg1 presentErrorAlertOnViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)shouldForceDisableAutoCallForClient:(id)arg1 ;
+(id)emergencyContactsSectionDescription;
+(id)emergencyContactsEditDescription;
+(id)emergencyContactsFooterDescription;
+(void)openEmergencyContactsFooterLinkOnViewController:(id)arg1 ;
+(id)autoCallTitleDescription;
+(id)autoCallFooterDescription;
+(id)countdownSoundTitleDescription;
+(id)countdownSoundFooterDescription;
+(BOOL)shouldPlayAudioDuringCountdown;
+(void)setPlayAudioDuringCountdown:(BOOL)arg1 ;
@end

