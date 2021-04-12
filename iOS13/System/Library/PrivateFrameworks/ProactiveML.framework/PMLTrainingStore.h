/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@class NSString, _PASSqliteDatabase;

@interface PMLTrainingStore : NSObject {

	NSString* _dbPath;
	_PASSqliteDatabase* _db;
	id _lockStateNotificationToken;
	BOOL _allowSkipSchema;
	/*^block*/id _sourceRecoverer;

}
+(id)getSchema:(unsigned long long*)arg1 ;
+(long long)migrate:(id)arg1 to:(id)arg2 forStore:(id)arg3 ;
+(long long)_migrate:(id)arg1 forStore:(id)arg2 ;
+(BOOL)_runQueries:(id)arg1 andUpdateVersionTo:(unsigned)arg2 inTransactionOnDb:(id)arg3 forStore:(id)arg4 ;
+(double)lastUsedTimestampLimit;
+(void)setLastUsedTimestampLimit:(double)arg1 ;
+(id)inMemoryStoreForTesting;
-(id)init;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(BOOL)createSnapshot:(id)arg1 ;
-(unsigned long long)numberOfRowsInTable:(id)arg1 ;
-(void)setSourceRecoverer:(/*^block*/id)arg1 ;
-(id)lastTrainingFeaturizationForModelName:(id)arg1 andLocale:(id)arg2 ;
-(void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(BOOL)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 block:(/*^block*/id)arg7 ;
-(long long)_openDbIfUnlocked;
-(void)_registerUnlockHandler;
-(id)initWithPath:(id)arg1 allowSkipSchema:(BOOL)arg2 ;
-(void)storeSession:(id)arg1 label:(long long)arg2 model:(id)arg3 bundleId:(id)arg4 domainId:(id)arg5 itemIds:(id)arg6 isAppleInternal:(BOOL)arg7 ;
-(void)storeSession:(id)arg1 source:(id)arg2 label:(long long)arg3 model:(id)arg4 bundleId:(id)arg5 domainId:(id)arg6 itemIds:(id)arg7 isAppleInternal:(BOOL)arg8 ;
-(void)loadSessionsForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labels:(id)arg3 batchSize:(unsigned long long)arg4 supportPerLabel:(unsigned long long)arg5 block:(/*^block*/id)arg6 ;
-(id)sessionDimensionsForModel:(id)arg1 startingRowId:(unsigned long long)arg2 onlyAppleInternal:(BOOL)arg3 labelFilter:(id)arg4 ;
-(void)_loadSessionsFromLabelAndTuples:(id)arg1 model:(id)arg2 numberOfRows:(unsigned long long)arg3 numberOfColumns:(unsigned long long)arg4 lastUsedMax:(double)arg5 block:(/*^block*/id)arg6 ;
-(void)_loadSessionsForModel:(id)arg1 positiveRowId:(unsigned long long)arg2 negativeRowId:(unsigned long long)arg3 excludeItemIdsUsedWithin:(double)arg4 limit:(unsigned long long)arg5 onlyAppleInternal:(BOOL)arg6 positiveLabel:(unsigned long long)arg7 skew:(double)arg8 block:(/*^block*/id)arg9 ;
-(void)_loadSessionsForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labelAndStartRows:(id)arg3 batchSize:(unsigned long long)arg4 supportPerLabel:(unsigned long long)arg5 block:(/*^block*/id)arg6 ;
-(void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(BOOL)arg4 block:(/*^block*/id)arg5 ;
-(void)limitSessionsForEachLabelWithSessionDescriptor:(id)arg1 totalSessionLimit:(unsigned long long)arg2 ;
-(void)limitSessionsByLastUsedTTL:(double)arg1 ;
-(void)limitSessionsByMaxTimesAccessed;
-(void)limitLabeledSessionsWithSessionDescriptor:(id)arg1 label:(long long)arg2 limit:(unsigned long long)arg3 ;
-(void)deleteSessionsWithBundleId:(id)arg1 ;
-(void)deleteSessionsWithBundleId:(id)arg1 itemId:(id)arg2 ;
-(void)deleteSessionsWithBundleId:(id)arg1 domainId:(id)arg2 ;
-(id)sessionStats;
-(id)sessionStatsForSessionDescriptor:(id)arg1 ;
-(void)enumerateSessionDescriptorsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)sessionDescriptorIdFor:(id)arg1 ;
-(void)_unregisterUnlockHandler;
-(long long)_unsafeOpenDbIfUnlocked;
-(BOOL)_truncateDbIfCorrupted;
-(void)vacuumDb;
-(long long)migrateTo:(id)arg1 ;
-(void)updateSessionsAndLabelForModel:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)updateLastTrainingFeaturizationForModel:(id)arg1 andData:(id)arg2 ;
-(BOOL)isDbOpen;
-(id)getSchema:(unsigned long long*)arg1 ;
-(id)recoverSourceFromData:(id)arg1 ;
-(id)dbForTesting;
-(void)storeSession:(id)arg1 source:(id)arg2 label:(long long)arg3 model:(id)arg4 ;
-(void)storeSession:(id)arg1 label:(long long)arg2 model:(id)arg3 ;
-(void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 withSkew:(double)arg3 andLimit:(int)arg4 block:(/*^block*/id)arg5 ;
-(void)closeDbForTesting;
@end

