/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCUserInfoObserving.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCPurchaseProviderType.h>

@protocol FCEntitlementsOverrideProviderType, OS_dispatch_queue;
@class NSSet, NSMutableDictionary, FCCloudContext, NSURLSession, FCKeyValueStore, FCPurchaseLookUpEntriesManager, NSDictionary, NSDate, NSObject, FCAsyncSerialQueue, NSString;

@interface FCPurchaseController : NSObject <FCUserInfoObserving, NSURLSessionDelegate, FCAppActivityObserving, FCPurchaseProviderType> {

	NSSet* _purchasesDiscoveredTagIDs;
	NSMutableDictionary* _webAccessEntriesByTagID;
	id<FCEntitlementsOverrideProviderType> _entitlementsOverrideProvider;
	FCCloudContext* _cloudContext;
	NSURLSession* _session;
	FCKeyValueStore* _localStore;
	FCPurchaseLookUpEntriesManager* _purchaseLookupEntriesManager;
	NSDictionary* _readOnlyPurchaseLookUpEntriesByTagID;
	NSDate* _lastEntitlementCheckTime;
	NSObject*<OS_dispatch_queue> _accessQueue;
	FCAsyncSerialQueue* _entitlementQueue;

}

@property (nonatomic,retain) FCCloudContext * cloudContext;                                                    //@synthesize cloudContext=_cloudContext - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                                                           //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * localStore;                                                     //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,retain) FCPurchaseLookUpEntriesManager * purchaseLookupEntriesManager;                    //@synthesize purchaseLookupEntriesManager=_purchaseLookupEntriesManager - In the implementation block
@property (copy) NSDictionary * readOnlyPurchaseLookUpEntriesByTagID;                                          //@synthesize readOnlyPurchaseLookUpEntriesByTagID=_readOnlyPurchaseLookUpEntriesByTagID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * webAccessEntriesByTagID;                                    //@synthesize webAccessEntriesByTagID=_webAccessEntriesByTagID - In the implementation block
@property (nonatomic,retain) NSSet * purchasesDiscoveredTagIDs;                                                //@synthesize purchasesDiscoveredTagIDs=_purchasesDiscoveredTagIDs - In the implementation block
@property (nonatomic,copy) NSDate * lastEntitlementCheckTime;                                                  //@synthesize lastEntitlementCheckTime=_lastEntitlementCheckTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                                         //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * entitlementQueue;                                            //@synthesize entitlementQueue=_entitlementQueue - In the implementation block
@property (nonatomic,readonly) NSString * lastSignedInItunesAccountName; 
@property (nonatomic,readonly) NSDictionary * purchaseLookUpEntriesByTagID; 
@property (nonatomic,readonly) NSSet * allPurchasedTagIDs; 
@property (nonatomic,readonly) NSSet * allTagIDs; 
@property (nonatomic,retain) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;              //@synthesize entitlementsOverrideProvider=_entitlementsOverrideProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * purchasedTagIDs; 
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)_applicationDidEnterBackground;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(FCKeyValueStore *)localStore;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(void)loadLocalCachesFromStore;
-(FCCloudContext *)cloudContext;
-(NSSet *)purchasedTagIDs;
-(id)initWithCloudContext:(id)arg1 keyValueStoreOption:(unsigned long long)arg2 ;
-(void)_initializeAppStorePurchaseDiscoveredList;
-(void)setPurchasesDiscoveredTagIDs:(NSSet *)arg1 ;
-(void)cleanupExpiredPurchaseLookupEntriesIfNeeded;
-(void)saveToDisk;
-(void)setReadOnlyPurchaseLookUpEntriesByTagID:(NSDictionary *)arg1 ;
-(void)setWebAccessEntriesByTagID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)webAccessEntriesByTagID;
-(FCPurchaseLookUpEntriesManager *)purchaseLookupEntriesManager;
-(void)notifyPurchaseListChanged;
-(id)_allPurchasedTagIDs;
-(void)notifyWebAccessOptedInListChanged;
-(NSString *)lastSignedInItunesAccountName;
-(id)lastSignedInItunesAccountDSID;
-(BOOL)atleastOneValidAppStorePurchase;
-(void)notifyPurchaseRemovedWithTagIDs:(id)arg1 ;
-(NSSet *)purchasesDiscoveredTagIDs;
-(void)notifyPurchasesDiscoveredWithTagIDs:(id)arg1 ;
-(void)addToPurchasedChannelsListWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 purchaseValidationState:(unsigned long long)arg4 isNewsAppPurchase:(BOOL)arg5 lastVerificationTime:(id)arg6 ;
-(id)webAccessOptedInTagIDs;
-(FCAsyncSerialQueue *)entitlementQueue;
-(void)_entitlementCheckWithIgnoreCache:(BOOL)arg1 restorableBundleIAPs:(id)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 serialCompletion:(/*^block*/id)arg5 ;
-(id<FCEntitlementsOverrideProviderType>)entitlementsOverrideProvider;
-(NSSet *)allPurchasedTagIDs;
-(id)allAppStorePurchasedTagIDsByPurchaseID;
-(id)purchaseLookUpEntryForTagID:(id)arg1 ;
-(void)updatePurchaseEntryToValid:(id)arg1 purchaseType:(unsigned long long)arg2 ;
-(void)silentRemoveFromPurchasedChannelsListWithTagIDs:(id)arg1 ;
-(void)fetchChannelIDsForPurchaseIDs:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addAppStoreDiscoveredChannelsToFavorites:(id)arg1 ;
-(void)updatePurchaseEntryToSubcsriptionNotSupported:(id)arg1 ;
-(id)allAppStorePurchasedTagIDs;
-(void)updatePurchaseEntryToExpired:(id)arg1 ;
-(void)removeFromWebAccessOptedInListWithTagID:(id)arg1 ;
-(id)fetchOperationForPurchaseLookupWithPurchaseIDs:(id)arg1 ;
-(NSDictionary *)readOnlyPurchaseLookUpEntriesByTagID;
-(BOOL)isTagIDPurchased:(id)arg1 ;
-(void)notifyPurchaseAddedWithTagIDs:(id)arg1 ;
-(void)updatePurchaseEntryToExpired:(id)arg1 hasShownRenewalNotice:(BOOL)arg2 ;
-(void)_removeFromPurchasedChannelsListWithTagIDs:(id)arg1 ;
-(void)handleAccessTokenChangeWithTagID:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)removeFromPurchasedChannelsListWithTagIDs:(id)arg1 ;
-(void)removeWebPurchaseForTagID:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)handleAccessTokenVerificationFailureWithTagID:(id)arg1 ;
-(void)handleAccessTokenVerificationSuccessWithTagID:(id)arg1 subscribed:(BOOL)arg2 accessToken:(id)arg3 ;
-(void)performHTTPRequestForVerifyAccessTokenWithURL:(id)arg1 accessToken:(id)arg2 consumedArticleCount:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)webAccessEntryForTagID:(id)arg1 ;
-(id)_webAccessEntryIDForTagID:(id)arg1 ;
-(void)addToWebAccessEntryListWithEntry:(id)arg1 ;
-(void)handleWebAccessSuccessWithTagID:(id)arg1 ;
-(void)handleWebAcccessFailureWithTagID:(id)arg1 purchaseID:(id)arg2 email:(id)arg3 purchaseReceipt:(id)arg4 ;
-(void)userInfo:(id)arg1 didChangeAccessTokenForTagID:(id)arg2 ;
-(void)userInfo:(id)arg1 didRemoveAccessTokenForTagID:(id)arg2 userInitiated:(BOOL)arg3 ;
-(void)activityObservingApplicationDidEnterBackground;
-(id)initWithCloudContext:(id)arg1 ;
-(void)addToWebAccessOptedInListWithTagID:(id)arg1 ;
-(void)shouldShowSignedInWithDifferentiTunesAccountAlertWithiTunesAccountName:(id)arg1 iTunesAccountDSID:(id)arg2 isUserSignedIntoiTunes:(BOOL)arg3 isBundleSubscriber:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)shouldShowiTunesSignedOutAlertWithiTunesAccountName:(id)arg1 iTunesAccountDSID:(id)arg2 isUserSignedIntoiTunes:(BOOL)arg3 isBundleSubscriber:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)clearAllAppStorePurchases;
-(void)setLastSignedInItunesAccountDSIDWithDSID:(id)arg1 ;
-(void)setLastSignedInItunesAccountNameWithName:(id)arg1 ;
-(void)addAppStorePurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 ;
-(void)clearAllPurchases;
-(void)addPurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 isNewsAppPurchase:(BOOL)arg4 ;
-(void)addExpiredPurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 isNewsAppPurchase:(BOOL)arg4 expirationDate:(id)arg5 ;
-(BOOL)isPaidSubscriber;
-(BOOL)isPaidSubscriberFromNews;
-(BOOL)isPaidSubscriberFromAppStore;
-(BOOL)isPaidSubscriberFromWeb;
-(BOOL)hasPurchaseTypeAppStore;
-(void)forceExpireAllSubscriptionsIfNeeded;
-(id)expiredPurchaseChannelIDs;
-(id)subscriptionNotSupportedChannelIDs;
-(void)performEntitlementCheckWithIgnoreCache:(BOOL)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSDictionary *)purchaseLookUpEntriesByTagID;
-(NSSet *)allTagIDs;
-(BOOL)isTagPurchased:(id)arg1 ;
-(void)renewalNoticeShownForPurchasedChannelsListWithTagIDs:(id)arg1 ;
-(void)updatePurchaseEntryToExpiredForTagIDs:(id)arg1 ;
-(void)removeFromPurchasesDiscoveredList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)verifyAccessTokenWithTagID:(id)arg1 accessToken:(id)arg2 consumedArticleCount:(unsigned long long)arg3 serialCompletion:(/*^block*/id)arg4 callbackQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)submitWebAccessWithTagID:(id)arg1 purchaseID:(id)arg2 emailAddress:(id)arg3 purchaseReceipt:(id)arg4 serialCompletion:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setEntitlementsOverrideProvider:(id<FCEntitlementsOverrideProviderType>)arg1 ;
-(void)setCloudContext:(FCCloudContext *)arg1 ;
-(void)setPurchaseLookupEntriesManager:(FCPurchaseLookUpEntriesManager *)arg1 ;
-(NSDate *)lastEntitlementCheckTime;
-(void)setLastEntitlementCheckTime:(NSDate *)arg1 ;
-(void)setEntitlementQueue:(FCAsyncSerialQueue *)arg1 ;
@end

