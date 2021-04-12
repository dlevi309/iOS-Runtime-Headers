/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)verificationChannels;
-(id)description;
-(void)setVerificationChannels:(NSArray *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
@end

