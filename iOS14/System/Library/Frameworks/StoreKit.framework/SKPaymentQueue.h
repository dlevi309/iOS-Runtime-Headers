/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class SKPaymentQueueClient, SKStorefront, NSArray;

@interface SKPaymentQueue : NSObject {

	id _internal;

}

@property (nonatomic,readonly) SKPaymentQueueClient * paymentQueueClient; 
@property (assign,nonatomic,__weak) id<SKPaymentQueueDelegate> delegate; 
@property (nonatomic,readonly) SKStorefront * storefront; 
@property (nonatomic,readonly) NSArray * transactionObservers; 
@property (nonatomic,readonly) NSArray * transactions; 
+(BOOL)canMakePayments;
+(id)defaultQueue;
-(SKStorefront *)storefront;
-(void)handleEngagementRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)storefrontChanged:(id)arg1 ;
-(void)downloadRemoved:(id)arg1 ;
-(id)init;
-(id<SKPaymentQueueDelegate>)delegate;
-(NSArray *)transactions;
-(void)addTransactionObserver:(id)arg1 ;
-(void)downloadStatusChanged:(id)arg1 ;
-(void)_establishConnectionIfNeeded;
-(void)shouldContinueTransaction:(id)arg1 withNewStorefront:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)removedTransactions:(id)arg1 ;
-(void)downloadAdded:(id)arg1 ;
-(void)setDelegate:(id<SKPaymentQueueDelegate>)arg1 ;
-(void)finishTransaction:(id)arg1 ;
-(void)pauseDownloads:(id)arg1 ;
-(void)updatedTransactions:(id)arg1 ;
-(void)addPayment:(id)arg1 ;
-(id)initWithPaymentQueueClient:(id)arg1 ;
-(void)removeTransactionObserver:(id)arg1 ;
-(void)resumeDownloads:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)presentCodeRedemptionSheet;
-(void)forceSandboxForBundleIdentifier:(id)arg1 untilDate:(id)arg2 ;
-(void)cancelDownloads:(id)arg1 ;
-(void)askToShowMessageWithReplyBlock:(/*^block*/id)arg1 ;
-(void)removedEntitlementsForProductIdentifiers:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)dealloc;
-(void)_establishConnection;
-(SKPaymentQueueClient *)paymentQueueClient;
-(id)_initSKPaymentQueue;
-(void)_notifyObserversAboutChanges:(id)arg1 sendUpdatedDownloads:(BOOL)arg2 ;
-(void)_processTransaction:(id)arg1 ;
-(void)_checkServerQueue;
-(void)_checkForMessages;
-(void)_sendCommand:(long long)arg1 forDownloads:(id)arg2 ;
-(void)_removeLocalTransaction:(id)arg1 ;
-(void)restoreCompletedTransactionsWithApplicationUsername:(id)arg1 ;
-(void)_updatedTransactions:(id)arg1 restored:(BOOL)arg2 ;
-(void)_presentCodeRedemptionSheet;
-(void)_sendAppEnteredForegroundMessage;
-(void)_refreshPaymentsWithPolicy:(long long)arg1 ;
-(void)_notifyObserversAboutPurchaseIntentsForProducts:(id)arg1 ;
-(void)_notifyObserversRestoreTransactionsFinished;
-(void)_notifyObserversRestoreTransactionsFailedWithError:(id)arg1 ;
-(void)_handleConnectionDisconnect;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 ;
-(void)_setTransactionsWithReply:(id)arg1 ;
-(void)_notifyObserversAboutRemovals:(id)arg1 ;
-(void)_updateDownloadsForMessage:(id)arg1 ;
-(void)_updatePaymentsForMessage:(id)arg1 ;
-(void)_removePaymentsForMessage:(id)arg1 ;
-(void)_completeRestoreWithMessage:(id)arg1 ;
-(void)_sendAppStorePendingPaymentsRequestForMessage:(id)arg1 ;
-(BOOL)_shouldContinueTransactionForMessage:(id)arg1 ;
-(void)_removeNilTransactionObservers;
-(void)_processTransactionDict:(id)arg1 forTransaction:(id)arg2 error:(id)arg3 ;
-(id)_copyRemovalsFromUnmergedIndexSet:(id)arg1 ;
-(void)_finishRefreshPayments;
-(id)_copyDownloadIDsForDownloads:(id)arg1 ;
-(void)_processUpdates:(id)arg1 trimUnmatched:(BOOL)arg2 sendUpdatedDownloads:(BOOL)arg3 ;
-(id)_copyTransactionsFromXPCArray:(id)arg1 ;
-(id)_applyDownloadChangeset:(id)arg1 ;
-(void)_notifyObserversAboutDownloadChanges:(id)arg1 ;
-(NSArray *)transactionObservers;
-(void)restoreCompletedTransactions;
-(void)showPriceConsentIfNeeded;
-(void)startDownloads:(id)arg1 ;
-(void)_daemonLaunchedNotification;
@end

