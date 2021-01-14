/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class PKPaymentTransaction, PKPaymentPass, PKPaymentApplication;

@interface PKPendingPaymentTransaction : NSObject {

	PKPaymentTransaction* _transaction;
	PKPaymentPass* _pass;
	PKPaymentApplication* _paymentApplication;

}

@property (nonatomic,retain) PKPaymentTransaction * transaction;                     //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;              //@synthesize paymentApplication=_paymentApplication - In the implementation block
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(PKPaymentTransaction *)transaction;
-(PKPaymentPass *)pass;
-(PKPaymentApplication *)paymentApplication;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(id)initWithTransaction:(id)arg1 pass:(id)arg2 paymentApplication:(id)arg3 ;
@end

