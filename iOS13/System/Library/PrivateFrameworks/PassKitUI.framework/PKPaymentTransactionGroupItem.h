/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKPaymentTransactionGroup, PKPaymentPass, PKAccount, NSString;

@interface PKPaymentTransactionGroupItem : NSObject <PKDashboardItem> {

	PKPaymentTransactionGroup* _group;
	PKPaymentPass* _paymentPass;
	PKAccount* _account;

}

@property (nonatomic,retain) PKPaymentTransactionGroup * group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                    //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,retain) PKAccount * account;                            //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGroup:(PKPaymentTransactionGroup *)arg1 ;
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(PKPaymentTransactionGroup *)group;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
@end

