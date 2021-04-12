/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKTransactionReceipt, PKPaymentTransaction, PKTransactionSource, PKAccount, NSString;

@interface PKDashboardTransactionReceiptItem : NSObject <PKDashboardItem> {

	PKTransactionReceipt* _receipt;
	PKPaymentTransaction* _transaction;
	PKTransactionSource* _transactionSource;
	PKAccount* _account;

}

@property (nonatomic,retain) PKTransactionReceipt * receipt;                       //@synthesize receipt=_receipt - In the implementation block
@property (nonatomic,retain) PKPaymentTransaction * transaction;                   //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) PKTransactionSource * transactionSource;              //@synthesize transactionSource=_transactionSource - In the implementation block
@property (nonatomic,retain) PKAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(PKPaymentTransaction *)transaction;
-(PKTransactionReceipt *)receipt;
-(void)setReceipt:(PKTransactionReceipt *)arg1 ;
-(PKTransactionSource *)transactionSource;
-(void)setTransactionSource:(PKTransactionSource *)arg1 ;
@end

