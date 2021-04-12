/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class PKPaymentPass, NSArray;

@interface NPKPaymentProvisioningFlowControllerIssuerVerificationFieldsStepContext : NPKPaymentProvisioningFlowStepContext {

	PKPaymentPass* _paymentPass;
	NSArray* _verificationFields;

}

@property (nonatomic,retain) PKPaymentPass * paymentPass;               //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,retain) NSArray * verificationFields;              //@synthesize verificationFields=_verificationFields - In the implementation block
-(id)description;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setVerificationFields:(NSArray *)arg1 ;
-(NSArray *)verificationFields;
@end

