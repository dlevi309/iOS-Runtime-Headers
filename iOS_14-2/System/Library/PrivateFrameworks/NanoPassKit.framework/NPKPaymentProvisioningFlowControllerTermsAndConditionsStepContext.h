/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(id)description;
-(PKPaymentSetupProduct *)product;
-(NSURL *)termsURL;
-(void)setAllowNonSecureHTTP:(BOOL)arg1 ;
-(void)setTermsURL:(NSURL *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(BOOL)allowNonSecureHTTP;
@end

