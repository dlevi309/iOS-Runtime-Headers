/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class PKPaymentSetupProduct, NSString;

@interface NPKPaymentProvisioningFlowControllerProvisioningProgressStepContext : NPKPaymentProvisioningFlowStepContext {

	PKPaymentSetupProduct* _product;
	NSString* _localizedProgressDescription;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;                      //@synthesize product=_product - In the implementation block
@property (nonatomic,retain) NSString * localizedProgressDescription;              //@synthesize localizedProgressDescription=_localizedProgressDescription - In the implementation block
-(id)initWithRequestContext:(id)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(NSString *)localizedProgressDescription;
-(void)setLocalizedProgressDescription:(NSString *)arg1 ;
@end

