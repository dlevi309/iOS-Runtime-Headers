/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithRequestContext:(id)arg1 ;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(NSArray *)moreInfoItems;
-(void)setMoreInfoItems:(NSArray *)arg1 ;
@end

