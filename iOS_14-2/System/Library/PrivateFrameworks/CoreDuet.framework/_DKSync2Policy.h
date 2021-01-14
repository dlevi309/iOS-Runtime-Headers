/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSString, NSNumber, NSDictionary, NSArray;

@interface _DKSync2Policy : NSObject {

	BOOL _syncDisabled;
	BOOL _pushTriggersSync;
	BOOL _requireCharging;
	NSString* _name;
	NSNumber* _version;
	unsigned long long _maxSyncPeriodInDays;
	unsigned long long _maxSyncDownIntervalInDays;
	unsigned long long _minSyncIntervalInSeconds;
	unsigned long long _minSyncWindowInSeconds;
	unsigned long long _minSyncsPerDay;
	unsigned long long _maxSyncsPerDay;
	unsigned long long _numChangesTriggeringSync;
	unsigned long long _singleDeviceSyncIntervalInDays;
	NSDictionary* _streamNamesToSync;
	NSArray* _streamNamesWithAdditionsTriggeringSync;
	NSArray* _streamNamesWithDeletionsTriggeringSync;
	unsigned long long _syncBatchSizeInEvents;
	unsigned long long _maxBatchesPerSync;
	unsigned long long _syncTimeoutInSeconds;
	unsigned long long _triggeredSyncDelayInSeconds;
	unsigned long long _policyDownloadIntervalInDays;
	NSArray* _streamNamesToAlwaysSync;

}

@property (nonatomic,retain) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSNumber * version;                                             //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL syncDisabled;                                              //@synthesize syncDisabled=_syncDisabled - In the implementation block
@property (assign,nonatomic) unsigned long long maxSyncPeriodInDays;                         //@synthesize maxSyncPeriodInDays=_maxSyncPeriodInDays - In the implementation block
@property (assign,nonatomic) unsigned long long maxSyncDownIntervalInDays;                   //@synthesize maxSyncDownIntervalInDays=_maxSyncDownIntervalInDays - In the implementation block
@property (assign,nonatomic) unsigned long long minSyncIntervalInSeconds;                    //@synthesize minSyncIntervalInSeconds=_minSyncIntervalInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long minSyncWindowInSeconds;                      //@synthesize minSyncWindowInSeconds=_minSyncWindowInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long minSyncsPerDay;                              //@synthesize minSyncsPerDay=_minSyncsPerDay - In the implementation block
@property (assign,nonatomic) unsigned long long maxSyncsPerDay;                              //@synthesize maxSyncsPerDay=_maxSyncsPerDay - In the implementation block
@property (assign,nonatomic) unsigned long long numChangesTriggeringSync;                    //@synthesize numChangesTriggeringSync=_numChangesTriggeringSync - In the implementation block
@property (assign,nonatomic) unsigned long long policyDownloadIntervalInDays;                //@synthesize policyDownloadIntervalInDays=_policyDownloadIntervalInDays - In the implementation block
@property (assign,nonatomic) BOOL pushTriggersSync;                                          //@synthesize pushTriggersSync=_pushTriggersSync - In the implementation block
@property (assign,nonatomic) BOOL requireCharging;                                           //@synthesize requireCharging=_requireCharging - In the implementation block
@property (assign,nonatomic) unsigned long long singleDeviceSyncIntervalInDays;              //@synthesize singleDeviceSyncIntervalInDays=_singleDeviceSyncIntervalInDays - In the implementation block
@property (nonatomic,retain) NSDictionary * streamNamesToSync;                               //@synthesize streamNamesToSync=_streamNamesToSync - In the implementation block
@property (nonatomic,retain) NSArray * streamNamesToAlwaysSync;                              //@synthesize streamNamesToAlwaysSync=_streamNamesToAlwaysSync - In the implementation block
@property (nonatomic,retain) NSArray * streamNamesWithAdditionsTriggeringSync;               //@synthesize streamNamesWithAdditionsTriggeringSync=_streamNamesWithAdditionsTriggeringSync - In the implementation block
@property (nonatomic,retain) NSArray * streamNamesWithDeletionsTriggeringSync;               //@synthesize streamNamesWithDeletionsTriggeringSync=_streamNamesWithDeletionsTriggeringSync - In the implementation block
@property (assign,nonatomic) unsigned long long syncBatchSizeInEvents;                       //@synthesize syncBatchSizeInEvents=_syncBatchSizeInEvents - In the implementation block
@property (assign,nonatomic) unsigned long long maxBatchesPerSync;                           //@synthesize maxBatchesPerSync=_maxBatchesPerSync - In the implementation block
@property (assign,nonatomic) unsigned long long syncTimeoutInSeconds;                        //@synthesize syncTimeoutInSeconds=_syncTimeoutInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long triggeredSyncDelayInSeconds;                 //@synthesize triggeredSyncDelayInSeconds=_triggeredSyncDelayInSeconds - In the implementation block
+(id)policyForSyncTransportType:(long long)arg1 ;
+(id)policyFromDictionary:(id)arg1 ;
+(BOOL)cloudSyncDisabled;
+(id)disabledFeaturesForSyncType:(id)arg1 transports:(long long)arg2 ;
+(BOOL)rapportSyncDisabled;
+(void)setOkToDownloadPolicyUpdates:(BOOL)arg1 ;
-(unsigned long long)syncTimeoutInSeconds;
-(void)setStreamNamesWithDeletionsTriggeringSync:(NSArray *)arg1 ;
-(void)setStreamNamesToAlwaysSync:(NSArray *)arg1 ;
-(id)queryStartDateWithSyncType:(id)arg1 previousHighWaterMark:(id)arg2 ;
-(void)setMinSyncsPerDay:(unsigned long long)arg1 ;
-(void)setStreamNamesWithAdditionsTriggeringSync:(NSArray *)arg1 ;
-(unsigned long long)policyDownloadIntervalInDays;
-(void)setSyncBatchSizeInEvents:(unsigned long long)arg1 ;
-(unsigned long long)minSyncWindowInSeconds;
-(unsigned long long)minSyncsPerDay;
-(unsigned long long)maxBatchesPerSync;
-(void)setMaxSyncPeriodInDays:(unsigned long long)arg1 ;
-(void)setPushTriggersSync:(BOOL)arg1 ;
-(id)streamNamesToSyncWithDisabledFeatures:(id)arg1 ;
-(unsigned long long)maxSyncPeriodInDays;
-(void)setPolicyDownloadIntervalInDays:(unsigned long long)arg1 ;
-(BOOL)syncDisabled;
-(double)hoursBetweenSyncsWhenIsSingleDevice:(BOOL)arg1 urgency:(unsigned long long)arg2 ;
-(unsigned long long)singleDeviceSyncIntervalInDays;
-(NSString *)name;
-(void)setMinSyncWindowInSeconds:(unsigned long long)arg1 ;
-(void)setTriggeredSyncDelayInSeconds:(unsigned long long)arg1 ;
-(void)setSyncTimeoutInSeconds:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)highPriorityForSyncUpWithSyncType:(id)arg1 lastSyncDate:(id)arg2 ;
-(unsigned long long)numChangesTriggeringSync;
-(NSArray *)streamNamesWithDeletionsTriggeringSync;
-(void)setSyncDisabled:(BOOL)arg1 ;
-(NSArray *)streamNamesToAlwaysSync;
-(void)setSingleDeviceSyncIntervalInDays:(unsigned long long)arg1 ;
-(unsigned long long)maxSyncsPerDay;
-(void)setStreamNamesToSync:(NSDictionary *)arg1 ;
-(double)hoursBetweenSyncsWhenIsSingleDevice:(BOOL)arg1 ;
-(BOOL)pushTriggersSync;
-(BOOL)canDeferSyncOperationWithSyncType:(id)arg1 ;
-(unsigned long long)minSyncIntervalInSeconds;
-(BOOL)requireCharging;
-(id)queryStartDateWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 previousHighWaterMark:(id)arg4 ;
-(void)setMaxSyncsPerDay:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setMinSyncIntervalInSeconds:(unsigned long long)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(BOOL)highPriorityForSyncDownWithSyncType:(id)arg1 ;
-(unsigned long long)syncBatchSizeInEvents;
-(unsigned long long)triggeredSyncDelayInSeconds;
-(void)setMaxSyncDownIntervalInDays:(unsigned long long)arg1 ;
-(NSNumber *)version;
-(void)setMaxBatchesPerSync:(unsigned long long)arg1 ;
-(void)setNumChangesTriggeringSync:(unsigned long long)arg1 ;
-(BOOL)canPerformSyncOperationWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 isCharging:(BOOL)arg4 ;
-(void)setRequireCharging:(BOOL)arg1 ;
-(NSArray *)streamNamesWithAdditionsTriggeringSync;
-(id)streamNamesToSyncWithSyncType:(id)arg1 transportType:(long long)arg2 ;
-(unsigned long long)maxSyncDownIntervalInDays;
-(NSDictionary *)streamNamesToSync;
@end

