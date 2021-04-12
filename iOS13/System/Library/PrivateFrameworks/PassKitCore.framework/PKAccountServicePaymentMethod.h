/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKBankAccountInformation, PKCurrencyAmount;

@interface PKAccountServicePaymentMethod : NSObject <NSSecureCoding> {

	BOOL _deviceSupportsPeerPaymentAccountPayment;
	PKBankAccountInformation* _bankAccountInformation;
	PKCurrencyAmount* _peerPaymentBalance;

}

@property (nonatomic,copy) PKBankAccountInformation * bankAccountInformation;              //@synthesize bankAccountInformation=_bankAccountInformation - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * peerPaymentBalance;                          //@synthesize peerPaymentBalance=_peerPaymentBalance - In the implementation block
@property (assign,nonatomic) BOOL deviceSupportsPeerPaymentAccountPayment;                 //@synthesize deviceSupportsPeerPaymentAccountPayment=_deviceSupportsPeerPaymentAccountPayment - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKBankAccountInformation *)bankAccountInformation;
-(PKCurrencyAmount *)peerPaymentBalance;
-(BOOL)deviceSupportsPeerPaymentAccountPayment;
-(void)setPeerPaymentBalance:(PKCurrencyAmount *)arg1 ;
-(void)setBankAccountInformation:(PKBankAccountInformation *)arg1 ;
-(void)setDeviceSupportsPeerPaymentAccountPayment:(BOOL)arg1 ;
-(id)initWithBankAccountInformation:(id)arg1 peerPaymentBalance:(id)arg2 deviceSupportsPeerPaymentAccountPayment:(BOOL)arg3 ;
@end

