/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSUserDefaults, _PASLock, NSObject, PPKVOObserver;

@interface PPSettings : NSObject {

	NSUserDefaults* _portraitDefaults;
	NSUserDefaults* _canLearnFromAppDefaults;
	_PASLock* _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _initializationComplete;
	PPKVOObserver* _canLearnFromAppKVOObserver;
	PPKVOObserver* _weightKVOObserver;
	PPKVOObserver* _abGroupKVObserver;
	PPKVOObserver* _queryPlanLoggingKVOObserver;

}

@property (assign,getter=isAppConnectionsLocationsEnabled,nonatomic) BOOL appConnectionsLocationsEnabled; 
+(void)initialize;
+(id)sharedInstance;
+(void)disableBundleIdentifier:(id)arg1 ;
+(void)clearTestSettings;
+(id)cloudSyncDisabledFirstPartyBundleIds;
+(BOOL)isVoiceAssistantEnabled;
-(id)init;
-(id)userDefaults;
-(void)_refreshDisabledBundleIds;
-(void)_disableBundleIdentifier:(id)arg1 ;
-(void)_clearTestSettings;
-(id)abGroupOverride;
-(BOOL)isAppConnectionsLocationsEnabled;
-(void)setAppConnectionsLocationsEnabled:(BOOL)arg1 ;
-(void)_updateAppConnectionsSettings;
-(void)setEntitiesBackfilledTimestamp:(id)arg1 ;
-(void)setEntitiesMappingTrieSha256:(id)arg1 ;
-(BOOL)showLocationsFoundInApps;
-(int)registerDisabledBundleIdentifierChangeHandler:(/*^block*/id)arg1 ;
-(void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)arg1 ;
-(void)_invokeChangeHandlersAsync;
-(id)_donationDisabledBundleIds;
-(id)_cloudKitDisabledBundleIds;
-(void)registerCloudKitDisabledBundleIdRewriteHandler;
-(void)registerDisabledBundleIdPurgeHandler;
-(void)rewriteSyncStateForDisabledBundleIdsAsync;
-(void)_purgeRecordsForDisabledBundleIdsAsync;
-(void)_triggerDelayedOperationWithCoalescingToken:(A*)arg1 operation:(int)arg2 :(/*^block*/id)arg3 ;
-(void)_triggerDelayedBundleIdPurge;
-(void)triggerDelayedCloudSyncRewrite;
-(void)refreshCloudKitDisabledBundleIdsAsync;
-(void)_refreshCloudKitDisabledBundleIds;
-(double)weightMultiplier;
-(id)entitiesBackfilledTimestamp;
-(id)entitiesMappingPreviousTrieSha256;
-(BOOL)bundleIdentifierIsEnabledForDonation:(id)arg1 ;
-(BOOL)bundleIdentifierIsEnabledForCloudKit:(id)arg1 ;
-(void)setAssetMetadataRefreshIntervalSeconds:(double)arg1 ;
-(void)clearAssetMetadataRefreshIntervalSeconds;
-(double)assetMetadataRefreshIntervalSeconds;
-(void)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2 ;
-(id)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1 ;
-(void)setQueryPlanLoggingEnabled:(BOOL)arg1 ;
-(BOOL)queryPlanLoggingEnabled;
-(void)_updateQueryPlanLogging;
-(int)registerQueryPlanLoggingChangeHandler:(/*^block*/id)arg1 ;
-(void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)arg1 ;
-(BOOL)isAuthorizedToLogLocation;
@end

