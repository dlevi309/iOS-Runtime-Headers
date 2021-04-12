/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCBundleChannelProviderDelegate.h>
#import <libobjc.A.dylib/FCBundleSubscriptionManagerType.h>

@protocol FCBundleEntitlementsProviderType, FCBundleChannelProviderType, FCCoreConfigurationManager;
@class FCBundleSubscription, FCPurchaseLookupRecordSource, FCKeyValueStore, FCBundleSubscriptionLookUpEntryManager, NSHashTable, NFMutexLock, NSString;

@interface FCBundleSubscriptionManager : NSObject <FCAppActivityObserving, FCBundleChannelProviderDelegate, FCBundleSubscriptionManagerType> {

	BOOL _hasRunEntitlementOnce;
	id<FCBundleEntitlementsProviderType> _bundleEntitlementsProvider;
	FCPurchaseLookupRecordSource* _purchaseLookupRecordSource;
	FCBundleSubscription* _cachedSubscription;
	FCKeyValueStore* _localStore;
	FCBundleSubscriptionLookUpEntryManager* _bundleSubscriptionLookupEntryManager;
	NSHashTable* _observers;
	NFMutexLock* _accessLock;
	id<FCBundleChannelProviderType> _bundleChannelProvider;
	id<FCCoreConfigurationManager> _configurationManager;

}

@property (nonatomic,readonly) id<FCBundleEntitlementsProviderType> bundleEntitlementsProvider;                          //@synthesize bundleEntitlementsProvider=_bundleEntitlementsProvider - In the implementation block
@property (nonatomic,readonly) FCPurchaseLookupRecordSource * purchaseLookupRecordSource;                                //@synthesize purchaseLookupRecordSource=_purchaseLookupRecordSource - In the implementation block
@property (nonatomic,retain) FCBundleSubscription * cachedSubscription;                                                  //@synthesize cachedSubscription=_cachedSubscription - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * localStore;                                                               //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,retain) FCBundleSubscriptionLookUpEntryManager * bundleSubscriptionLookupEntryManager;              //@synthesize bundleSubscriptionLookupEntryManager=_bundleSubscriptionLookupEntryManager - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                                    //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NFMutexLock * accessLock;                                                                   //@synthesize accessLock=_accessLock - In the implementation block
@property (nonatomic,retain) id<FCBundleChannelProviderType> bundleChannelProvider;                                      //@synthesize bundleChannelProvider=_bundleChannelProvider - In the implementation block
@property (nonatomic,readonly) id<FCCoreConfigurationManager> configurationManager;                                      //@synthesize configurationManager=_configurationManager - In the implementation block
@property (assign,nonatomic) BOOL hasRunEntitlementOnce;                                                                 //@synthesize hasRunEntitlementOnce=_hasRunEntitlementOnce - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider; 
@property (nonatomic,copy,readonly) FCBundleSubscription * bundleSubscription; 
-(NFMutexLock *)accessLock;
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(FCKeyValueStore *)localStore;
-(void)addObserver:(id)arg1 ;
-(void)renewalNoticeShownWithPurchaseID:(id)arg1 ;
-(void)activityObservingApplicationDidEnterBackground;
-(void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSHashTable *)observers;
-(void)expireBundleSubscription;
-(id)init;
-(FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
-(void)clearBundleSubscription;
-(void)setHasRunEntitlementOnce:(BOOL)arg1 ;
-(void)notifyObserversForSubscribedStateWithSubscription:(id)arg1 ;
-(FCBundleSubscription *)bundleSubscription;
-(void)prepareForUseWithCompletion:(/*^block*/id)arg1 ;
-(FCBundleSubscription *)cachedSubscription;
-(void)setBundleSubscriptionLookupEntryManager:(FCBundleSubscriptionLookUpEntryManager *)arg1 ;
-(void)prewarmBundleTagIDsWithPurchaseID:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)setBundleChannelProvider:(id<FCBundleChannelProviderType>)arg1 ;
-(void)bundleChannelProvider:(id)arg1 bundleChannelIDsDidChangeWithChannelIDs:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)setAccessLock:(NFMutexLock *)arg1 ;
-(id<FCBundleEntitlementsProviderType>)bundleEntitlementsProvider;
-(void)setupCachedSubscription;
-(void)updateHasRunEntitlementOnce:(BOOL)arg1 ;
-(void)forceExpireBundleSubscriptionBasedOnInternalSettings;
-(void)silentExpireBundleSubscription;
-(id)bundleSubscriptionLookupEntry;
-(void)setCachedSubscription:(FCBundleSubscription *)arg1 ;
-(void)notifyObserversForExpiredStateWithSubscription:(id)arg1 ;
-(void)notifyObserversForChangeStateWithNewSubscription:(id)arg1 previousBundleSubscription:(id)arg2 ;
-(id<FCBundleChannelProviderType>)bundleChannelProvider;
-(BOOL)hasRunEntitlementOnce;
-(void)setEntitlementsOverrideProvider:(id<FCEntitlementsOverrideProviderType>)arg1 ;
-(FCBundleSubscriptionLookUpEntryManager *)bundleSubscriptionLookupEntryManager;
-(id)initWithPrivateDataDirectory:(id)arg1 configurationManager:(id)arg2 purchaseLookupRecordSource:(id)arg3 appActivityMonitor:(id)arg4 entitlementsProvider:(id)arg5 ;
-(void)updateCachedSubscriptionWithSubscription:(id)arg1 ;
@end

