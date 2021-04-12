/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString, NSUserDefaults;

@interface CKBehaviorOptions : NSObject {

	BOOL _didReadAutomatedDeviceGroup;
	int _mcToken;
	int _ckToken;
	NSMutableDictionary* _cachedPrefs;
	NSObject*<OS_dispatch_queue> _cachedPrefsQueue;
	NSString* _automatedDeviceGroup;
	NSUserDefaults* _automatedDeviceGroupDefaults;

}

@property (nonatomic,retain) NSMutableDictionary * cachedPrefs;                          //@synthesize cachedPrefs=_cachedPrefs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cachedPrefsQueue;              //@synthesize cachedPrefsQueue=_cachedPrefsQueue - In the implementation block
@property (assign,nonatomic) int mcToken;                                                //@synthesize mcToken=_mcToken - In the implementation block
@property (assign,nonatomic) int ckToken;                                                //@synthesize ckToken=_ckToken - In the implementation block
@property (assign) BOOL didReadAutomatedDeviceGroup;                                     //@synthesize didReadAutomatedDeviceGroup=_didReadAutomatedDeviceGroup - In the implementation block
@property (nonatomic,retain) NSString * automatedDeviceGroup;                            //@synthesize automatedDeviceGroup=_automatedDeviceGroup - In the implementation block
@property (nonatomic,retain) NSUserDefaults * automatedDeviceGroupDefaults;              //@synthesize automatedDeviceGroupDefaults=_automatedDeviceGroupDefaults - In the implementation block
+(id)sharedOptions;
-(int)ckToken;
-(id)customCodeServiceBaseURL;
-(void)setUsePreauth:(BOOL)arg1 ;
-(unsigned long long)maxBatchSize;
-(double)maxRecentProxyAge;
-(BOOL)_buildIsOverridden;
-(id)productName;
-(id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(id)containerIdentifierPrefixesUsingDebugBinaries;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTranscoderFunctionName:(id)arg1 ;
-(BOOL)sandboxCloudD;
-(int)cachedRecordExpiryTime;
-(id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2 ;
-(BOOL)disableCaching;
-(id)configBaseURL;
-(int)PCSRetryCount;
-(int)longlivedOperationThrottlingRetryCount;
-(void)setConfigBaseURL:(id)arg1 ;
-(unsigned long long)recentProxiesToSave;
-(BOOL)usePreauth;
-(void)setCustomShareServiceBaseURL:(id)arg1 ;
-(void)setProductName:(id)arg1 ;
-(int)trafficLogQueueWidth;
-(id)productVersion;
-(void)setCustomCloudDBBaseURL:(id)arg1 ;
-(BOOL)forceUploadRequestActivitiesToRunImmediately;
-(unsigned long long)PCSCacheSize;
-(void)setRollRecordMasterKeysOnUnshare:(BOOL)arg1 ;
-(unsigned long long)recordCacheSizeLimit;
-(BOOL)sendDebugHeader;
-(BOOL)highPriorityURLDelegates;
-(BOOL)isAppleInternalInstall;
-(BOOL)rollRecordMasterKeysOnUnshare;
-(void)setRollRecordPCSMasterKeys:(BOOL)arg1 ;
-(int)clientThrottleQueueWidth;
-(id)_behaviorContainerOptionForKey:(id)arg1 ;
-(void)setAutomatedDeviceGroupDefaults:(NSUserDefaults *)arg1 ;
-(double)publicIdentitiesExpirationTimeout;
-(void)setTranscoderServiceName:(id)arg1 ;
-(double)shareAcceptorRetrievingDialogDelay;
-(double)PCSCacheMinTime;
-(NSUserDefaults *)automatedDeviceGroupDefaults;
-(id)recordNamesForFakingDecryptionFailure;
-(id)transcoderFunctionName;
-(BOOL)allowExpiredDNSBehavior;
-(void)setTranscoderPermittedRemoteMeasurement:(id)arg1 ;
-(BOOL)compressRequests;
-(double)packageGCPeriod;
-(void)setCachedPrefs:(NSMutableDictionary *)arg1 ;
-(id)customCloudDBBaseURL;
-(void)setCachedPrefsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)optimisticPCS;
-(void)setDeviceCountOverride:(id)arg1 ;
-(int)backgroundSessionConnectionPoolLimitWithDefaultValue:(int)arg1 ;
-(double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2 ;
-(long long)flowControlBudgetOverride;
-(void)setUseEnhancedPCSEncryptionContext:(BOOL)arg1 ;
-(void)setCustomCodeServiceBaseURL:(id)arg1 ;
-(BOOL)CFNetworkLogging;
-(double)flowControlRegenerationOverride;
-(unsigned long long)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(unsigned long long)arg1 ;
-(void)setProductVersion:(id)arg1 ;
-(BOOL)useModTimeInAssetCacheEviction;
-(id)customShareServiceBaseURL;
-(void)setShouldProfileSQL:(BOOL)arg1 ;
-(int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2 ;
-(void)setUseEncryption:(BOOL)arg1 ;
-(void)setAutomatedDeviceGroup:(NSString *)arg1 ;
-(long long)flowControlBudget;
-(void)setLogTraffic:(BOOL)arg1 ;
-(void)setSetupBaseURL:(id)arg1 ;
-(void)setBuildVersion:(id)arg1 ;
-(double)maximumWaitAfterFetchRequest;
-(double)sqlBatchTime;
-(id)_urlForKey:(id)arg1 defaultURLString:(id)arg2 ;
-(double)shareAcceptorRetrievingDialogMinPeriod;
-(BOOL)logTraffic;
-(void)_startListeningForNotifications;
-(id)deviceCountOverride;
-(void)setContainerIdentifierToForceFatalManateeZoneDecryptionFailure:(id)arg1 ;
-(void)setOperationTimeout:(double)arg1 ;
-(id)customMetricsServiceBaseURL;
-(id)testRunIDHeader;
-(BOOL)evictRecentAssets;
-(id)transcoderServiceName;
-(void)setDidReadAutomatedDeviceGroup:(BOOL)arg1 ;
-(void)setTestRunIDHeader:(id)arg1 ;
-(id)setupBaseURL;
-(int)defaultRetryAfter;
-(BOOL)pipelineFetchAllChangesRequests;
-(double)minTTRPromptInterval;
-(BOOL)rollZonePCSIdentities;
-(void)setSendDebugHeader:(BOOL)arg1 ;
-(BOOL)useStingray;
-(id)transcoderPermittedRemoteMeasurement;
-(id)buildVersion;
-(unsigned long long)maxPackageUploadsPerBatchWithDefaultValue:(unsigned long long)arg1 ;
-(double)flowControlRegeneration;
-(double)operationTimeout;
-(void)setForceUploadRequestActivitiesToRunImmediately:(BOOL)arg1 ;
-(double)packageGCGracePeriod;
-(double)maximumThrottleSeconds;
-(id)_getDataOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(int)mcToken;
-(void)_setPref:(id)arg1 forKey:(id)arg2 ;
-(BOOL)useEnhancedPCSEncryptionContext;
-(int)trafficLogMaximumDataSize;
-(void)setCachedRecordExpiryTime:(int)arg1 ;
-(void)setDisableCaching:(BOOL)arg1 ;
-(unsigned long long)savedErrorCount;
-(BOOL)_getBoolOptionForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(long long)maxRecordPCSMasterKeyRolls;
-(NSString *)automatedDeviceGroup;
-(void)setRollZonePCSIdentities:(BOOL)arg1 ;
-(void)setCKCtlPrompt:(char*)arg1 ;
-(BOOL)rollZoneSharingKeys;
-(BOOL)useEncryption;
-(void)setOptimisticPCS:(BOOL)arg1 ;
-(id)_behaviorOptionForKey:(id)arg1 ;
-(void)setUseStingray:(BOOL)arg1 ;
-(void)setSqlBatchCount:(long long)arg1 ;
-(id)_init;
-(void)setIgnoreUploadRequestPushNotifications:(BOOL)arg1 ;
-(unsigned long long)maxPackageDownloadsPerBatchWithDefaultValue:(unsigned long long)arg1 ;
-(void)setMcToken:(int)arg1 ;
-(id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(unsigned long long)assetEvictionGracePeriodWithDefaultValue:(unsigned long long)arg1 ;
-(long long)sqlBatchCount;
-(int)longlivedOperationMaxRetryCount;
-(BOOL)shouldProfileSQL;
-(BOOL)shouldDecryptRecordsBeforeSave;
-(void)setCustomDeviceServiceBaseURL:(id)arg1 ;
-(BOOL)didReadAutomatedDeviceGroup;
-(BOOL)enableMMCSMetricsWithDefaultValue:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)cachedPrefsQueue;
-(void)setCkToken:(int)arg1 ;
-(void)setCompressRequests:(BOOL)arg1 ;
-(void)setSqlBatchTime:(double)arg1 ;
-(void)setCustomMetricsServiceBaseURL:(id)arg1 ;
-(BOOL)rollRecordPCSMasterKeys;
-(id)vettedEmailsTestFormat;
-(double)maximumQueuedFetchWaitTime;
-(void)setCFNetworkLogging:(BOOL)arg1 ;
-(NSMutableDictionary *)cachedPrefs;
-(BOOL)ignoreUploadRequestPushNotifications;
-(id)customDeviceServiceBaseURL;
-(void)setModTimeInAssetCacheEviction:(BOOL)arg1 ;
-(void)setTrafficLogMaximumDataSize:(int)arg1 ;
-(const char*)CKCtlPrompt;
-(void)dealloc;
-(void)setRollZoneSharingKeys:(BOOL)arg1 ;
-(id)containerIdentifierToForceFatalManateeZoneDecryptionFailure;
@end

