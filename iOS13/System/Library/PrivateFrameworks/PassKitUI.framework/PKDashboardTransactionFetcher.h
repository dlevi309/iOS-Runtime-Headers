/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>

@protocol PKPaymentDataProvider, PKDashboardTransactionFetcherDelegate, OS_dispatch_queue;
@class PKPaymentPass, NSString, NSObject, PKMerchant, PKInstallmentPlan, NSDictionary, NSArray, NSDate;

@interface PKDashboardTransactionFetcher : NSObject <PKPaymentDataProviderDelegate> {

	PKPaymentPass* _pass;
	NSString* _passUniqueID;
	id<PKPaymentDataProvider> _paymentDataProvider;
	id<PKDashboardTransactionFetcherDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	os_unfair_lock_s _lockUpdate;
	BOOL _pendingUpdate;
	BOOL _hasMoreUpdates;
	PKMerchant* _merchant;
	NSString* _counterpartHandle;
	long long _merchantCategory;
	long long _transactionType;
	PKInstallmentPlan* _installmentPlan;
	unsigned long long _limit;
	NSString* _cashbackPassUniqueID;
	PKPaymentPass* _cashbackPass;
	BOOL _needsCashbackUniqueID;
	NSDictionary* _cashbackGroups;
	BOOL _needsInstantWithdrawalFees;
	NSArray* _instantWithdrawalFeeGroups;
	unsigned long long _type;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (assign,nonatomic,__weak) id<PKDashboardTransactionFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                                     //@synthesize endDate=_endDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)type;
-(id<PKDashboardTransactionFetcherDelegate>)delegate;
-(void)setDelegate:(id<PKDashboardTransactionFetcherDelegate>)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2 ;
-(id)_sortedTransactions:(id)arg1 ascending:(BOOL)arg2 ;
-(id)initWithCounterpartHandle:(id)arg1 paymentPass:(id)arg2 paymentDataProvider:(id)arg3 ;
-(id)initWithMerchant:(id)arg1 paymentPass:(id)arg2 paymentDataProvider:(id)arg3 ;
-(void)reloadTransactionsWithCompletion:(/*^block*/id)arg1 ;
-(id)cashbackGroupForDateComponents:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg1 paymentDataProvider:(id)arg2 ;
-(id)cashbackGroupForTransactionWithIdentifier:(id)arg1 ;
-(void)transactionsYearlyCountsWithCompletion:(/*^block*/id)arg1 ;
-(void)transactionsMonthlyAmountsWithCompletion:(/*^block*/id)arg1 ;
-(void)setLimit:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)instantWithdrawalFeesTransactionGroups;
-(id)initWithTransactionType:(long long)arg1 paymentPass:(id)arg2 paymentDataProvider:(id)arg3 ;
-(id)initWithInstallmentPlan:(id)arg1 paymentPass:(id)arg2 paymentDataProvider:(id)arg3 ;
-(void)_commonSetup;
-(void)_processPaymentPassTransactionsWithTransactions:(id)arg1 sendTransactionsBlock:(/*^block*/id)arg2 ;
-(id)_feeTotalForTransaction:(id)arg1 ;
-(void)_addCashbackTransactions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_addInstantWidthdrawalTransactionsWithCompletion:(/*^block*/id)arg1 ;
-(void)_sendUpdatedTransactions;
-(id)initWithMerchantCategory:(long long)arg1 paymentPass:(id)arg2 paymentDataProvider:(id)arg3 ;
-(id)cashbackPass;
@end

