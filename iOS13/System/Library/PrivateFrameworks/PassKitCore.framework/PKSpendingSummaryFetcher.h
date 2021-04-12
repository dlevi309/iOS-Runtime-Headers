/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>
#import <libobjc.A.dylib/PKAccountServiceObserver.h>

@protocol OS_dispatch_queue;
@class PKPaymentPass, NSString, PKAccount, NSCache, NSDate, NSObject, PKPaymentDefaultDataProvider, NSCalendar, NSHashTable, NSMutableOrderedSet, NSMutableDictionary, NSArray;

@interface PKSpendingSummaryFetcher : NSObject <PKPaymentDataProviderDelegate, PKAccountServiceObserver> {

	PKPaymentPass* _paymentPass;
	NSString* _passUniqueID;
	PKAccount* _account;
	NSCache* _weeklySummaryItemsPerStartDate;
	NSCache* _monthlySummaryItemsPerStartDate;
	NSDate* _oldestTransactionDate;
	NSDate* _newestTransactionDate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	PKPaymentDefaultDataProvider* _paymentDataProvider;
	NSCalendar* _currentCalendar;
	os_unfair_lock_s _observersLock;
	NSHashTable* _observers;
	os_unfair_lock_s _requestsLock;
	NSMutableOrderedSet* _pendingRequests;
	NSMutableDictionary* _blockPendingRequests;
	BOOL _processingRequest;
	NSArray* _statements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)previousStartOfWeekFromDate:(id)arg1 ;
+(id)nextStartOfWeekFromDate:(id)arg1 ;
+(id)previousStartOfMonthFromDate:(id)arg1 ;
+(id)summaryWithTransactions:(id)arg1 currency:(id)arg2 type:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 lastSummary:(id)arg6 ;
+(id)_sortedTransactions:(id)arg1 ascending:(BOOL)arg2 ;
+(id)_spendingCategoriesFromTransactions:(id)arg1 currencyCode:(id)arg2 ;
+(id)_spendingMerchantsFromTransaction:(id)arg1 currencyCode:(id)arg2 ;
-(void)dealloc;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)_accessObserversWithHandler:(/*^block*/id)arg1 ;
-(void)statementsChangedForAccountIdentifier:(id)arg1 ;
-(void)_resetCurrentCalendar;
-(id)_cachedSpendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2 withLastPeriodChange:(BOOL)arg3 ;
-(void)_processNextRequest;
-(void)_spendingSummaryStartingWithDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 withLastPeriodChange:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithPaymentPass:(id)arg1 account:(id)arg2 ;
-(void)availableSummaries:(/*^block*/id)arg1 ;
-(id)cachedSpendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2 ;
-(void)spendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
@end

