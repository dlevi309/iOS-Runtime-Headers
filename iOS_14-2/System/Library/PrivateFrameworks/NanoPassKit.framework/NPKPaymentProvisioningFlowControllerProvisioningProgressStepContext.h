/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(NSString *)localizedProgressDescription;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setLocalizedProgressDescription:(NSString *)arg1 ;
@end

