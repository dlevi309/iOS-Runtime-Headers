/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PKVerificationChannel *)verificationChannel;
-(id)description;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setVerificationChannel:(PKVerificationChannel *)arg1 ;
@end

