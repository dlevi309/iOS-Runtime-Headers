/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


#import <MessageProtection/MessageProtection-Structs.h>
@class LegacySigningKeyPublic, SecKeyRSAPublic;

@interface SecMessageLegacyPublicIdentity : NSObject {

	LegacySigningKeyPublic* _signingKey;
	SecKeyRSAPublic* _encryptionKey;

}

@property (nonatomic,readonly) LegacySigningKeyPublic * signingKey;              //@synthesize signingKey=_signingKey - In the implementation block
@property (nonatomic,readonly) SecKeyRSAPublic * encryptionKey;                  //@synthesize encryptionKey=_encryptionKey - In the implementation block
+(id)identityWithIdentityData:(id)arg1 error:(id*)arg2 ;
-(SecKeyRSAPublic *)encryptionKey;
-(id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 error:(id*)arg3 ;
-(BOOL)verifySignature:(id)arg1 ofData:(id)arg2 ;
-(LegacySigningKeyPublic *)signingKey;
-(SecMPPublicIdentity*)asRef;
-(id)publicIDCanonicalHash;
-(id)initWithEncryptionKey:(id)arg1 signingKey:(id)arg2 ;
-(id)publicIDHash;
-(unsigned long long)encryptionSize;
-(id)identityData;
-(id)encryptData:(id)arg1 ;
@end

