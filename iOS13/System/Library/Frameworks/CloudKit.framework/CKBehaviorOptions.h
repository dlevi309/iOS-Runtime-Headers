/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)_init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)productVersion;
-(id)buildVersion;
-(BOOL)isAppleInternalInstall;
-(BOOL)forceUploadRequestActivitiesToRunImmediately;
-(BOOL)ignoreUploadRequestPushNotifications;
-(NSObject*<OS_dispatch_queue>)cachedPrefsQueue;
-(NSMutableDictionary *)cachedPrefs;
-(id)_behaviorOptionForKey:(id)arg1 ;
-(void)_startListeningForNotifications;
-(id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2 ;
-(id)_behaviorContainerOptionForKey:(id)arg1 ;
-(int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2 ;
-(void)_setPref:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_getBoolOptionForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2 ;
-(id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(id)_urlForKey:(id)arg1 defaultURLString:(id)arg2 ;
-(id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(BOOL)_buildIsOverridden;
-(void)setDidReadAutomatedDeviceGroup:(BOOL)arg1 ;
-(BOOL)didReadAutomatedDeviceGroup;
-(NSUserDefaults *)automatedDeviceGroupDefaults;
-(int)cachedRecordExpiryTime;
-(void)setCachedRecordExpiryTime:(int)arg1 ;
-(unsigned long long)recordCacheSizeLimit;
-(BOOL)highPriorityURLDelegates;
-(double)operationTimeout;
-(void)setOperationTimeout:(double)arg1 ;
-(int)trafficLogMaximumDataSize;
-(int)trafficLogQueueWidth;
-(void)setTrafficLogMaximumDataSize:(int)arg1 ;
-(const char*)CKCtlPrompt;
-(void)setCKCtlPrompt:(char*)arg1 ;
-(BOOL)CFNetworkLogging;
-(void)setCFNetworkLogging:(BOOL)arg1 ;
-(BOOL)disableCaching;
-(void)setDisableCaching:(BOOL)arg1 ;
-(BOOL)shouldProfileSQL;
-(void)setShouldProfileSQL:(BOOL)arg1 ;
-(BOOL)compressRequests;
-(void)setCompressRequests:(BOOL)arg1 ;
-(BOOL)useModTimeInAssetCacheEviction;
-(void)setModTimeInAssetCacheEviction:(BOOL)arg1 ;
-(BOOL)sendDebugHeader;
-(void)setLogTrafficToTextFile:(BOOL)arg1 ;
-(BOOL)logTrafficToTextFile;
-(void)setLogTraffic:(BOOL)arg1 ;
-(BOOL)logTraffic;
-(BOOL)pipelineFetchAllChangesRequests;
-(void)setSendDebugHeader:(BOOL)arg1 ;
-(int)clientThrottleQueueWidth;
-(id)configBaseURL;
-(void)setConfigBaseURL:(id)arg1 ;
-(id)setupBaseURL;
-(void)setSetupBaseURL:(id)arg1 ;
-(id)customCloudDBBaseURL;
-(void)setCustomCloudDBBaseURL:(id)arg1 ;
-(id)customShareServiceBaseURL;
-(void)setCustomShareServiceBaseURL:(id)arg1 ;
-(id)customDeviceServiceBaseURL;
-(void)setCustomDeviceServiceBaseURL:(id)arg1 ;
-(id)customCodeServiceBaseURL;
-(void)setCustomCodeServiceBaseURL:(id)arg1 ;
-(id)customMetricsServiceBaseURL;
-(void)setCustomMetricsServiceBaseURL:(id)arg1 ;
-(id)primaryAccountEmailOverride;
-(void)setPrimaryAccountEmailOverride:(id)arg1 ;
-(id)primaryAccountPasswordOverride;
-(void)setPrimaryAccountPasswordOverride:(id)arg1 ;
-(void)setTestRunIDHeader:(id)arg1 ;
-(id)testRunIDHeader;
-(id)otherAccountsWithDefaultValue:(id)arg1 ;
-(BOOL)evictRecentAssets;
-(unsigned long long)assetEvictionGracePeriodWithDefaultValue:(unsigned long long)arg1 ;
-(unsigned long long)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(unsigned long long)arg1 ;
-(unsigned long long)maxPackageDownloadsPerBatchWithDefaultValue:(unsigned long long)arg1 ;
-(unsigned long long)maxPackageUploadsPerBatchWithDefaultValue:(unsigned long long)arg1 ;
-(double)packageGCGracePeriod;
-(double)packageGCPeriod;
-(BOOL)sandboxCloudD;
-(unsigned long long)PCSCacheSize;
-(double)PCSCacheMinTime;
-(int)PCSRetryCount;
-(int)longlivedOperationThrottlingRetryCount;
-(int)longlivedOperationMaxRetryCount;
-(void)setOptimisticPCS:(BOOL)arg1 ;
-(BOOL)optimisticPCS;
-(void)setUseEncryption:(BOOL)arg1 ;
-(BOOL)useEncryption;
-(void)setUseStingray:(BOOL)arg1 ;
-(BOOL)useStingray;
-(void)setUsePreauth:(BOOL)arg1 ;
-(BOOL)usePreauth;
-(BOOL)rollRecordPCSMasterKeys;
-(void)setRollRecordPCSMasterKeys:(BOOL)arg1 ;
-(BOOL)rollRecordMasterKeysOnUnshare;
-(void)setRollRecordMasterKeysOnUnshare:(BOOL)arg1 ;
-(BOOL)rollZonePCSIdentities;
-(void)setRollZonePCSIdentities:(BOOL)arg1 ;
-(BOOL)rollZoneSharingKeys;
-(void)setRollZoneSharingKeys:(BOOL)arg1 ;
-(BOOL)useEnhancedPCSEncryptionContext;
-(void)setUseEnhancedPCSEncryptionContext:(BOOL)arg1 ;
-(id)containerIDToForceFatalManateeZoneDecryptionFailure;
-(void)setContainerIDToForceFatalManateeZoneDecryptionFailure:(id)arg1 ;
-(long long)maxRecordPCSMasterKeyRolls;
-(id)productName;
-(void)setProductName:(id)arg1 ;
-(void)setProductVersion:(id)arg1 ;
-(void)setBuildVersion:(id)arg1 ;
-(long long)flowControlBudget;
-(double)flowControlRegeneration;
-(long long)flowControlBudgetOverride;
-(double)flowControlRegenerationOverride;
-(unsigned long long)maxBatchSize;
-(BOOL)allowExpiredDNSBehavior;
-(BOOL)shouldDecryptRecordsBeforeSave;
-(int)defaultRetryAfter;
-(double)maximumThrottleSeconds;
-(double)maximumQueuedFetchWaitTime;
-(double)maximumWaitAfterFetchRequest;
-(double)publicIdentitiesExpirationTimeout;
-(id)vettedEmailsTestFormat;
-(int)backgroundSessionConnectionPoolLimitWithDefaultValue:(int)arg1 ;
-(BOOL)enableMMCSMetricsWithDefaultValue:(BOOL)arg1 ;
-(long long)sqlBatchCount;
-(void)setSqlBatchCount:(long long)arg1 ;
-(double)sqlBatchTime;
-(void)setSqlBatchTime:(double)arg1 ;
-(unsigned long long)savedErrorCount;
-(unsigned long long)recentProxiesToSave;
-(double)maxRecentProxyAge;
-(double)shareAcceptorRetrievingDialogDelay;
-(double)shareAcceptorRetrievingDialogMinPeriod;
-(NSString *)automatedDeviceGroup;
-(double)minTTRPromptInterval;
-(id)recordNamesForFakingDecryptionFailure;
-(void)setIgnoreUploadRequestPushNotifications:(BOOL)arg1 ;
-(void)setForceUploadRequestActivitiesToRunImmediately:(BOOL)arg1 ;
-(id)deviceCountOverride;
-(void)setDeviceCountOverride:(id)arg1 ;
-(void)setCachedPrefs:(NSMutableDictionary *)arg1 ;
-(void)setCachedPrefsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)mcToken;
-(void)setMcToken:(int)arg1 ;
-(int)ckToken;
-(void)setCkToken:(int)arg1 ;
-(void)setAutomatedDeviceGroup:(NSString *)arg1 ;
-(void)setAutomatedDeviceGroupDefaults:(NSUserDefaults *)arg1 ;
@end

