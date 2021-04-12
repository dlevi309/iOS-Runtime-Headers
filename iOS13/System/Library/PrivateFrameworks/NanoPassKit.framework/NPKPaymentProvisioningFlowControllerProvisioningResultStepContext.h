/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(PKPaymentPass *)provisionedPass;
-(void)setProvisionedPass:(PKPaymentPass *)arg1 ;
-(void)setCardAdded:(BOOL)arg1 ;
-(BOOL)cardAdded;
@end

