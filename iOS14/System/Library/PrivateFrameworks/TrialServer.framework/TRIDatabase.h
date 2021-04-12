/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/_PASDatabaseMigrationProtocol.h>

@protocol TRIPaths, TRIStorageManagementProtocol;
@class NSString, _PASSqliteDatabase, NSUserDefaults, _PASKVOHandler;

@interface TRIDatabase : NSObject <_PASDatabaseMigrationProtocol> {

	id<TRIPaths> _paths;
	id<TRIStorageManagementProtocol> _storageManagement;
	NSString* _databasePath;
	_PASSqliteDatabase* _db;
	NSUserDefaults* _defaults;
	_PASKVOHandler* _kvoHandler;
	AB _isQueryPlanLoggingEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)vacuum;
-(id)init;
-(BOOL)migrateToVersion:(unsigned)arg1 ;
-(void)_updateQueryPlanLogging;
-(PASDBTransactionCompletion_)writeTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(PASDBTransactionCompletion_)readTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(void)closePermanently;
-(id)migrations;
-(id)databaseHandle;
-(id)queriesToSkipFromEmptyToVersion:(unsigned*)arg1 ;
-(/*^block*/id)generalErrorHandlerWithOutError:(id*)arg1 ;
-(id)initWithPaths:(id)arg1 storageManagement:(id)arg2 ;
-(id)createTempTableContainingRowsFromQuery:(id)arg1 bind:(/*^block*/id)arg2 namePrefix:(id)arg3 transaction:(id)arg4 ;
-(BOOL)dropTableWithName:(id)arg1 transaction:(id)arg2 ;
-(id)initWithPaths:(id)arg1 databasePath:(id)arg2 storageManagement:(id)arg3 performMigrations:(BOOL)arg4 ;
-(void)_enableQueryPlanLogging;
-(void)_disableQueryPlanLogging;
-(id)initInMemoryAndPerformMigrations:(BOOL)arg1 ;
@end

