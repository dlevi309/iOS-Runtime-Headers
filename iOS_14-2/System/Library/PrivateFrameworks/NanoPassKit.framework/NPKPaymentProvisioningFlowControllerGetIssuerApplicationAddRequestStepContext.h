/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray, NSData;

@interface NPKPaymentProvisioningFlowControllerGetIssuerApplicationAddRequestStepContext : NPKPaymentProvisioningFlowStepContext {

	NSArray* _certificates;
	NSData* _nonce;
	NSData* _nonceSignature;

}

@property (nonatomic,retain) NSArray * certificates;               //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,retain) NSData * nonce;                       //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,retain) NSData * nonceSignature;              //@synthesize nonceSignature=_nonceSignature - In the implementation block
-(void)setNonce:(NSData *)arg1 ;
-(NSArray *)certificates;
-(id)description;
-(NSData *)nonceSignature;
-(void)setNonceSignature:(NSData *)arg1 ;
-(void)setCertificates:(NSArray *)arg1 ;
-(NSData *)nonce;
-(id)initWithRequestContext:(id)arg1 ;
@end

