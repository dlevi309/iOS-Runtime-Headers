/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/


@class NSData;

@interface TPRecoveryKeyPair : NSObject {

	NSData* _signingKeyData;
	NSData* _encryptionKeyData;

}

@property (retain,readonly) NSData * signingKeyData;                 //@synthesize signingKeyData=_signingKeyData - In the implementation block
@property (retain,readonly) NSData * encryptionKeyData;              //@synthesize encryptionKeyData=_encryptionKeyData - In the implementation block
-(id)initWithSigningKeyData:(id)arg1 encryptionKeyData:(id)arg2 ;
-(id)initWithStableInfo:(id)arg1 ;
-(NSData *)signingKeyData;
-(NSData *)encryptionKeyData;
@end

