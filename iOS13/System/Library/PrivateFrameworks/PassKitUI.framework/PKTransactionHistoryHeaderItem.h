/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKMerchant, NSString, CNContact, PKPaymentTransactionGroup, PKInstallmentPlanProduct;

@interface PKTransactionHistoryHeaderItem : NSObject <PKDashboardItem> {

	unsigned long long _type;
	PKMerchant* _merchant;
	NSString* _peerPaymentCounterpartHandle;
	CNContact* _contact;
	PKPaymentTransactionGroup* _transactionGroup;
	long long _transactionType;
	PKInstallmentPlanProduct* _installmentProduct;

}

@property (nonatomic,readonly) unsigned long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) PKMerchant * merchant;                                      //@synthesize merchant=_merchant - In the implementation block
@property (nonatomic,copy) NSString * peerPaymentCounterpartHandle;                      //@synthesize peerPaymentCounterpartHandle=_peerPaymentCounterpartHandle - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                        //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionGroup * transactionGroup;               //@synthesize transactionGroup=_transactionGroup - In the implementation block
@property (assign,nonatomic) long long transactionType;                                  //@synthesize transactionType=_transactionType - In the implementation block
@property (nonatomic,retain) PKInstallmentPlanProduct * installmentProduct;              //@synthesize installmentProduct=_installmentProduct - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setTransactionType:(long long)arg1 ;
-(long long)transactionType;
-(PKMerchant *)merchant;
-(void)setMerchant:(PKMerchant *)arg1 ;
-(void)setPeerPaymentCounterpartHandle:(NSString *)arg1 ;
-(NSString *)peerPaymentCounterpartHandle;
-(PKPaymentTransactionGroup *)transactionGroup;
-(void)setTransactionGroup:(PKPaymentTransactionGroup *)arg1 ;
-(PKInstallmentPlanProduct *)installmentProduct;
-(void)setInstallmentProduct:(PKInstallmentPlanProduct *)arg1 ;
@end

