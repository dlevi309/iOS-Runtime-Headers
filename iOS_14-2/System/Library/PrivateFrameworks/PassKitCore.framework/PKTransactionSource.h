/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPeerPaymentAccount, PKPaymentPass, NSSet;

@interface PKTransactionSource : NSObject <NSSecureCoding> {

	unsigned long long _type;
	PKPeerPaymentAccount* _peerPaymentAccount;
	PKPaymentPass* _paymentPass;

}

@property (nonatomic,readonly) unsigned long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSSet * transactionSourceIdentifiers; 
@property (nonatomic,readonly) PKPeerPaymentAccount * peerPaymentAccount;              //@synthesize peerPaymentAccount=_peerPaymentAccount - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass;                            //@synthesize paymentPass=_paymentPass - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithPaymentPass:(id)arg1 ;
-(id)initWithPeerPaymentAccount:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)transactionSourceIdentifiers;
-(PKPaymentPass *)paymentPass;
-(PKPeerPaymentAccount *)peerPaymentAccount;
-(BOOL)isEqual:(id)arg1 ;
@end

