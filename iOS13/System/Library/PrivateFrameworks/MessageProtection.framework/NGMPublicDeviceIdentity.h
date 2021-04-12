/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)identityData;
-(id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 error:(id*)arg3 ;
-(id)prekeyData;
-(SigningPublicKey *)signingKey;
-(BOOL)verifySignature:(id)arg1 formatter:(id)arg2 ;
-(id)initWithPrekey:(id)arg1 signingKey:(id)arg2 ;
-(NGMPublicPreKey *)prekey;
-(void)setSigningKey:(SigningPublicKey *)arg1 ;
-(void)setPrekey:(NGMPublicPreKey *)arg1 ;
-(BOOL)isValidSigningDestination;
@end

