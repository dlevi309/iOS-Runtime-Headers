/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerMoreInformationStepContext : NPKPaymentProvisioningFlowStepContext {

	NSArray* _moreInfoItems;
	PKPaymentPass* _paymentPass;

}

@property (nonatomic,retain) NSArray * moreInfoItems;                  //@synthesize moreInfoItems=_moreInfoItems - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;              //@synthesize paymentPass=_paymentPass - In the implementation block
-(id)description;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(NSArray *)moreInfoItems;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setMoreInfoItems:(NSArray *)arg1 ;
@end

