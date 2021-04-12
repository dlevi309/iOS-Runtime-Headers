/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface CSAESKeyManager : NSObject
+(id)generateIfNecessaryVoiceTriggerProfilesAESKey;
+(id)getVoiceTriggerProfilesAESKey;
+(id)generateIfNecessaryAESKeyWithKeySizeInBits:(unsigned long long)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3 shouldGenerateIfNecessary:(BOOL)arg4 ;
+(id)generateAESKeyWithKeySizeInBits:(unsigned long long)arg1 ;
+(BOOL)storeAESKeyInKeychain:(id)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3 ;
+(id)getAESKeyFromKeychainWithApplicationTag:(id)arg1 keyLabel:(id)arg2 ;
+(BOOL)deleteAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2 ;
+(id)getKeychainAttributesForAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2 ;
@end

