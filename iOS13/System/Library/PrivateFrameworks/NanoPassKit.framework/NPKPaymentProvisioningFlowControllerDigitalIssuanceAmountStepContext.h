/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerDigitalIssuanceAmountStepContext : NPKPaymentProvisioningFlowStepContext {

	BOOL _allowsReaderModeEntry;
	PKPaymentSetupProduct* _product;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (assign,nonatomic) BOOL allowsReaderModeEntry;                   //@synthesize allowsReaderModeEntry=_allowsReaderModeEntry - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(BOOL)allowsReaderModeEntry;
-(void)setAllowsReaderModeEntry:(BOOL)arg1 ;
@end

