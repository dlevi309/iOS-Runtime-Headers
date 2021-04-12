/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKPaymentPass, PKPaymentTransaction, PKTransactionSource, PKAccount, NSString;

@interface PKDashboardPaymentTransactionItem : NSObject <PKDashboardItem> {

	PKPaymentPass* _pass;
	PKPaymentTransaction* _transaction;
	BOOL _isFeaturedTransaction;
	PKTransactionSource* _transactionSource;
	PKTransactionSource* _secondaryTransactionSource;
	PKAccount* _account;

}

@property (nonatomic,readonly) PKPaymentTransaction * transaction;                          //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) PKTransactionSource * transactionSource;                     //@synthesize transactionSource=_transactionSource - In the implementation block
@property (nonatomic,retain) PKTransactionSource * secondaryTransactionSource;              //@synthesize secondaryTransactionSource=_secondaryTransactionSource - In the implementation block
@property (nonatomic,retain) PKAccount * account;                                           //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL isFeaturedTransaction;                                    //@synthesize isFeaturedTransaction=_isFeaturedTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(PKPaymentTransaction *)transaction;
-(id)initWithTransactionSource:(id)arg1 transaction:(id)arg2 account:(id)arg3 ;
-(PKTransactionSource *)secondaryTransactionSource;
-(void)setSecondaryTransactionSource:(PKTransactionSource *)arg1 ;
-(BOOL)isFeaturedTransaction;
-(void)setIsFeaturedTransaction:(BOOL)arg1 ;
-(unsigned long long)hash;
-(PKTransactionSource *)transactionSource;
-(BOOL)isEqual:(id)arg1 ;
@end

