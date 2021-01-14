/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@interface SSRAESKeyManager : NSObject
+(id)getVoiceTriggerProfilesAESKey;
+(id)generateIfNecessaryVoiceTriggerProfilesAESKey;
+(id)generateIfNecessaryAESKeyWithKeySizeInBits:(unsigned long long)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3 shouldGenerateIfNecessary:(BOOL)arg4 ;
+(id)generateAESKeyWithKeySizeInBits:(unsigned long long)arg1 ;
+(BOOL)storeAESKeyInKeychain:(id)arg1 applicationTag:(id)arg2 keyLabel:(id)arg3 ;
+(id)getAESKeyFromKeychainWithApplicationTag:(id)arg1 keyLabel:(id)arg2 ;
+(BOOL)deleteAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2 ;
+(id)getKeychainAttributesForAESKeyWithApplicationTag:(id)arg1 keyLabel:(id)arg2 ;
@end

