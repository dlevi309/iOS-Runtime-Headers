/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/_PASDatabaseMigrationProtocol.h>

@class NSRecursiveLock, PPSQLDatabaseHandlePool, NSCondition, NSString;

@interface PPSQLDatabase : NSObject <_PASDatabaseMigrationProtocol> {

	NSRecursiveLock* _writeLock;
	PPSQLDatabaseHandlePool* _handlePool;
	NSCondition* _handlePoolCond;
	NSString* _path;
	NSString* _parentDirectory;
	unsigned char _migrationCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)createTempTableContainingRowsFromQuery:(id)arg1 descriptiveTableName:(id)arg2 txnWitness:(id)arg3 bind:(/*^block*/id)arg4 ;
+(id)nonMigratingToolsInstance;
+(id)tableNameForTable:(unsigned char)arg1 ;
+(void)dropTableWithName:(id)arg1 txnWitness:(id)arg2 ;
+(id)nonMigratingToolsInstanceWithParentDirectory:(id)arg1 ;
-(BOOL)_handleCorruption;
-(id)sourceStatsForTableWithName:(id)arg1 medianRefCountNeeded:(BOOL)arg2 txnWitness:(id)arg3 ;
-(id)init;
-(BOOL)migrateToVersion:(unsigned)arg1 ;
-(void)_releaseReadOnlyHandle:(id)arg1 client:(unsigned char)arg2 ;
-(unsigned char)migration_ConvertLocationDescriptionsToLowercase;
-(id)checkWithError:(id*)arg1 ;
-(void)readTransactionWithClient:(unsigned char)arg1 block:(/*^block*/id)arg2 ;
-(id)_acquireReadOnlyHandleWithClient:(unsigned char)arg1 ;
-(BOOL)_prepareDatabaseHandleForMigration;
-(void)_enableQueryLoggingForHandle:(id)arg1 ;
-(id)initWithParentDirectory:(id)arg1 performMigrations:(BOOL)arg2 ;
-(id)_nullableHandleWithClient:(unsigned char)arg1 ;
-(id)_allTables;
-(BOOL)writeTransactionWithClient:(unsigned char)arg1 timeoutInSeconds:(double)arg2 block:(/*^block*/id)arg3 ;
-(id)_initInStandardParentDirectoryWithPerformMigrations:(BOOL)arg1 ;
-(BOOL)unmigrate;
-(void)_disableQueryLoggingForHandle:(id)arg1 ;
-(BOOL)isInMemory;
-(unsigned long long)maxSchemaVersion;
-(id)stats;
-(id)initWithTemporaryInMemoryDatabaseAndPerformMigrations:(BOOL)arg1 ;
-(void)writeTransactionWithClient:(unsigned char)arg1 block:(/*^block*/id)arg2 ;
-(id)parentDirectory;
-(id)handleWithClient:(unsigned char)arg1 ;
-(BOOL)optimizeDatabaseWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(id)_openFreshHandleForClient:(unsigned char)arg1 ;
-(BOOL)_isCorruptionMarkerPresent;
-(id)_initWithPath:(id)arg1 performMigrations:(BOOL)arg2 ;
-(id)migrations;
-(id)sourceStatsWithMedianRefCountNeeded:(BOOL)arg1 ;
-(id)sourceStatsWithMedianRefCountNeeded:(BOOL)arg1 table:(id)arg2 txnWitness:(id)arg3 ;
-(id)databaseHandle;
-(BOOL)_removeCorruptionMarker;
-(id)queriesToSkipFromEmptyToVersion:(unsigned*)arg1 ;
@end

