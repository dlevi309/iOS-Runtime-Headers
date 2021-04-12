/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@class SigningPublicKey, NGMPublicPreKey;

@interface NGMPublicDeviceIdentity : NSObject {

	SigningPublicKey* _signingKey;
	NGMPublicPreKey* _prekey;

}

@property (nonatomic,retain) SigningPublicKey * signingKey;              //@synthesize signingKey=_signingKey - In the implementation block
@property (nonatomic,retain) NGMPublicPreKey * prekey;                   //@synthesize prekey=_prekey - In the implementation block
+(id)identityWithIdentityData:(id)arg1 prekeyData:(id)arg2 error:(id*)arg3 ;
-(void)setSigningKey:(SigningPublicKey *)arg1 ;
-(id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 error:(id*)arg3 ;
-(SigningPublicKey *)signingKey;
-(NGMPublicPreKey *)prekey;
-(id)description;
-(BOOL)verifySignature:(id)arg1 formatter:(id)arg2 ;
-(id)identityData;
-(id)prekeyData;
-(id)initWithPrekey:(id)arg1 signingKey:(id)arg2 ;
-(void)setPrekey:(NGMPublicPreKey *)arg1 ;
-(id)sealMessage:(id)arg1 withEncryptedAttributes:(id)arg2 signedByFullIdentity:(id)arg3 error:(id*)arg4 ;
-(BOOL)isValidSigningDestination;
@end

