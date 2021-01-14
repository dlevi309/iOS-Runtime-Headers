/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSData;

@interface PKPaymentIssuerProvisioningCertificatesResponse : PKPaymentWebServiceResponse {

	NSArray* _certificates;
	NSData* _nonce;
	NSData* _publicKeyHash;
	NSData* _nonceSignature;

}

@property (nonatomic,copy,readonly) NSArray * certificates;              //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,copy,readonly) NSData * nonce;                      //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy) NSData * publicKeyHash;                       //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,copy) NSData * nonceSignature;                      //@synthesize nonceSignature=_nonceSignature - In the implementation block
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(NSArray *)certificates;
-(id)initWithData:(id)arg1 ;
-(NSData *)nonceSignature;
-(void)setNonceSignature:(NSData *)arg1 ;
-(NSData *)nonce;
@end

