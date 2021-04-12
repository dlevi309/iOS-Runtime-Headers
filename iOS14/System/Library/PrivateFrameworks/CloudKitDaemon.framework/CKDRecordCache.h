/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue;
@class CKSQLite, CKSQLitePool, CKDClientContext, NSNumber, NSObject, NSDate;

@interface CKDRecordCache : NSObject {

	CKSQLite* _db;
	CKSQLitePool* _dbPool;
	CKDClientContext* _context;
	long long _scope;
	NSNumber* _explicitCacheSizeLimit;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _lastExpiryAttempt;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CKSQLite * db;                                   //@synthesize db=_db - In the implementation block
@property (nonatomic,retain) CKSQLitePool * dbPool;                           //@synthesize dbPool=_dbPool - In the implementation block
@property (nonatomic,retain) CKDClientContext * context;                      //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long scope;                                 //@synthesize scope=_scope - In the implementation block
@property (nonatomic,retain) NSDate * lastExpiryAttempt;                      //@synthesize lastExpiryAttempt=_lastExpiryAttempt - In the implementation block
@property (nonatomic,retain) NSNumber * explicitCacheSizeLimit;               //@synthesize explicitCacheSizeLimit=_explicitCacheSizeLimit - In the implementation block
+(id)_expiryDateFormatter;
-(CKSQLite *)db;
-(void)setScope:(long long)arg1 ;
-(long long)scope;
-(id)_dsid;
-(void)open;
-(void)close;
-(unsigned long long)recordCacheSizeLimit;
-(CKDClientContext *)context;
-(CKSQLitePool *)dbPool;
-(void)setDb:(CKSQLite *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setContext:(CKDClientContext *)arg1 ;
-(BOOL)_cachedRecordKnownUserKeyData:(id)arg1 satisfiesRequiredKeys:(id)arg2 ;
-(id)_recordWithID:(id)arg1 requiredKeys:(id)arg2 ;
-(BOOL)_cachedRecordHasValidAssets:(id)arg1 forRequiredKeys:(id)arg2 ;
-(id)_trimRecord:(id)arg1 toRequiredKeys:(id)arg2 ;
-(unsigned long long)_lockedSizeOfAllRecordsInDb;
-(void)_attemptRecordExpiryIfNeeded;
-(id)recordsWithIDs:(id)arg1 requiredKeys:(id)arg2 ;
-(void)clearAssetAuthTokensForRecord:(id)arg1 ;
-(void)addRecord:(id)arg1 knownUserKeys:(id)arg2 ;
-(NSDate *)lastExpiryAttempt;
-(void)setLastExpiryAttempt:(NSDate *)arg1 ;
-(void)scheduleRecordExpirationWithExpiryDate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSNumber *)explicitCacheSizeLimit;
-(id)initWithDatabase:(id)arg1 dbPool:(id)arg2 context:(id)arg3 scope:(long long)arg4 ;
-(void)releaseDatabase;
-(id)recordWithID:(id)arg1 requiredKeys:(id)arg2 ;
-(unsigned long long)numberOfRecordsWithID:(id)arg1 ;
-(id)etagForRecordID:(id)arg1 requiredKeys:(id)arg2 ;
-(void)deleteRecordWithID:(id)arg1 ;
-(void)clearAllRecordsInScope;
-(void)clearAllRecords;
-(void)clearAllRecordsForZoneWithID:(id)arg1 ;
-(void)clearAssetAuthTokensForRecordWithID:(id)arg1 ;
-(void)setDbPool:(CKSQLitePool *)arg1 ;
-(void)setExplicitCacheSizeLimit:(NSNumber *)arg1 ;
@end

