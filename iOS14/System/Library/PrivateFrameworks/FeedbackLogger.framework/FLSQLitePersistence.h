/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FeedbackLogger.framework/FeedbackLogger
*/


@protocol OS_os_log;
#import <FeedbackLogger/FeedbackLogger-Structs.h>
@class NSString, NSObject, FLLoggingContext;

@interface FLSQLitePersistence : NSObject {

	AB _configured;
	int _isEntitled;
	NSString* _databasePath;
	sqlite3Ref _db;
	sqlite3_stmtRef _insertRecordsStatement;
	sqlite3_stmtRef _iteratePayloadStatement;
	NSObject*<OS_os_log> _log;
	FLLoggingContext* _context;
	NSString* _bundleIdentifier;
	unsigned long long _maxBatchPayloadInBytes;
	unsigned long long _maxAllowedDatabaseSizeInBytes;
	NSString* _currentBatchIdentifier;
	unsigned long long _currentBatchPayloadSize;

}

@property (nonatomic,copy,readonly) NSString * databasePath;                                //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,nonatomic) sqlite3Ref db;                                                 //@synthesize db=_db - In the implementation block
@property (assign,nonatomic) sqlite3_stmtRef insertRecordsStatement;                        //@synthesize insertRecordsStatement=_insertRecordsStatement - In the implementation block
@property (assign,nonatomic) sqlite3_stmtRef iteratePayloadStatement;                       //@synthesize iteratePayloadStatement=_iteratePayloadStatement - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                      //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) FLLoggingContext * context;                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) AB configured;                                                 //@synthesize configured=_configured - In the implementation block
@property (assign,nonatomic) int isEntitled;                                                //@synthesize isEntitled=_isEntitled - In the implementation block
@property (assign,nonatomic) unsigned long long maxBatchPayloadInBytes;                     //@synthesize maxBatchPayloadInBytes=_maxBatchPayloadInBytes - In the implementation block
@property (assign,nonatomic) unsigned long long maxAllowedDatabaseSizeInBytes;              //@synthesize maxAllowedDatabaseSizeInBytes=_maxAllowedDatabaseSizeInBytes - In the implementation block
@property (nonatomic,copy) NSString * currentBatchIdentifier;                               //@synthesize currentBatchIdentifier=_currentBatchIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long currentBatchPayloadSize;                    //@synthesize currentBatchPayloadSize=_currentBatchPayloadSize - In the implementation block
+(id)batchStatusDescription:(int)arg1 ;
-(NSString *)databasePath;
-(sqlite3Ref)db;
-(BOOL)persist:(id)arg1 ;
-(BOOL)open;
-(NSObject*<OS_os_log>)log;
-(int)isEntitled;
-(NSString *)bundleIdentifier;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(FLLoggingContext *)context;
-(void)setDb:(sqlite3Ref)arg1 ;
-(void)dealloc;
-(AB)configured;
-(void)setConfigured:(AB)arg1 ;
-(void)setContext:(FLLoggingContext *)arg1 ;
-(void)setIsEntitled:(int)arg1 ;
-(BOOL)closeOpenBatches;
-(BOOL)purgeBatch:(id)arg1 ;
-(id)initWithPath:(id)arg1 application:(id)arg2 loggingContext:(id)arg3 ;
-(BOOL)initializeConnectionForUseBy:(int)arg1 ;
-(BOOL)tryPrepare:(const char*)arg1 preparedStatement:(inout sqlite3_stmt*)arg2 ;
-(id)_getBatchIdsHelper:(sqlite3_stmtRef)arg1 ;
-(BOOL)_updateMetadataHelperForBatch:(id)arg1 query:(const char*)arg2 ;
-(BOOL)_updateStatusHelperForBatch:(id)arg1 toStatus:(int)arg2 ;
-(BOOL)getIntValueForPragma:(id)arg1 into:(inout int*)arg2 ;
-(void)setCurrentBatchIdentifier:(NSString *)arg1 ;
-(void)setCurrentBatchPayloadSize:(unsigned long long)arg1 ;
-(BOOL)executeSQLStatement:(const char*)arg1 ;
-(BOOL)executeSQLStatement:(const char*)arg1 usingTransaction:(BOOL)arg2 ;
-(BOOL)__purgeStatementHelper:(const char*)arg1 forBatchId:(id)arg2 ;
-(BOOL)executeInTransactionMultipleSQLStatements:(id)arg1 ;
-(id)getBatchIdsWithStatus:(int)arg1 ;
-(id)getBatchIdsWithAllStatuses;
-(BOOL)getBatchMetadata:(id)arg1 batchMetadata:(inout id*)arg2 ;
-(BOOL)updateStatusForBatch:(id)arg1 toStatus:(int)arg2 ;
-(int)getDataVersion;
-(BOOL)initializeNewBatch;
-(BOOL)recoverOrphanedProcessingBatches;
-(BOOL)doBatchesHousekeeping;
-(BOOL)purgeAllBatches;
-(int)getSchemaVersion;
-(BOOL)updateSchema;
-(unsigned long long)maxAllowedDatabaseSizeInBytes;
-(BOOL)prepareSchema;
-(unsigned long long)getCurrentDatabaseSize;
-(BOOL)setDatabaseSizeLimit;
-(BOOL)prepareStatements;
-(BOOL)tryRolloverBatchIfNecessary:(unsigned long long)arg1 ;
-(BOOL)iteratePayloadForBatch:(id)arg1 codeblock:(/*^block*/id)arg2 ;
-(sqlite3_stmtRef)insertRecordsStatement;
-(void)setInsertRecordsStatement:(sqlite3_stmtRef)arg1 ;
-(sqlite3_stmtRef)iteratePayloadStatement;
-(void)setIteratePayloadStatement:(sqlite3_stmtRef)arg1 ;
-(unsigned long long)maxBatchPayloadInBytes;
-(void)setMaxBatchPayloadInBytes:(unsigned long long)arg1 ;
-(void)setMaxAllowedDatabaseSizeInBytes:(unsigned long long)arg1 ;
-(NSString *)currentBatchIdentifier;
-(unsigned long long)currentBatchPayloadSize;
@end

