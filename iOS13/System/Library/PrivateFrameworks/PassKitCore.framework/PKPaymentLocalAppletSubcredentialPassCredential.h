/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentCredential.h>

@class PKPaymentPass, PKAppletSubcredential;

@interface PKPaymentLocalAppletSubcredentialPassCredential : PKPaymentCredential {

	PKPaymentPass* _paymentPass;
	PKAppletSubcredential* _credentialToShare;

}

@property (nonatomic,readonly) PKPaymentPass * paymentPass;                            //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,readonly) PKAppletSubcredential * credentialToShare;              //@synthesize credentialToShare=_credentialToShare - In the implementation block
-(PKPaymentPass *)paymentPass;
-(id)initWithPaymentPass:(id)arg1 credentialToShare:(id)arg2 ;
-(PKAppletSubcredential *)credentialToShare;
@end

