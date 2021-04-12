/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSArray *)certificates;
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setCertificates:(NSArray *)arg1 ;
-(NSData *)nonceSignature;
-(void)setNonceSignature:(NSData *)arg1 ;
@end

