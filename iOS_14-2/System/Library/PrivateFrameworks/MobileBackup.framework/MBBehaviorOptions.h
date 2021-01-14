/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/


@protocol OS_dispatch_queue;
@class MBConnection, NSMutableDictionary, NSObject, NSString;

@interface MBBehaviorOptions : NSObject {

	BOOL _warnForLateiTunesBackups;
	BOOL _flushLogMessages;
	MBConnection* _conn;
	NSMutableDictionary* _cachedPrefs;
	NSObject*<OS_dispatch_queue> _cachedPrefsQueue;

}

@property (nonatomic,retain) MBConnection * conn;                                        //@synthesize conn=_conn - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPrefs;                          //@synthesize cachedPrefs=_cachedPrefs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cachedPrefsQueue;              //@synthesize cachedPrefsQueue=_cachedPrefsQueue - In the implementation block
@property (nonatomic,copy) NSString * cloudKitContainerName; 
@property (assign,nonatomic) long long maxBatchCount; 
@property (assign,nonatomic) long long maxBatchSize; 
@property (assign,nonatomic) long long manifestPageSize; 
@property (assign,nonatomic) long long recordSaveAttempts; 
@property (assign,nonatomic) BOOL sqlTrace; 
@property (assign,nonatomic) long long maxDomainsToBackup; 
@property (assign,nonatomic) BOOL warnForLateiTunesBackups;                              //@synthesize warnForLateiTunesBackups=_warnForLateiTunesBackups - In the implementation block
@property (assign,nonatomic) int sqlBatchCount; 
@property (assign,nonatomic) double sqlBatchTime; 
@property (assign,nonatomic) BOOL useBackgroundOperationsForBackup; 
@property (nonatomic,copy) NSString * minimumBuildVersionForFullBackup; 
@property (assign,nonatomic) BOOL backupFromLocalSnapshot; 
@property (assign,nonatomic) BOOL useABC; 
@property (assign,nonatomic) BOOL keepDailySnapshots; 
@property (assign,nonatomic) BOOL snapshotAfterForegroundRestore; 
@property (assign,nonatomic) BOOL flushLogMessages;                                      //@synthesize flushLogMessages=_flushLogMessages - In the implementation block
@property (nonatomic,readonly) long long maxBatchSaveAssetSize; 
@property (nonatomic,readonly) long long maxBatchFetchAssetSize; 
@property (nonatomic,readonly) BOOL usePowerLog; 
+(id)sharedOptions;
-(void)setMaxBatchSize:(long long)arg1 ;
-(long long)maxBatchSize;
-(id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)setUseABC:(BOOL)arg1 ;
-(NSString *)cloudKitContainerName;
-(void)setCloudKitContainerName:(NSString *)arg1 ;
-(long long)maxBatchCount;
-(void)setMaxBatchCount:(long long)arg1 ;
-(long long)maxBatchSaveAssetSize;
-(void)setmaxBatchSaveAssetSize:(long long)arg1 ;
-(int)maxBatchSaveConcurrentModifyRecordsOperationsWithDefaultValue:(int)arg1 ;
-(long long)maxBatchFetchAssetSize;
-(void)setmaxBatchFetchAssetSize:(long long)arg1 ;
-(int)maxBatchDeleteConcurrentModifyRecordsOperationsWithDefaultValue:(int)arg1 ;
-(int)maxBatchFetchConcurrentFetchRecordsOperationsWithDefaultValue:(int)arg1 ;
-(long long)recordSaveAttempts;
-(void)setRecordSaveAttempts:(long long)arg1 ;
-(long long)manifestPageSize;
-(BOOL)usePowerLog;
-(BOOL)useABC;
-(void)setManifestPageSize:(long long)arg1 ;
-(long long)maxDomainsToBackup;
-(void)setMaxDomainsToBackup:(long long)arg1 ;
-(BOOL)useBackgroundOperationsForBackup;
-(void)setUseBackgroundOperationsForBackup:(BOOL)arg1 ;
-(NSString *)minimumBuildVersionForFullBackup;
-(BOOL)backupFromLocalSnapshot;
-(void)setMinimumBuildVersionForFullBackup:(NSString *)arg1 ;
-(void)setBackupFromLocalSnapshot:(BOOL)arg1 ;
-(BOOL)keepDailySnapshots;
-(void)setKeepDailySnapshots:(BOOL)arg1 ;
-(BOOL)snapshotAfterForegroundRestore;
-(void)setSnapshotAfterForegroundRestore:(BOOL)arg1 ;
-(void)setUsePowerLog:(BOOL)arg1 ;
-(double)SQLiteSpaceSavingsThresholdWithDefaultValue:(double)arg1 ;
-(BOOL)validateSignatureOnRestoreWithDefaultValue:(BOOL)arg1 ;
-(int)validateFileEncodingWithDefaultValue:(int)arg1 ;
-(BOOL)enableSQLiteArchivingWithDefaultValue:(BOOL)arg1 ;
-(BOOL)warnForLateiTunesBackups;
-(id)init;
-(BOOL)fixOwnershipOnFileScanWithDefaultValue:(BOOL)arg1 ;
-(void)setWarnForLateiTunesBackups:(BOOL)arg1 ;
-(BOOL)flushLogMessages;
-(void)setFlushLogMessages:(BOOL)arg1 ;
-(id)_behaviorContainerOptionForKey:(id)arg1 ;
-(void)setCachedPrefs:(NSMutableDictionary *)arg1 ;
-(void)setCachedPrefsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2 ;
-(int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2 ;
-(double)sqlBatchTime;
-(void)_startListeningForNotifications;
-(BOOL)sqlTrace;
-(void)_setPref:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_getBoolOptionForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(id)_behaviorOptionForKey:(id)arg1 ;
-(void)setSqlBatchCount:(int)arg1 ;
-(MBConnection *)conn;
-(id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(int)sqlBatchCount;
-(NSObject*<OS_dispatch_queue>)cachedPrefsQueue;
-(void)setSqlBatchTime:(double)arg1 ;
-(void)setConn:(MBConnection *)arg1 ;
-(void)setSQLTrace:(BOOL)arg1 ;
-(NSMutableDictionary *)cachedPrefs;
@end

