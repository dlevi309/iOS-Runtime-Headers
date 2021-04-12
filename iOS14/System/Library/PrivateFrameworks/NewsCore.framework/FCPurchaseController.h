/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSSet * allPurchaseIDs; 
@property (nonatomic,readonly) NSSet * allTagIDs; 
@property (nonatomic,retain) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;              //@synthesize entitlementsOverrideProvider=_entitlementsOverrideProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * purchasedTagIDs; 
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(FCKeyValueStore *)localStore;
-(id)initWithCloudContext:(id)arg1 ;
-(void)_applicationDidEnterBackground;
-(void)setCloudContext:(FCCloudContext *)arg1 ;
-(void)activityObservingApplicationDidEnterBackground;
-(id)init;
-(void)shouldShowSignedInWithDifferentiTunesAccountAlertWithiTunesAccountName:(id)arg1 iTunesAccountDSID:(id)arg2 isUserSignedIntoiTunes:(BOOL)arg3 isBundleSubscriber:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(NSURLSession *)session;
-(BOOL)isPaidSubscriber;
-(NSSet *)purchasedTagIDs;
-(id)initWithCloudContext:(id)arg1 keyValueStoreOption:(unsigned long long)arg2 ;
-(void)setWebAccessEntriesByTagID:(NSMutableDictionary *)arg1 ;
-(void)_initializeAppStorePurchaseDiscoveredList;
-(void)setPurchasesDiscoveredTagIDs:(NSSet *)arg1 ;
-(void)cleanupExpiredPurchaseLookupEntriesIfNeeded;
-(id)_allPurchasedTagIDs;
-(void)setReadOnlyPurchaseLookUpEntriesByTagID:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)webAccessEntriesByTagID;
-(FCPurchaseLookUpEntriesManager *)purchaseLookupEntriesManager;
-(void)notifyPurchaseListChanged;
-(void)notifyWebAccessOptedInListChanged;
-(NSString *)lastSignedInItunesAccountName;
-(BOOL)atleastOneValidAppStorePurchase;
-(FCAsyncSerialQueue *)entitlementQueue;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)notifyPurchaseRemovedWithTagIDs:(id)arg1 ;
-(NSSet *)purchasesDiscoveredTagIDs;
-(void)notifyPurchasesDiscoveredWithTagIDs:(id)arg1 ;
-(id<FCEntitlementsOverrideProviderType>)entitlementsOverrideProvider;
-(void)addToPurchasedChannelsListWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 purchaseValidationState:(unsigned long long)arg4 isNewsAppPurchase:(BOOL)arg5 lastVerificationTime:(id)arg6 ;
-(NSSet *)allPurchaseIDs;
-(BOOL)isTagIDPurchased:(id)arg1 ;
-(void)_entitlementCheckWithIgnoreCache:(BOOL)arg1 restorableBundleIAPs:(id)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 serialCompletion:(/*^block*/id)arg5 ;
-(NSSet *)allPurchasedTagIDs;
-(BOOL)isPaidSubscriberFromNews;
-(id)allAppStorePurchasedTagIDsByPurchaseID;
-(id)purchaseLookUpEntryForTagID:(id)arg1 ;
-(void)updatePurchaseEntryToValid:(id)arg1 purchaseType:(unsigned long long)arg2 ;
-(void)silentRemoveFromPurchasedChannelsListWithTagIDs:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)fetchChannelIDsForPurchaseIDs:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addAppStoreDiscoveredChannelsToFavorites:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)updatePurchaseEntryToSubcsriptionNotSupported:(id)arg1 ;
-(id)allAppStorePurchasedTagIDs;
-(void)updatePurchaseEntryToExpired:(id)arg1 ;
-(void)notifyPurchaseAddedWithTagIDs:(id)arg1 ;
-(void)removeFromWebAccessOptedInListWithTagID:(id)arg1 ;
-(id)fetchOperationForPurchaseLookupWithPurchaseIDs:(id)arg1 ;
-(NSDictionary *)readOnlyPurchaseLookUpEntriesByTagID;
-(void)_enumerateValidPurchasesUsingBlock:(/*^block*/id)arg1 ;
-(void)updatePurchaseEntryToExpired:(id)arg1 hasShownRenewalNotice:(BOOL)arg2 ;
-(void)_removeFromPurchasedChannelsListWithTagIDs:(id)arg1 ;
-(void)handleAccessTokenChangeWithTagID:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)removeWebPurchaseForTagID:(id)arg1 userInitiated:(BOOL)arg2 ;
-(id)lastSignedInItunesAccountDSID;
-(void)removeFromPurchasedChannelsListWithTagIDs:(id)arg1 ;
-(id)webAccessOptedInTagIDs;
-(void)handleAccessTokenVerificationFailureWithTagID:(id)arg1 ;
-(void)handleAccessTokenVerificationSuccessWithTagID:(id)arg1 subscribed:(BOOL)arg2 accessToken:(id)arg3 ;
-(void)clearAllPurchases;
-(void)performHTTPRequestForVerifyAccessTokenWithURL:(id)arg1 accessToken:(id)arg2 consumedArticleCount:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)webAccessEntryForTagID:(id)arg1 ;
-(BOOL)isPaidSubscriberFromWeb;
-(id)_webAccessEntryIDForTagID:(id)arg1 ;
-(void)addToWebAccessEntryListWithEntry:(id)arg1 ;
-(void)handleWebAccessSuccessWithTagID:(id)arg1 ;
-(void)handleWebAcccessFailureWithTagID:(id)arg1 purchaseID:(id)arg2 email:(id)arg3 purchaseReceipt:(id)arg4 ;
-(void)userInfo:(id)arg1 didChangeAccessTokenForTagID:(id)arg2 ;
-(void)userInfo:(id)arg1 didRemoveAccessTokenForTagID:(id)arg2 userInitiated:(BOOL)arg3 ;
-(BOOL)hasPurchaseTypeAppStore;
-(void)clearAllAppStorePurchases;
-(void)addToWebAccessOptedInListWithTagID:(id)arg1 ;
-(void)setLastSignedInItunesAccountDSIDWithDSID:(id)arg1 ;
-(void)shouldShowiTunesSignedOutAlertWithiTunesAccountName:(id)arg1 iTunesAccountDSID:(id)arg2 isUserSignedIntoiTunes:(BOOL)arg3 isBundleSubscriber:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)setLastSignedInItunesAccountNameWithName:(id)arg1 ;
-(void)addAppStorePurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 ;
-(void)silentExpireInAppSubscriptions;
-(NSDate *)lastEntitlementCheckTime;
-(void)addPurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 isNewsAppPurchase:(BOOL)arg4 ;
-(id)expiredPurchaseChannelIDs;
-(id)subscriptionNotSupportedChannelIDs;
-(void)addExpiredPurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 isNewsAppPurchase:(BOOL)arg4 expirationDate:(id)arg5 ;
-(void)forceExpireAllSubscriptionsIfNeeded;
-(BOOL)isTagPurchased:(id)arg1 ;
-(void)performEntitlementCheckWithIgnoreCache:(BOOL)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSDictionary *)purchaseLookUpEntriesByTagID;
-(void)updatePurchaseEntryToExpiredForTagIDs:(id)arg1 ;
-(void)saveToDisk;
-(void)renewalNoticeShownForPurchasedChannelsListWithTagIDs:(id)arg1 ;
-(void)removeFromPurchasesDiscoveredList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLastEntitlementCheckTime:(NSDate *)arg1 ;
-(void)verifyAccessTokenWithTagID:(id)arg1 accessToken:(id)arg2 consumedArticleCount:(unsigned long long)arg3 serialCompletion:(/*^block*/id)arg4 callbackQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setPurchaseLookupEntriesManager:(FCPurchaseLookUpEntriesManager *)arg1 ;
-(void)setEntitlementsOverrideProvider:(id<FCEntitlementsOverrideProviderType>)arg1 ;
-(NSSet *)allTagIDs;
-(void)submitWebAccessWithTagID:(id)arg1 purchaseID:(id)arg2 emailAddress:(id)arg3 purchaseReceipt:(id)arg4 serialCompletion:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setEntitlementQueue:(FCAsyncSerialQueue *)arg1 ;
-(BOOL)isPaidSubscriberFromAppStore;
-(void)dealloc;
-(FCCloudContext *)cloudContext;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

