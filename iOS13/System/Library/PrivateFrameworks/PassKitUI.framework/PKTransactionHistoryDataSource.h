/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardTransactionFetcherDelegate.h>
#import <libobjc.A.dylib/PKDashboardDataSource.h>

@protocol PKDashboardDataSourceDelegate, PKPaymentDataProvider;
@class PKPaymentPass, PKDashboardTransactionFetcher, PKPeerPaymentContactResolver, PKPaymentTransaction, PKPaymentTransactionGroup, PKInstallmentPlan, PKTransactionReceipt, NSArray, PKAccountServiceAccountResolutionController, NSDateFormatter, NSCalendar, PKAccount, CNContact, PKMerchant, PKCurrencyAmount, NSString;

@interface PKTransactionHistoryDataSource : NSObject <PKDashboardTransactionFetcherDelegate, PKDashboardDataSource> {

	PKPaymentPass* _paymentPass;
	PKDashboardTransactionFetcher* _transactionFetcher;
	PKPeerPaymentContactResolver* _contactResolver;
	id<PKDashboardDataSourceDelegate> _delegate;
	PKPaymentTransaction* _featuredTransaction;
	PKPaymentTransactionGroup* _selectedTransactions;
	PKInstallmentPlan* _associatedInstallmentPlan;
	PKTransactionReceipt* _associatedReceipt;
	NSArray* _featuredTransactionActions;
	NSArray* _actionItems;
	PKAccountServiceAccountResolutionController* _resolutionController;
	id<PKPaymentDataProvider> _dataProvider;
	BOOL _contentIsLoaded;
	BOOL _contactLoaded;
	BOOL _transactionHistoryLoaded;
	BOOL _associatedReceiptLoaded;
	NSArray* _transactionHistory;
	NSDateFormatter* _formatterTitle;
	NSDateFormatter* _formatterMonth;
	NSCalendar* _currentCalendar;
	PKAccount* _account;
	unsigned long long _type;
	CNContact* _contact;
	PKMerchant* _merchant;
	PKPaymentTransactionGroup* _group;
	PKCurrencyAmount* _footerTotal;
	PKCurrencyAmount* _footerSecondaryTotal;

}

@property (nonatomic,readonly) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                  //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) PKMerchant * merchant;                                //@synthesize merchant=_merchant - In the implementation block
@property (nonatomic,readonly) PKPaymentTransactionGroup * group;                    //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSString * footerTitle; 
@property (nonatomic,readonly) PKCurrencyAmount * footerTotal;                       //@synthesize footerTotal=_footerTotal - In the implementation block
@property (nonatomic,readonly) NSString * footerSecondaryTitle; 
@property (nonatomic,readonly) PKCurrencyAmount * footerSecondaryTotal;              //@synthesize footerSecondaryTotal=_footerSecondaryTotal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)type;
-(CNContact *)contact;
-(PKPaymentTransactionGroup *)group;
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(NSString *)footerTitle;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)titleForSection:(unsigned long long)arg1 ;
-(void)setDataSourceDelegate:(id)arg1 ;
-(id)navigationBarTitle;
-(PKMerchant *)merchant;
-(id)_headerItem;
-(id)_contactKeysToFetch;
-(id)initWithTransactionGroup:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 transactionHistory:(id)arg4 ;
-(id)footerTextForSection:(unsigned long long)arg1 ;
-(void)transactionsChanged:(id)arg1 ;
-(id)initWithFetcher:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 featuredTransaction:(id)arg4 selectedTransactions:(id)arg5 transactionHistory:(id)arg6 type:(unsigned long long)arg7 ;
-(id)initWithInstallmentPlan:(id)arg1 payemntPass:(id)arg2 account:(id)arg3 ;
-(PKCurrencyAmount *)footerTotal;
-(NSString *)footerSecondaryTitle;
-(PKCurrencyAmount *)footerSecondaryTotal;
-(void)_loadContact;
-(void)_loadTransactionReceipt;
-(void)_handleTransactionHistoryUpdated:(id)arg1 ;
-(void)_reloadTransactions;
-(void)_notifyContentLoadedIfNecessary;
-(void)_handleAccountsChangedNotification:(id)arg1 ;
-(void)_updateInstallmentPlan;
-(id)_transactionItemForTransaction:(id)arg1 ;
-(id)_totalSpendingFromTransactions:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)_totalPaymentsFromTransactions:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)_totalRewardsFromTransactions:(id)arg1 ;
@end

