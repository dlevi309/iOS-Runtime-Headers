/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PKAppletSubcredential *)credentialToShare;
-(id)initWithPaymentPass:(id)arg1 credentialToShare:(id)arg2 ;
-(PKPaymentPass *)paymentPass;
@end

