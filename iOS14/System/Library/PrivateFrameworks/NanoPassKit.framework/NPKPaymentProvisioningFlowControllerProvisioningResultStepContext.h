/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class PKPaymentPass, NSError;

@interface NPKPaymentProvisioningFlowControllerProvisioningResultStepContext : NPKPaymentProvisioningFlowStepContext {

	BOOL _cardAdded;
	PKPaymentPass* _provisionedPass;
	NSError* _error;

}

@property (assign,nonatomic) BOOL cardAdded;                               //@synthesize cardAdded=_cardAdded - In the implementation block
@property (nonatomic,retain) PKPaymentPass * provisionedPass;              //@synthesize provisionedPass=_provisionedPass - In the implementation block
@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(PKPaymentPass *)provisionedPass;
-(id)description;
-(void)setProvisionedPass:(PKPaymentPass *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setCardAdded:(BOOL)arg1 ;
-(BOOL)cardAdded;
@end

