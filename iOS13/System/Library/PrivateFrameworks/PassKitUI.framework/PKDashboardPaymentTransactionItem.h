/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKPaymentPass, PKPaymentTransaction, PKAccount, NSString;

@interface PKDashboardPaymentTransactionItem : NSObject <PKDashboardItem> {

	PKPaymentPass* _pass;
	PKPaymentTransaction* _transaction;
	BOOL _isFeaturedTransaction;
	PKAccount* _account;

}

@property (nonatomic,readonly) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * pass;                            //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKAccount * account;                               //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL isFeaturedTransaction;                        //@synthesize isFeaturedTransaction=_isFeaturedTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(PKPaymentTransaction *)transaction;
-(PKPaymentPass *)pass;
-(BOOL)isFeaturedTransaction;
-(id)initWithPaymentPass:(id)arg1 transaction:(id)arg2 account:(id)arg3 ;
-(void)setIsFeaturedTransaction:(BOOL)arg1 ;
@end

