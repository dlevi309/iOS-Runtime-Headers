/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(PKPaymentTransaction *)transaction;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(PKPaymentApplication *)paymentApplication;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(id)initWithTransaction:(id)arg1 pass:(id)arg2 paymentApplication:(id)arg3 ;
@end

