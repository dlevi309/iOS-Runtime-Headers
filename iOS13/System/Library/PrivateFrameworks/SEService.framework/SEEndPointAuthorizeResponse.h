/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <SEService/SESEndPointAuthorizeAttestation.h>

@class NSData;

@interface SEEndPointAuthorizeResponse : NSObject <NSSecureCoding, SESEndPointAuthorizeAttestation> {

	NSData* _endPointAttestationData;
	NSData* _encryptedData;
	NSData* _encryptionPublicKeyData;

}

@property (nonatomic,retain) NSData * endPointAttestationData;              //@synthesize endPointAttestationData=_endPointAttestationData - In the implementation block
@property (nonatomic,retain) NSData * encryptedData;                        //@synthesize encryptedData=_encryptedData - In the implementation block
@property (nonatomic,retain) NSData * encryptionPublicKeyData;              //@synthesize encryptionPublicKeyData=_encryptionPublicKeyData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)responseWithEndPointAttestationData:(id)arg1 encryptionPublicKeyData:(id)arg2 encryptedData:(id)arg3 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)encryptedData;
-(void)setEncryptedData:(NSData *)arg1 ;
-(NSData *)encryptionPublicKeyData;
-(void)setEncryptionPublicKeyData:(NSData *)arg1 ;
-(void)setEndPointAttestationData:(NSData *)arg1 ;
-(NSData *)endPointAttestationData;
@end

