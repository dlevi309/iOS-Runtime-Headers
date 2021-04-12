/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCBundleChannelProviderDelegate.h>
#import <libobjc.A.dylib/FCBundleSubscriptionManagerType.h>

@protocol FCBundleEntitlementsProviderType, FCBundleChannelProviderType, FCCoreConfigurationManager;
@class FCBundleSubscription, FCPurchaseLookupRecordSource, FCKeyValueStore, FCBundleSubscriptionLookUpEntryManager, NSHashTable, NFMutexLock, NSString;

@interface FCBundleSubscriptionManager : NSObject <FCAppActivityObserving, FCBundleChannelProviderDelegate, FCBundleSubscriptionManagerType> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) FCBundleSubscription * bundleSubscription; 
@property (nonatomic,retain) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider; 
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(id<FCCoreConfigurationManager>)configurationManager;
-(FCKeyValueStore *)localStore;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(void)prepareForUseWithCompletion:(/*^block*/id)arg1 ;
-(FCBundleSubscription *)bundleSubscription;
-(FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
-(void)activityObservingApplicationDidEnterBackground;
-(void)setEntitlementsOverrideProvider:(id<FCEntitlementsOverrideProviderType>)arg1 ;
-(void)setupCachedSubscription;
-(FCBundleSubscriptionLookUpEntryManager *)bundleSubscriptionLookupEntryManager;
-(id<FCBundleChannelProviderType>)bundleChannelProvider;
-(void)setCachedSubscription:(FCBundleSubscription *)arg1 ;
-(id<FCBundleEntitlementsProviderType>)bundleEntitlementsProvider;
-(FCBundleSubscription *)cachedSubscription;
-(void)updateCachedSubscriptionWithSubscription:(id)arg1 ;
-(void)notifyObserversForSubscribedStateWithSubscription:(id)arg1 ;
-(id)changeSetBetween:(id)arg1 newSubscription:(id)arg2 ;
-(void)notifyObserversForChangeStateWithNewSubscription:(id)arg1 previousBundleSubscription:(id)arg2 changeSet:(id)arg3 ;
-(void)expireBundleSubscription;
-(void)notifyObserversForExpiredStateWithSubscription:(id)arg1 ;
-(NFMutexLock *)accessLock;
-(void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)bundleChannelProvider:(id)arg1 bundleChannelIDsDidChangeWithChannelIDs:(id)arg2 ;
-(id)bundleSubscriptionLookupEntry;
-(void)renewalNoticeShownWithPurchaseID:(id)arg1 ;
-(void)prewarmBundleTagIDsWithPurchaseID:(id)arg1 ;
-(void)clearBundleSubscription;
-(void)forceExpireBundleSubscriptionBasedOnInternalSettings;
-(id)initWithPrivateDataDirectory:(id)arg1 configurationManager:(id)arg2 purchaseLookupRecordSource:(id)arg3 appActivityMonitor:(id)arg4 entitlementsProvider:(id)arg5 ;
-(void)setBundleChannelProvider:(id<FCBundleChannelProviderType>)arg1 ;
-(void)setBundleSubscriptionLookupEntryManager:(FCBundleSubscriptionLookUpEntryManager *)arg1 ;
-(void)setAccessLock:(NFMutexLock *)arg1 ;
@end

