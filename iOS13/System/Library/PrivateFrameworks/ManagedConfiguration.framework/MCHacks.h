/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@interface MCHacks : NSObject
+(id)sharedHacks;
-(id)quantizedGracePeriodInSeconds:(id)arg1 ;
-(id)quantizedAutoLockInSeconds:(id)arg1 ;
-(BOOL)isSetupBuddyDone;
-(BOOL)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:(id)arg1 ;
-(BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallUnsupportedPayload:(id)arg1 ;
-(BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(id)arg1 ;
-(BOOL)_applyHeuristicsToRestrictions:(id)arg1 forProfile:(id)arg2 outError:(id*)arg3 ;
-(id)permittedAutoLockNumbers;
-(id)_permittedGracePeriodNumbers;
-(id)_selectLargestNumberFromSortedArray:(id)arg1 equalToOrLessThanNumber:(id)arg2 ;
-(BOOL)isJapanSKU;
-(id)profileTrustEvaluators;
-(void)_applyServerSideChangesWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 oldEffectiveUserSettings:(id)arg3 newEffectiveUserSettings:(id)arg4 ;
-(void)_applyImpliedSettingsToSettingsDictionary:(id)arg1 currentSettings:(id)arg2 restrictions:(id)arg3 ;
-(void)_applyHeuristicsToEffectiveUserSettings:(id)arg1 ;
-(void)_applyMandatorySettingsToEffectiveUserSettings:(id)arg1 ;
-(void)_applyHeuristicsToGranfatheredRestrictionPayloadKeys:(id)arg1 ;
-(void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)arg1 ;
-(id)_deviceSpecificDefaultSettings;
-(void)_sendChangeNotificationsBasedOnDefaultsAdditionByDomain:(id)arg1 ;
-(void)_sendChangeNotificationsBasedOnDefaultsRemovalByDomain:(id)arg1 ;
-(BOOL)isGreenTea;
@end

