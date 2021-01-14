/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/


@interface CFSecurityUtils : NSObject
+(id)randomDataOfLength:(unsigned long long)arg1 ;
+(id)decryptData:(id)arg1 withKey:(id)arg2 ;
+(BOOL)verifyScriptData:(id)arg1 hmac:(id)arg2 hmacKey:(id)arg3 iv:(id)arg4 ;
+(id)decryptData:(id)arg1 withKey:(id)arg2 iv:(id)arg3 salt:(id)arg4 ;
+(id)_dataForOperation:(unsigned)arg1 withInputData:(id)arg2 key:(id)arg3 iv:(id)arg4 ;
+(id)deriveKeyForPassword:(id)arg1 withSalt:(id)arg2 ;
+(id)encryptData:(id)arg1 withKey:(id)arg2 iv:(id)arg3 ;
+(id)encryptData:(id)arg1 withPassword:(id)arg2 iv:(id*)arg3 salt:(id*)arg4 ;
+(id)decryptData:(id)arg1 withPassword:(id)arg2 iv:(id)arg3 salt:(id)arg4 ;
+(id)deriveKeyForSaltedKey:(id)arg1 withSalt:(id)arg2 ;
+(id)deriveConsistentKeyForPassword:(id)arg1 ;
@end

