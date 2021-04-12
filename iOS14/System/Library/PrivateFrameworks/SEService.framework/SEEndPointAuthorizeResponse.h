/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEncryptedData:(NSData *)arg1 ;
-(void)setEncryptionPublicKeyData:(NSData *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)encryptedData;
-(NSData *)encryptionPublicKeyData;
-(void)setEndPointAttestationData:(NSData *)arg1 ;
-(NSData *)endPointAttestationData;
@end

