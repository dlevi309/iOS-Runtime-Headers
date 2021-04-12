/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/_PASDatabaseMigrationProtocol.h>

@class PPSQLDatabaseHandlePool, NSCondition, NSString;

@interface PPSQLDatabase : NSObject <_PASDatabaseMigrationProtocol> {

	PPSQLDatabaseHandlePool* _handlePool;
	NSCondition* _handlePoolCond;
	NSString* _path;
	unsigned char _migrationCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)tableNameForTable:(unsigned char)arg1 ;
+(id)nonMigratingToolsInstance;
+(id)nonMigratingToolsInstanceWithParentDirectory:(id)arg1 ;
+(void)dropTableWithName:(id)arg1 txnWitness:(id)arg2 ;
-(id)init;
-(BOOL)isInMemory;
-(id)migrations;
-(id)queriesToSkipFromEmptyToVersion:(unsigned*)arg1 ;
-(id)databaseHandle;
-(id)stats;
-(BOOL)_removeCorruptionMarker;
-(BOOL)migrateToVersion:(unsigned)arg1 ;
-(id)_initInStandardParentDirectoryWithPerformMigrations:(BOOL)arg1 ;
-(id)initWithTemporaryInMemoryDatabaseAndPerformMigrations:(BOOL)arg1 ;
-(id)initWithParentDirectory:(id)arg1 performMigrations:(BOOL)arg2 ;
-(id)_initWithPath:(id)arg1 performMigrations:(BOOL)arg2 ;
-(id)_openFreshHandleForClient:(unsigned char)arg1 ;
-(void)_enableQueryLoggingForHandle:(id)arg1 ;
-(void)_disableQueryLoggingForHandle:(id)arg1 ;
-(id)_nullableHandleWithClient:(unsigned char)arg1 ;
-(id)handleWithClient:(unsigned char)arg1 ;
-(id)_acquireReadOnlyHandleWithClient:(unsigned char)arg1 ;
-(void)_releaseReadOnlyHandle:(id)arg1 client:(unsigned char)arg2 ;
-(void)readTransactionWithClient:(unsigned char)arg1 block:(/*^block*/id)arg2 ;
-(void)writeTransactionWithClient:(unsigned char)arg1 block:(/*^block*/id)arg2 ;
-(id)checkWithError:(id*)arg1 ;
-(id)_allTables;
-(BOOL)_isCorruptionMarkerPresent;
-(BOOL)_handleCorruption;
-(BOOL)unmigrate;
-(unsigned long long)maxSchemaVersion;
-(BOOL)_prepareDatabaseHandleForMigration;
@end

