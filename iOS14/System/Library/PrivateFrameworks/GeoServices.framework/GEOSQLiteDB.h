/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_group;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, NSError, NSURL, NSDictionary, NSMutableArray, NSMapTable, NSString;

@interface GEOSQLiteDB : NSObject {

	NSObject*<OS_os_log> _log;
	sqlite3Ref _db;
	NSError* _lastError;
	NSURL* _databaseFileURL;
	int _sqliteFlags;
	NSDictionary* _pragmas;
	/*^block*/id _setupBlock;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _externalFilesQueue;
	NSObject*<OS_dispatch_group> _externalFilesGroup;
	NSMutableArray* _externalFilesActiveChannels;
	NSMapTable* _preparedStatements;
	BOOL _isInTransaction;
	BOOL _isTemporaryInMemoryDatabase;
	BOOL _didEncounterExternalResourceErrorInTransaction;
	NSMutableArray* _filesAddedDuringTransaction;
	NSMutableArray* _filesDeletedDuringTransaction;
	NSMapTable* _virtualTables;
	SCD_Union_GE95 _didTearDown;

}

@property (nonatomic,readonly) sqlite3Ref sqliteDB; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> isolationQueue; 
@property (nonatomic,readonly) NSString * dbFilePath; 
@property (nonatomic,readonly) NSError * lastError; 
@property (nonatomic,readonly) BOOL isDBReady; 
@property (nonatomic,readonly) NSObject*<OS_os_log> log; 
@property (nonatomic,readonly) NSDictionary * pragmas; 
@property (assign,nonatomic) long long user_version; 
+(id)defaultPragmas;
+(BOOL)renameAllDBFilesFrom:(id)arg1 to:(id)arg2 ;
+(id)_findAllDBFilesForURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)vacuum;
-(BOOL)_bindParameter:(const char*)arg1 inStatement:(sqlite3_stmtRef)arg2 error:(id*)arg3 withBinder:(/*^block*/id)arg4 ;
-(BOOL)setup;
-(NSError *)lastError;
-(void)tearDown;
-(int)_openDatabaseFile;
-(void)setUser_version:(long long)arg1 ;
-(BOOL)bindBlobNoCopyParameter:(const char*)arg1 toValue:(id)arg2 inStatement:(sqlite3_stmtRef)arg3 error:(id*)arg4 ;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(BOOL)executeStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(BOOL)_deleteAllDatabaseFilesIfCorrupt:(int)arg1 ;
-(BOOL)executeInTransaction:(/*^block*/id)arg1 ;
-(BOOL)writeBlobData:(id)arg1 toTable:(const char*)arg2 column:(const char*)arg3 rowID:(long long)arg4 error:(id*)arg5 ;
-(long long)lastInsertRowID;
-(BOOL)bindZeroBlobParameter:(const char*)arg1 length:(unsigned long long)arg2 inStatement:(sqlite3_stmtRef)arg3 error:(id*)arg4 ;
-(int)_openAndConfigure;
-(NSString *)dbFilePath;
-(BOOL)deleteExternalResourceAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)isDBReady;
-(BOOL)bindBlobParameter:(const char*)arg1 toValue:(id)arg2 inStatement:(sqlite3_stmtRef)arg3 error:(id*)arg4 ;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(BOOL)bindNullParameter:(const char*)arg1 inStatement:(sqlite3_stmtRef)arg2 error:(id*)arg3 ;
-(BOOL)bindRealParameter:(const char*)arg1 toValue:(double)arg2 inStatement:(sqlite3_stmtRef)arg3 error:(id*)arg4 ;
-(BOOL)executeStatement:(id)arg1 statementBlock:(/*^block*/id)arg2 ;
-(BOOL)createTable:(const char*)arg1 withDrop:(const char*)arg2 ;
-(BOOL)_openAndConfigureWithRetryIfCorrupt;
-(BOOL)writeExternalResourceWithData:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(int)intForColumn:(int)arg1 inStatment:(sqlite3_stmtRef)arg2 ;
-(void)_channelCleanupFailedWithError:(int)arg1 ;
-(id)getAllTables;
-(id)stringForColumn:(int)arg1 inStatment:(sqlite3_stmtRef)arg2 ;
-(void)_writeTransactionExternalResourceWithData:(id)arg1 toURL:(id)arg2 ;
-(void)executeAsync:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(BOOL)bindTextParameter:(const char*)arg1 toValue:(id)arg2 inStatement:(sqlite3_stmtRef)arg3 error:(id*)arg4 ;
-(void)_debug_lockDB:(id)arg1 ;
-(BOOL)moveExternalResourceAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(void)executeSync:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)initWithQueueName:(const char*)arg1 log:(id)arg2 databaseFileURL:(id)arg3 sqliteFlags:(int)arg4 pragmas:(id)arg5 setupBlock:(/*^block*/id)arg6 ;
-(BOOL)_deleteAllDBFiles;
-(BOOL)dropTablesLike:(id)arg1 ;
-(BOOL)reportSQLiteErrorCode:(int)arg1 method:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(sqlite3Ref)sqliteDB;
-(void)executeSync:(/*^block*/id)arg1 ;
-(void)_deleteAndReopenDatabaseIfCorrupt:(int)arg1 ;
-(id)UUIDForColumn:(int)arg1 inStatment:(sqlite3_stmtRef)arg2 ;
-(BOOL)registerVirtualTable:(id)arg1 ;
-(BOOL)deleteAllDBFiles;
-(void)_channelEncounteredError:(int)arg1 ;
-(void)_doneWritingToChannel:(id)arg1 ;
-(long long)user_version;
-(void)_execute:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)noCopyBlobForColumn:(int)arg1 inStatment:(sqlite3_stmtRef)arg2 ;
-(NSDictionary *)pragmas;
-(BOOL)bindIntParameter:(const char*)arg1 toValue:(int)arg2 inStatement:(sqlite3_stmtRef)arg3 error:(id*)arg4 ;
-(id)initWithQueueName:(const char*)arg1 logFacility:(const char*)arg2 dbFilePath:(id)arg3 sqliteFlags:(int)arg4 pragmas:(id)arg5 setupBlock:(/*^block*/id)arg6 ;
-(double)doubleForColumn:(int)arg1 inStatment:(sqlite3_stmtRef)arg2 ;
-(void)_closeDB;
-(BOOL)bindParameter:(const char*)arg1 toUUID:(id)arg2 inStatement:(sqlite3_stmtRef)arg3 error:(id*)arg4 ;
-(BOOL)unregisterVirtualTable:(id)arg1 ;
-(BOOL)bindInt64Parameter:(const char*)arg1 toValue:(long long)arg2 inStatement:(sqlite3_stmtRef)arg3 error:(id*)arg4 ;
-(long long)int64ForColumn:(int)arg1 inStatment:(sqlite3_stmtRef)arg2 ;
-(int)_setPragmas;
-(id)_blobForColumn:(int)arg1 inStatment:(sqlite3_stmtRef)arg2 noCopy:(BOOL)arg3 ;
-(void)clearStatement:(id)arg1 ;
-(void)_createParentDirectory;
-(BOOL)prepareStatement:(const char*)arg1 forKey:(id)arg2 ;
-(BOOL)_waitForAllTransactionExternalResources;
-(id)getTablesLike:(id)arg1 ;
-(void)executeAsync:(/*^block*/id)arg1 ;
-(void)_debug_unlockDB:(id)arg1 ;
-(BOOL)statementForKey:(id)arg1 statementBlock:(/*^block*/id)arg2 ;
-(sqlite3_stmtRef)statementForKey:(id)arg1 ;
-(BOOL)dropAllTables;
-(void)dealloc;
-(id)blobForColumn:(int)arg1 inStatment:(sqlite3_stmtRef)arg2 ;
@end

