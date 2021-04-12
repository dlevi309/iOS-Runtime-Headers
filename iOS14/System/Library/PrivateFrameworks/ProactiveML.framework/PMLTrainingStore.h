/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@class NSString, _PASSqliteDatabase;

@interface PMLTrainingStore : NSObject {

	NSString* _dbPath;
	_PASSqliteDatabase* _db;
	id _lockStateNotificationToken;
	BOOL _allowSkipSchema;
	/*^block*/id _sourceRecoverer;
	unsigned long long _maxTimesAccessed;

}
+(id)getSchema:(unsigned long long*)arg1 ;
+(long long)migrate:(id)arg1 to:(id)arg2 forStore:(id)arg3 ;
+(long long)_migrate:(id)arg1 forStore:(id)arg2 ;
+(id)_sessionDataToBatchWithNumberOfColumns:(unsigned long long)arg1 rowsData:(id)arg2 labelsData:(id)arg3 ;
+(BOOL)_runQueries:(id)arg1 andUpdateVersionTo:(unsigned)arg2 inTransactionOnDb:(id)arg3 forStore:(id)arg4 ;
+(double)lastUsedTimestampLimit;
+(void)setLastUsedTimestampLimit:(double)arg1 ;
+(id)inMemoryStoreForTesting;
-(BOOL)createSnapshot:(id)arg1 ;
-(void)limitSessionsByLastUsedTTL:(double)arg1 ;
-(id)init;
-(void)_registerUnlockHandler;
-(BOOL)_truncateDbIfCorrupted;
-(void)loadDataForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(BOOL)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 block:(/*^block*/id)arg7 ;
-(id)dbForTesting;
-(void)updateLastTrainingFeaturizationForModel:(id)arg1 andData:(id)arg2 ;
-(id)initWithPath:(id)arg1 ;
-(unsigned long long)numberOfRowsInTable:(id)arg1 ;
-(void)updateSessionsAndLabelForModel:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)deleteSessionsWithBundleId:(id)arg1 ;
-(void)_loadDataForModel:(id)arg1 positiveRowId:(unsigned long long)arg2 negativeRowId:(unsigned long long)arg3 excludeItemIdsUsedWithin:(double)arg4 limit:(unsigned long long)arg5 onlyAppleInternal:(BOOL)arg6 positiveLabel:(unsigned long long)arg7 skew:(double)arg8 block:(/*^block*/id)arg9 ;
-(void)storeSession:(id)arg1 label:(long long)arg2 model:(id)arg3 bundleId:(id)arg4 domainId:(id)arg5 itemIds:(id)arg6 isAppleInternal:(BOOL)arg7 ;
-(void)logDbNotOpenEvent;
-(long long)_unsafeOpenDbIfUnlocked;
-(BOOL)isDbOpen;
-(void)loadSessionsForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labels:(id)arg3 batchSize:(unsigned long long)arg4 block:(/*^block*/id)arg5 ;
-(void)setSourceRecoverer:(/*^block*/id)arg1 ;
-(long long)migrateTo:(id)arg1 ;
-(unsigned long long)sessionDescriptorIdFor:(id)arg1 ;
-(void)enumerateSessionDescriptorsUsingBlock:(/*^block*/id)arg1 ;
-(id)sessionStatsForSessionDescriptor:(id)arg1 ;
-(void)setMaxTimesAccessed:(unsigned long long)arg1 ;
-(void)limitSessionsByMaxTimesAccessed;
-(id)recoverSourceFromData:(id)arg1 ;
-(void)storeSession:(id)arg1 source:(id)arg2 label:(long long)arg3 model:(id)arg4 ;
-(id)sessionStats;
-(void)_loadBatchForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labels:(id)arg3 batchSize:(unsigned long long)arg4 block:(/*^block*/id)arg5 ;
-(void)storeSession:(id)arg1 source:(id)arg2 label:(long long)arg3 model:(id)arg4 bundleId:(id)arg5 domainId:(id)arg6 itemIds:(id)arg7 isAppleInternal:(BOOL)arg8 ;
-(void)vacuumDb;
-(void)loadDataForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labels:(id)arg3 batchSize:(unsigned long long)arg4 block:(/*^block*/id)arg5 ;
-(void)deleteSessionsWithBundleId:(id)arg1 itemId:(id)arg2 ;
-(void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(BOOL)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 block:(/*^block*/id)arg7 ;
-(void)_unregisterUnlockHandler;
-(id)initWithPath:(id)arg1 allowSkipSchema:(BOOL)arg2 ;
-(id)sessionDimensionsForModel:(id)arg1 startingRowId:(unsigned long long)arg2 onlyAppleInternal:(BOOL)arg3 labelFilter:(id)arg4 ;
-(long long)_openDbIfUnlocked;
-(void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(BOOL)arg4 block:(/*^block*/id)arg5 ;
-(void)limitSessionsForEachLabelWithSessionDescriptor:(id)arg1 totalSessionLimit:(unsigned long long)arg2 ;
-(void)limitSessionsWithSessionDescriptor:(id)arg1 withLabel:(id)arg2 limit:(unsigned long long)arg3 ;
-(void)_loadDataForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labelAndStartRows:(id)arg3 batchSize:(unsigned long long)arg4 supportPerLabel:(unsigned long long)arg5 block:(/*^block*/id)arg6 ;
-(void)_loadDataFromLabelAndTuples:(id)arg1 model:(id)arg2 numberOfRows:(unsigned long long)arg3 numberOfColumns:(unsigned long long)arg4 lastUsedMax:(double)arg5 block:(/*^block*/id)arg6 ;
-(void)closeDbForTesting;
-(id)getSchema:(unsigned long long*)arg1 ;
-(void)storeSession:(id)arg1 label:(long long)arg2 model:(id)arg3 ;
-(id)lastTrainingFeaturizationForModelName:(id)arg1 andLocale:(id)arg2 ;
-(void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 withSkew:(double)arg3 andLimit:(int)arg4 block:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)deleteSessionsWithBundleId:(id)arg1 domainId:(id)arg2 ;
@end

