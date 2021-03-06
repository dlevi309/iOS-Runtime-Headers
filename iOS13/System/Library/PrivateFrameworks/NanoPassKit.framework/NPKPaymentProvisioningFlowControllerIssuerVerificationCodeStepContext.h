/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class PKPaymentPass, PKVerificationChannel;

@interface NPKPaymentProvisioningFlowControllerIssuerVerificationCodeStepContext : NPKPaymentProvisioningFlowStepContext {

	PKPaymentPass* _paymentPass;
	PKVerificationChannel* _verificationChannel;

}

@property (nonatomic,retain) PKPaymentPass * paymentPass;                              //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,retain) PKVerificationChannel * verificationChannel;              //@synthesize verificationChannel=_verificationChannel - In the implementation block
-(id)description;
-(PKPaymentPass *)paymentPass;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(PKVerificationChannel *)verificationChannel;
-(void)setVerificationChannel:(PKVerificationChannel *)arg1 ;
@end

