/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class PKPaymentPass, NSArray;

@interface NPKPaymentProvisioningFlowControllerIssuerVerificationChannelsStepContext : NPKPaymentProvisioningFlowStepContext {

	PKPaymentPass* _paymentPass;
	NSArray* _verificationChannels;

}

@property (nonatomic,retain) PKPaymentPass * paymentPass;                 //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,retain) NSArray * verificationChannels;              //@synthesize verificationChannels=_verificationChannels - In the implementation block
-(id)description;
-(PKPaymentPass *)paymentPass;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(NSArray *)verificationChannels;
-(void)setVerificationChannels:(NSArray *)arg1 ;
@end

