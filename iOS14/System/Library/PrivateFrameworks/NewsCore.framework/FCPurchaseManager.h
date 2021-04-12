/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCPaymentTransactionManagerDelegate.h>
#import <libobjc.A.dylib/FCPurchaseManagerType.h>

@protocol FCPurchaseManagerDelegate, FCPurchaseFlowOverrideProviderType, FCPaymentTransactionManager, FCPurchaseIntegrityChecker, FCPurchaseReceiptProvider, FCBundleSubscriptionManagerType, FCCoreConfigurationManager;
@class FCKeyValueStore, FCPurchaseController, NSMutableDictionary, NSString;

@interface FCPurchaseManager : NSObject <FCAppActivityObserving, FCPaymentTransactionManagerDelegate, FCPurchaseManagerType> {

	id<FCPurchaseManagerDelegate> _delegate;
	id<FCPurchaseFlowOverrideProviderType> purchaseFlowOverrideProvider;
	FCKeyValueStore* _localStore;
	id<FCPaymentTransactionManager> _paymentTransactionManager;
	id<FCPurchaseIntegrityChecker> _purchaseIntegrityChecker;
	id<FCPurchaseReceiptProvider> _purchaseReceiptProvider;
	id<FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
	FCPurchaseController* _purchaseController;
	NSMutableDictionary* _ongoingPurchaseEntriesByProductID;
	id<FCCoreConfigurationManager> _configurationManager;
	NSString* _lastSignedInItunesAccountDSID;

}

@property (nonatomic,retain) FCKeyValueStore * localStore;                                                     //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,readonly) id<FCPaymentTransactionManager> paymentTransactionManager;                      //@synthesize paymentTransactionManager=_paymentTransactionManager - In the implementation block
@property (nonatomic,readonly) id<FCPurchaseIntegrityChecker> purchaseIntegrityChecker;                        //@synthesize purchaseIntegrityChecker=_purchaseIntegrityChecker - In the implementation block
@property (nonatomic,readonly) id<FCPurchaseReceiptProvider> purchaseReceiptProvider;                          //@synthesize purchaseReceiptProvider=_purchaseReceiptProvider - In the implementation block
@property (nonatomic,readonly) id<FCBundleSubscriptionManagerType> bundleSubscriptionManager;                  //@synthesize bundleSubscriptionManager=_bundleSubscriptionManager - In the implementation block
@property (nonatomic,readonly) FCPurchaseController * purchaseController;                                      //@synthesize purchaseController=_purchaseController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * ongoingPurchaseEntriesByProductID;                          //@synthesize ongoingPurchaseEntriesByProductID=_ongoingPurchaseEntriesByProductID - In the implementation block
@property (nonatomic,retain) id<FCCoreConfigurationManager> configurationManager;                              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,copy) NSString * lastSignedInItunesAccountDSID;                                           //@synthesize lastSignedInItunesAccountDSID=_lastSignedInItunesAccountDSID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FCPurchaseManagerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FCPurchaseFlowOverrideProviderType> purchaseFlowOverrideProvider; 
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(FCKeyValueStore *)localStore;
-(void)setConfigurationManager:(id<FCCoreConfigurationManager>)arg1 ;
-(void)finishPurchaseTransactionWithProductID:(id)arg1 ;
-(void)activityObservingApplicationDidEnterBackground;
-(id)init;
-(id<FCPurchaseManagerDelegate>)delegate;
-(void)performEntitlementWithTagID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<FCBundleSubscriptionManagerType>)bundleSubscriptionManager;
-(void)startPurchaseWithTagID:(id)arg1 purchase:(id)arg2 webAccessOptIn:(BOOL)arg3 error:(id*)arg4 ;
-(id<FCPurchaseReceiptProvider>)purchaseReceiptProvider;
-(FCPurchaseController *)purchaseController;
-(void)setPurchaseFlowOverrideProvider:(id<FCPurchaseFlowOverrideProviderType>)arg1 ;
-(void)simulateSuccessfulPurchaseWithProductID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 ;
-(void)simulateFailurePurchaseWithProductID:(id)arg1 transactionState:(long long)arg2 error:(id)arg3 ;
-(BOOL)signInDetected;
-(void)setDelegate:(id<FCPurchaseManagerDelegate>)arg1 ;
-(id)ongoingPurchaseEntryForProductID:(id)arg1 ;
-(NSMutableDictionary *)ongoingPurchaseEntriesByProductID;
-(id)initWithCloudContext:(id)arg1 purchaseIntegrityChecker:(id)arg2 purchaseReceiptProvider:(id)arg3 paymentTransactionManager:(id)arg4 bundleSubscriptionManager:(id)arg5 keyValueStoreOption:(unsigned long long)arg6 ;
-(id)_ongoingPurchaseEntryIDForProductID:(id)arg1 ;
-(id<FCPaymentTransactionManager>)paymentTransactionManager;
-(id)fetchPurchaseMetadataForPurchaseID:(id)arg1 restorePurchase:(BOOL)arg2 ;
-(void)setLastSignedInItunesAccountDSID:(NSString *)arg1 ;
-(BOOL)isPurchaseTimeElapsedWithEntry:(id)arg1 ;
-(void)setOngoingPurchaseEntriesByProductID:(NSMutableDictionary *)arg1 ;
-(void)transactionFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ;
-(void)loadLocalCachesFromStore;
-(BOOL)anyOngoingPurchases;
-(void)removeOngoingPurchaseEntryForProductID:(id)arg1 ;
-(NSString *)lastSignedInItunesAccountDSID;
-(void)startBundlePurchaseWithPurchase:(id)arg1 error:(id*)arg2 ;
-(void)transactionPurchasedWithProductID:(id)arg1 ;
-(void)_purchaseFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ongoingPurchaseEntry:(id)arg4 ;
-(void)simulateSuccessfulPurchaseWithProductID:(id)arg1 tagID:(id)arg2 ;
-(void)clearAllOngoingPurchaseEntries;
-(void)startPurchaseWithTagID:(id)arg1 productID:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(BOOL)arg7 payment:(id)arg8 error:(id*)arg9 ;
-(id<FCPurchaseFlowOverrideProviderType>)purchaseFlowOverrideProvider;
-(void)saveToDisk;
-(void)cleanupStaleOngoingPurchaseEntries;
-(BOOL)isPurchaseOngoingForTagID:(id)arg1 ;
-(id<FCPurchaseIntegrityChecker>)purchaseIntegrityChecker;
@end

