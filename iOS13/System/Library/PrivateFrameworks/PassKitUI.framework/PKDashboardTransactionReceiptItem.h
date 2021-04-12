/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKTransactionReceipt, PKPaymentTransaction, PKPaymentPass, PKAccount, NSString;

@interface PKDashboardTransactionReceiptItem : NSObject <PKDashboardItem> {

	PKTransactionReceipt* _receipt;
	PKPaymentTransaction* _transaction;
	PKPaymentPass* _paymentPass;
	PKAccount* _account;

}

@property (nonatomic,retain) PKTransactionReceipt * receipt;                  //@synthesize receipt=_receipt - In the implementation block
@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                     //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,retain) PKAccount * account;                             //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(PKPaymentTransaction *)transaction;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(PKTransactionReceipt *)receipt;
-(void)setReceipt:(PKTransactionReceipt *)arg1 ;
@end

