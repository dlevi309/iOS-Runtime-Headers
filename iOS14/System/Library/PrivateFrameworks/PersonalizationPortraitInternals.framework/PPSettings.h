/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)isCloudSyncEnabled;
+(id)sharedInstance;
+(void)clearTestSettings;
+(BOOL)isVoiceAssistantEnabled;
+(id)cloudSyncDisabledFirstPartyBundleIds;
+(void)disableBundleIdentifier:(id)arg1 ;
-(void)_clearTestSettings;
-(int)registerQueryPlanLoggingChangeHandler:(/*^block*/id)arg1 ;
-(id)trialPathOverrides;
-(id)entitiesBackfilledTimestamp;
-(BOOL)trialUseDefaultFiles;
-(id)init;
-(id)_cloudKitDisabledBundleIds;
-(void)_triggerDelayedOperationWithCoalescingToken:(A*)arg1 operation:(int)arg2 :(/*^block*/id)arg3 ;
-(void)triggerDelayedCloudSyncRewrite;
-(void)_refreshCloudKitDisabledBundleIds;
-(void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)arg1 ;
-(int)registerDisabledBundleIdentifierChangeHandler:(/*^block*/id)arg1 ;
-(void)_triggerDelayedBundleIdPurge;
-(BOOL)bundleIdentifierIsEnabledForDonation:(id)arg1 ;
-(id)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1 ;
-(id)userDefaults;
-(void)registerCloudKitDisabledBundleIdRewriteHandler;
-(BOOL)showLocationsFoundInApps;
-(void)_updateQueryPlanLogging;
-(void)_updateAppConnectionsSettings;
-(void)rewriteSyncStateForDisabledBundleIdsAsync;
-(double)assetMetadataRefreshIntervalSeconds;
-(BOOL)bundleIdentifierIsEnabledForCloudKit:(id)arg1 ;
-(id)trialPathOverrideForNamespaceName:(id)arg1 factorName:(id)arg2 ;
-(void)refreshCloudKitDisabledBundleIdsAsync;
-(void)_disableBundleIdentifier:(id)arg1 ;
-(void)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2 ;
-(BOOL)isAppConnectionsLocationsEnabled;
-(void)setAppConnectionsLocationsEnabled:(BOOL)arg1 ;
-(void)setTrialUseDefaultFiles:(BOOL)arg1 ;
-(id)abGroupOverride;
-(double)weightMultiplier;
-(void)_purgeRecordsForDisabledBundleIdsAsync;
-(void)_refreshDisabledBundleIds;
-(void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)arg1 ;
-(void)registerDisabledBundleIdPurgeHandler;
-(void)setEntitiesBackfilledTimestamp:(id)arg1 ;
-(void)setAssetMetadataRefreshIntervalSeconds:(double)arg1 ;
-(void)_handleCloudStorageDeletedByUser;
-(void)_invokeChangeHandlersAsync;
-(void)clearAssetMetadataRefreshIntervalSeconds;
-(void)setEntitiesMappingTrieSha256:(id)arg1 ;
-(id)_donationDisabledBundleIds;
-(BOOL)isAuthorizedToLogLocation;
-(id)entitiesMappingPreviousTrieSha256;
-(BOOL)queryPlanLoggingEnabled;
-(void)setTrialPathOverrideForNamespaceName:(id)arg1 factorName:(id)arg2 path:(id)arg3 ;
-(void)setQueryPlanLoggingEnabled:(BOOL)arg1 ;
@end

