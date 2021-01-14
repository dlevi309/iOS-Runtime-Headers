/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardTransactionFetcherDelegate.h>
#import <libobjc.A.dylib/PKWorldRegionUpdaterObserver.h>
#import <libobjc.A.dylib/PKDashboardDataSource.h>

@protocol PKDashboardDataSourceDelegate, PKPaymentDataProvider;
@class PKTransactionSource, PKDashboardTransactionFetcher, PKPeerPaymentContactResolver, NSString, PKPaymentTransaction, PKPaymentTransactionGroup, PKInstallmentPlan, PKTransactionReceipt, NSArray, PKAccountServiceAccountResolutionController, PKWorldRegionUpdater, PKCoarseLocationMonitor, NSDateFormatter, NSCalendar, PKAccount, CNContact, PKMerchant, PKCurrencyAmount, NSIndexPath;

@interface PKTransactionHistoryDataSource : NSObject <PKDashboardTransactionFetcherDelegate, PKWorldRegionUpdaterObserver, PKDashboardDataSource> {

	PKTransactionSource* _transactionSource;
	PKDashboardTransactionFetcher* _transactionFetcher;
	PKPeerPaymentContactResolver* _contactResolver;
	NSString* _peerPaymentCounterpartHandle;
	id<PKDashboardDataSourceDelegate> _delegate;
	PKPaymentTransaction* _featuredTransaction;
	PKPaymentTransactionGroup* _selectedTransactions;
	PKInstallmentPlan* _associatedInstallmentPlan;
	PKTransactionReceipt* _associatedReceipt;
	NSArray* _featuredTransactionActions;
	NSArray* _actionItems;
	PKAccountServiceAccountResolutionController* _resolutionController;
	id<PKPaymentDataProvider> _dataProvider;
	PKWorldRegionUpdater* _regionUpdater;
	PKCoarseLocationMonitor* _coarseLocationMonitor;
	NSArray* _groups;
	NSArray* _tokens;
	BOOL _contentIsLoaded;
	BOOL _contactLoaded;
	BOOL _transactionHistoryLoaded;
	BOOL _associatedReceiptLoaded;
	NSArray* _transactionHistory;
	BOOL _hasReceived;
	BOOL _hasSent;
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
	NSIndexPath* _headerIndexPath;

}

@property (nonatomic,readonly) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                  //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) PKMerchant * merchant;                                //@synthesize merchant=_merchant - In the implementation block
@property (nonatomic,readonly) PKPaymentTransactionGroup * group;                    //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSArray * groups;                                     //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) NSString * footerTitle; 
@property (nonatomic,readonly) PKCurrencyAmount * footerTotal;                       //@synthesize footerTotal=_footerTotal - In the implementation block
@property (nonatomic,readonly) NSString * footerSecondaryTitle; 
@property (nonatomic,readonly) PKCurrencyAmount * footerSecondaryTotal;              //@synthesize footerSecondaryTotal=_footerSecondaryTotal - In the implementation block
@property (nonatomic,readonly) NSIndexPath * headerIndexPath;                        //@synthesize headerIndexPath=_headerIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPaymentTransactionGroup *)group;
-(CNContact *)contact;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(void)transactionsChanged:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)initWithTransactionGroup:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 fetcher:(id)arg4 transactionHistory:(id)arg5 ;
-(unsigned long long)numberOfSections;
-(void)updateGroup:(id)arg1 ;
-(NSArray *)groups;
-(id)initWithFetcher:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 featuredTransaction:(id)arg4 selectedTransactions:(id)arg5 transactionHistory:(id)arg6 type:(unsigned long long)arg7 ;
-(NSIndexPath *)headerIndexPath;
-(id)initWithTransactionGroups:(id)arg1 headerGroup:(id)arg2 regionUpdater:(id)arg3 tokens:(id)arg4 transactionSource:(id)arg5 account:(id)arg6 ;
-(PKCurrencyAmount *)footerTotal;
-(NSString *)footerSecondaryTitle;
-(PKCurrencyAmount *)footerSecondaryTotal;
-(PKMerchant *)merchant;
-(id)initWithInstallmentPlan:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 ;
-(void)_handleCoarseLocationChangedNotification:(id)arg1 ;
-(void)_loadContact;
-(void)_loadTransactionReceipt;
-(void)_handleTransactionHistoryUpdated:(id)arg1 ;
-(void)_reloadTransactions;
-(void)_updateFooterTotalFromGroup:(id)arg1 ;
-(id)_headerItem;
-(BOOL)_updateGroup:(id)arg1 withRegion:(id)arg2 ;
-(void)updateGroups:(id)arg1 headerGroup:(id)arg2 ;
-(id)_contactKeysToFetch;
-(void)_notifyContentLoadedIfNecessary;
-(void)_p2pTotalsFromTransactions:(id)arg1 received:(id*)arg2 sent:(id*)arg3 ;
-(id)_totalSpendingFromTransactions:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)_handleAccountsChangedNotification:(id)arg1 ;
-(void)_updateInstallmentPlan;
-(id)_totalFromGroups:(id)arg1 ;
-(id)_transactionItemForTransaction:(id)arg1 ;
-(id)_groupItemForTransaction:(id)arg1 ;
-(id)_totalPaymentsFromTransactions:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)_totalRewardsFromTransactions:(id)arg1 ;
-(void)worldRegionUpdated:(id)arg1 updatedRegion:(id)arg2 ;
-(id)titleForSection:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)navigationBarTitle;
-(NSString *)footerTitle;
-(id)footerTextItemForSection:(unsigned long long)arg1 ;
-(void)setDataSourceDelegate:(id)arg1 ;
-(void)dealloc;
@end

