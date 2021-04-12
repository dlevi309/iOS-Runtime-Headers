/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class NSData, NSObject;

@interface HDLegacyClinicalCredentialManager : NSObject {

	NSData* _cachedCredentialKey;
	NSObject*<OS_dispatch_queue> _credentialKeyQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> credentialKeyQueue;              //@synthesize credentialKeyQueue=_credentialKeyQueue - In the implementation block
@property (nonatomic,copy) NSData * cachedCredentialKey; 
-(id)init;
-(id)decryptTokenData:(id)arg1 error:(out id*)arg2 ;
-(BOOL)deleteCredentialKeyFromKeychainWithError:(id*)arg1 ;
-(id)_encryptToken:(id)arg1 error:(out id*)arg2 ;
-(id)_tokenDataFromToken:(id)arg1 error:(out id*)arg2 ;
-(id)_generateInitializationVectorWithError:(out id*)arg1 ;
-(id)_encryptTokenData:(id)arg1 initializationVector:(id)arg2 operation:(unsigned)arg3 error:(out id*)arg4 ;
-(id)_encryptedTokenDataWithInitializationVector:(id)arg1 payload:(id)arg2 ;
-(id)_decryptTokenData:(id)arg1 error:(out id*)arg2 ;
-(id)_initializationVectorFromEncryptedTokenData:(id)arg1 error:(out id*)arg2 ;
-(id)_payloadFromEncryptedTokenData:(id)arg1 error:(out id*)arg2 ;
-(id)_tokenFromTokenData:(id)arg1 error:(out id*)arg2 ;
-(id)_credentialKeyWithError:(out id*)arg1 ;
-(BOOL)_shouldProceedWithEncryptionAfterStatus:(int)arg1 error:(out id*)arg2 ;
-(BOOL)_assignCredentialManagerError:(out id*)arg1 code:(long long)arg2 format:(id)arg3 ;
-(BOOL)_encryptedTokenDataHasInitializationVector:(id)arg1 error:(out id*)arg2 ;
-(id)_tokenByStrippingPaddingFromToken:(id)arg1 ;
-(BOOL)_assignCredentialManagerError:(out id*)arg1 code:(long long)arg2 description:(id)arg3 ;
-(BOOL)_validateToken:(id)arg1 error:(out id*)arg2 ;
-(id)_credentialKeyFingerprintWithError:(out id*)arg1 ;
-(NSObject*<OS_dispatch_queue>)credentialKeyQueue;
-(id)_retrieveCredentialKeyFromKeychainWithError:(out id*)arg1 ;
-(id)_credentialKeyBaseAttributes;
-(id)_credentialKeyQuery;
-(id)_attributesForCredentialKey:(id)arg1 ;
-(BOOL)_storeCredentialKeyInKeychain:(id)arg1 error:(out id*)arg2 ;
-(id)_generateRandomBytesOfLength:(long long)arg1 error:(out id*)arg2 ;
-(id)encryptToken:(id)arg1 error:(out id*)arg2 ;
-(id)credentialKeyFingerprintWithError:(out id*)arg1 ;
-(id)unitTesting_retrieveCredentialKeyFromKeychainWithError:(id*)arg1 ;
-(BOOL)unitTesting_storeCredentialKeyInKeychain:(id)arg1 error:(id*)arg2 ;
-(id)_generateCredentialKeyWithError:(out id*)arg1 ;
-(NSData *)cachedCredentialKey;
-(void)setCachedCredentialKey:(NSData *)arg1 ;
-(BOOL)_error:(id)arg1 isCredentialManagerErrorWithCode:(long long)arg2 ;
@end
