/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICKeychainUtilities : NSObject
+(void)removeAccountFromBiometricID:(id)arg1 andRemoveNotes:(BOOL)arg2 ;
+(unsigned long long)getUnsignedIntegerFromKeyChainForIdentifier:(id)arg1 ;
+(void)setUnsignedInteger:(unsigned long long)arg1 forIdentifierInKeychain:(id)arg2 ;
+(BOOL)addDevicePasscodeGuardedItem:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)getItemForIdentifier:(id)arg1 alertTextForAuthentication:(id)arg2 error:(id*)arg3 ;
+(BOOL)getBoolFromKeyChainForIdentifier:(id)arg1 ;
+(id)getItemFromAnyKeychainGroupForIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)policyStateNilData;
+(BOOL)addItem:(id)arg1 forIdentifier:(id)arg2 secAccessControlObject:(id)arg3 itemType:(unsigned long long)arg4 acccountIdentifier:(id)arg5 error:(id*)arg6 ;
+(void)clearKeysAndUpdateDomainPolicyState;
+(void)setBool:(BOOL)arg1 forIdentifierInKeychain:(id)arg2 ;
+(BOOL)touchIDIsEnrolled;
+(BOOL)exceededMaxUpdatePolicyDomainStateAttemptCount;
+(void)bumpUpdatePolicyDomainStateAttemptCount;
+(BOOL)removeAllFromBiometricID;
+(void)resetUpdatePolicyDomainStateAttemptCount;
+(BOOL)biometricIDIsEnrolled:(id*)arg1 checkPolicyDomainState:(BOOL)arg2 ;
+(BOOL)isControlVariableVersionMigratedToCurrent;
+(id)faceIDEnabledKeyForAccountID:(id)arg1 ;
+(id)DEPRECATED_faceIDUserDefaultsDisabled;
+(id)touchIDEnabledKeyForAccountID:(id)arg1 ;
+(id)DEPRECATED_touchIDUserDefaultsDisabled;
+(BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountID:(id)arg1 checkPolicyDomainState:(BOOL)arg2 ;
+(BOOL)faceIDNotesSettingEnabledForAccountID:(id)arg1 ;
+(BOOL)touchIDNotesSettingEnabledForAccountID:(id)arg1 ;
+(BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountIDs:(id)arg1 strict:(BOOL)arg2 checkPolicyDomainState:(BOOL)arg3 ;
+(BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountID:(id)arg1 ;
+(id)secAccessControlObjectWithCreationFlag:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)_queryForIdentifier:(id)arg1 accessGroupIdentifier:(id)arg2 alertTextForAuthentication:(id)arg3 returnData:(BOOL)arg4 ;
+(unsigned long long)unsignedIntegerFromData:(id)arg1 ;
+(void)setTouchIDEnabled:(BOOL)arg1 forAccountID:(id)arg2 ;
+(id)_getItemForIdentifier:(id)arg1 accessGroupIdentifier:(id)arg2 alertTextForAuthentication:(id)arg3 error:(id*)arg4 ;
+(BOOL)_removeItemForIdentifier:(id)arg1 accessGroupIdentifier:(id)arg2 itemType:(unsigned long long)arg3 accountIdentifier:(id)arg4 error:(id*)arg5 ;
+(BOOL)_updateItemForIdentifier:(id)arg1 accessGroupIdentifier:(id)arg2 alertTextForAuthentication:(id)arg3 attributesToUpdate:(id)arg4 error:(id*)arg5 ;
+(BOOL)_removeAllFromBiometricIDAssumeEncryptionKeyTypeIsUsed;
+(void)setFaceIDEnabled:(BOOL)arg1 forAccountID:(id)arg2 ;
+(void)setControlVariableVersionToCurrent;
+(void)moveAllEncryptionKeysToGroupContainerForAccountIdentifiers:(id)arg1 context:(id)arg2 ;
+(void)beginEvaluatePolicyReplyBlock;
+(void)endEvaluatePolicyReplyBlock;
+(BOOL)biometricIDHardwareIsAvailable;
+(BOOL)looselyAuthenticateWithDevicePasscodeWithAlertText:(id)arg1 ;
+(BOOL)biometricIDIsEnrolled;
+(BOOL)faceIDIsEnrolled;
+(BOOL)biometricIDSupportedAndEnabledForSharedPasswordForAccountIDs:(id)arg1 strict:(BOOL)arg2 ;
+(BOOL)touchIDEnabledForSharedPasswordForAccountIDs:(id)arg1 strict:(BOOL)arg2 ;
+(void)migrateFromBioIDDisabledKeysToBioIDEnabledKeys;
+(void)migrateKeysByMarkingWithEncryptionKeyTypeAndMovingIntoGroupContainer;
+(BOOL)removeItemForIdentifier:(id)arg1 error:(id*)arg2 ;
+(BOOL)addEncryptionKeyWithoutGuardianIfBiometricIDSupportedAndEnabled:(id)arg1 forIdentifier:(id)arg2 accountID:(id)arg3 error:(id*)arg4 ;
+(void)removeItemFromBiometricID:(id)arg1 ;
+(void)removeNoteFromBiometricID:(id)arg1 ;
@end

