/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerDigitalIssuancePaymentStepContext : NPKPaymentProvisioningFlowStepContext {

	PKPaymentSetupProduct* _product;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
@end

