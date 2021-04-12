/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
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
-(id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(long long)maxBatchSize;
-(int)sqlBatchCount;
-(void)setSqlBatchCount:(int)arg1 ;
-(double)sqlBatchTime;
-(void)setSqlBatchTime:(double)arg1 ;
-(void)setCachedPrefs:(NSMutableDictionary *)arg1 ;
-(void)setCachedPrefsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMaxBatchSize:(long long)arg1 ;
-(MBConnection *)conn;
-(NSString *)cloudKitContainerName;
-(void)setCloudKitContainerName:(NSString *)arg1 ;
-(long long)maxBatchCount;
-(void)setMaxBatchCount:(long long)arg1 ;
-(long long)maxBatchSaveAssetSize;
-(void)setmaxBatchSaveAssetSize:(long long)arg1 ;
-(int)maxBatchSaveConcurrentModifyRecordsOperationsWithDefaultValue:(int)arg1 ;
-(int)maxBatchDeleteConcurrentModifyRecordsOperationsWithDefaultValue:(int)arg1 ;
-(int)maxBatchFetchConcurrentFetchRecordsOperationsWithDefaultValue:(int)arg1 ;
-(long long)maxBatchFetchAssetSize;
-(void)setmaxBatchFetchAssetSize:(long long)arg1 ;
-(long long)recordSaveAttempts;
-(void)setRecordSaveAttempts:(long long)arg1 ;
-(BOOL)sqlTrace;
-(void)setSQLTrace:(BOOL)arg1 ;
-(long long)manifestPageSize;
-(void)setManifestPageSize:(long long)arg1 ;
-(long long)maxDomainsToBackup;
-(void)setMaxDomainsToBackup:(long long)arg1 ;
-(BOOL)useBackgroundOperationsForBackup;
-(void)setUseBackgroundOperationsForBackup:(BOOL)arg1 ;
-(NSString *)minimumBuildVersionForFullBackup;
-(void)setMinimumBuildVersionForFullBackup:(NSString *)arg1 ;
-(BOOL)backupFromLocalSnapshot;
-(void)setBackupFromLocalSnapshot:(BOOL)arg1 ;
-(BOOL)keepDailySnapshots;
-(void)setKeepDailySnapshots:(BOOL)arg1 ;
-(BOOL)snapshotAfterForegroundRestore;
-(void)setSnapshotAfterForegroundRestore:(BOOL)arg1 ;
-(BOOL)usePowerLog;
-(void)setUsePowerLog:(BOOL)arg1 ;
-(BOOL)useABC;
-(void)setUseABC:(BOOL)arg1 ;
-(double)SQLiteSpaceSavingsThresholdWithDefaultValue:(double)arg1 ;
-(BOOL)validateSignatureOnRestoreWithDefaultValue:(BOOL)arg1 ;
-(int)validateFileEncodingWithDefaultValue:(int)arg1 ;
-(BOOL)enableSQLiteArchivingWithDefaultValue:(BOOL)arg1 ;
-(BOOL)fixOwnershipOnFileScanWithDefaultValue:(BOOL)arg1 ;
-(BOOL)warnForLateiTunesBackups;
-(void)setWarnForLateiTunesBackups:(BOOL)arg1 ;
-(void)setConn:(MBConnection *)arg1 ;
-(BOOL)flushLogMessages;
-(void)setFlushLogMessages:(BOOL)arg1 ;
@end

