/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class PKPaymentSetupProduct, NSURL;

@interface NPKPaymentProvisioningFlowControllerTermsAndConditionsStepContext : NPKPaymentProvisioningFlowStepContext {

	BOOL _allowNonSecureHTTP;
	PKPaymentSetupProduct* _product;
	NSURL* _termsURL;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (nonatomic,retain) NSURL * termsURL;                             //@synthesize termsURL=_termsURL - In the implementation block
@property (assign,nonatomic) BOOL allowNonSecureHTTP;                      //@synthesize allowNonSecureHTTP=_allowNonSecureHTTP - In the implementation block
-(id)description;
-(id)initWithRequestContext:(id)arg1 ;
-(BOOL)allowNonSecureHTTP;
-(void)setAllowNonSecureHTTP:(BOOL)arg1 ;
-(NSURL *)termsURL;
-(void)setTermsURL:(NSURL *)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(PKPaymentSetupProduct *)product;
@end

