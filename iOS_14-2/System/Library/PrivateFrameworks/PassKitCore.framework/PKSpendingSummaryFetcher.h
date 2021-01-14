/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSCache* _yearlySummaryItemsPerStartDate;
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
+(id)_spendingMerchantsFromTransaction:(id)arg1 currencyCode:(id)arg2 ;
+(id)_sortedTransactions:(id)arg1 ascending:(BOOL)arg2 ;
+(id)summaryWithTransactions:(id)arg1 currency:(id)arg2 type:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 lastSummary:(id)arg6 ;
+(id)_spendingCategoriesFromTransactions:(id)arg1 currencyCode:(id)arg2 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg1 account:(id)arg2 ;
-(id)cachedSpendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2 ;
-(void)spendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2 includingLastPeriodChange:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)statementsChangedForAccountIdentifier:(id)arg1 ;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)_accessObserversWithHandler:(/*^block*/id)arg1 ;
-(void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)_resetCurrentCalendar;
-(id)_cacheForType:(unsigned long long)arg1 ;
-(id)_cachedSpendingSummaryStartingWithDate:(id)arg1 type:(unsigned long long)arg2 withLastPeriodChange:(BOOL)arg3 ;
-(void)_processNextRequest;
-(void)dealloc;
-(void)_spendingSummaryStartingWithDate:(id)arg1 endDate:(id)arg2 type:(unsigned long long)arg3 withLastPeriodChange:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)availableSummaries:(/*^block*/id)arg1 ;
@end

