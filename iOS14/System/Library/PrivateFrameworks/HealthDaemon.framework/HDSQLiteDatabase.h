/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDSQLiteDatabaseDelegate;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSURL, HDSQLiteVFS, NSString, HDSQLiteStatementCache, NSError, NSNumber;

@interface HDSQLiteDatabase : NSObject {

	sqlite3Ref _db;
	BOOL _isInTransaction;
	BOOL _requiresRollback;
	long long _transactionType;
	NSMutableDictionary* _attachedDatabaseURLsByName;
	AB _transactionInterruptRequested;
	BOOL _isHandlingTransactionEnd;
	NSMutableArray* _beforeCommitBlocks;
	NSMutableArray* _onCommitBlocks;
	NSMutableArray* _onRollbackBlocks;
	os_unfair_lock_s _interruptionLock;
	BOOL _writer;
	BOOL _checkpointRequired;
	int _corruptionResultCode;
	NSURL* _fileURL;
	HDSQLiteVFS* _virtualFileSystem;
	NSString* _fileProtectionType;
	id<HDSQLiteDatabaseDelegate> _delegate;
	long long _cacheScope;
	HDSQLiteStatementCache* _statementCache;
	NSError* _corruptionError;

}

@property (assign,nonatomic,__weak) id<HDSQLiteDatabaseDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long cacheScope;                                      //@synthesize cacheScope=_cacheScope - In the implementation block
@property (nonatomic,readonly) HDSQLiteStatementCache * statementCache;                 //@synthesize statementCache=_statementCache - In the implementation block
@property (assign) BOOL transactionInterruptRequested; 
@property (nonatomic,copy,readonly) NSError * corruptionError;                          //@synthesize corruptionError=_corruptionError - In the implementation block
@property (nonatomic,readonly) int corruptionResultCode;                                //@synthesize corruptionResultCode=_corruptionResultCode - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fileURL;                                    //@synthesize fileURL=_fileURL - In the implementation block
@property (getter=isOpen,nonatomic,readonly) BOOL open; 
@property (assign,getter=isWriter,nonatomic) BOOL writer;                               //@synthesize writer=_writer - In the implementation block
@property (nonatomic,retain) HDSQLiteVFS * virtualFileSystem;                           //@synthesize virtualFileSystem=_virtualFileSystem - In the implementation block
@property (nonatomic,copy) NSString * fileProtectionType;                               //@synthesize fileProtectionType=_fileProtectionType - In the implementation block
@property (assign,nonatomic) BOOL checkpointRequired;                                   //@synthesize checkpointRequired=_checkpointRequired - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * lastInsertRowID; 
+(id)highFrequencyDatabaseURLWithProfileDirectoryPath:(id)arg1 ;
+(int)_copyContentsFromDatabase:(sqlite3Ref)arg1 toDatabase:(sqlite3Ref)arg2 ;
+(id)memoryDatabaseFromURL:(id)arg1 ;
+(id)protectedDatabaseURLWithProfileDirectoryPath:(id)arg1 ;
+(id)mainDatabaseURLWithProfileDirectoryPath:(id)arg1 ;
+(BOOL)databaseSchemas:(id)arg1 containTable:(id)arg2 ;
-(long long)cacheScope;
-(int)_openForWriting:(BOOL)arg1 additionalFlags:(int)arg2 error:(id*)arg3 ;
-(BOOL)columnIsNullable:(id)arg1 inTable:(id)arg2 error:(id*)arg3 ;
-(id)_statementCache;
-(BOOL)foreignKeyExistsFromTable:(id)arg1 column:(id)arg2 toTable:(id)arg3 column:(id)arg4 error:(id*)arg5 ;
-(BOOL)table:(id)arg1 hasColumnWithName:(id)arg2 error:(id*)arg3 ;
-(BOOL)_verifyDatabaseOpenAndReturnError:(id*)arg1 ;
-(int)getChangesCount;
-(BOOL)deleteRowsFromDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id*)arg3 ;
-(id)_schemaForTableWithName:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(void)beforeCommit:(/*^block*/id)arg1 ;
-(void)onCommit:(/*^block*/id)arg1 orRollback:(/*^block*/id)arg2 ;
-(id<HDSQLiteDatabaseDelegate>)delegate;
-(BOOL)isOpen;
-(id)_schemaForIndexWithName:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(NSNumber *)lastInsertRowID;
-(BOOL)correlationCountForDataEntitySubclassTable:(id)arg1 count:(long long*)arg2 error:(id*)arg3 ;
-(void)close;
-(int)openWithError:(id*)arg1 ;
-(NSString *)fileProtectionType;
-(BOOL)_handleInterruptionWithError:(id*)arg1 ;
-(BOOL)_executeUncachedSQL:(id)arg1 error:(id*)arg2 ;
-(BOOL)performIntegrityCheckOnDatabase:(id)arg1 error:(id*)arg2 integrityErrorHandler:(/*^block*/id)arg3 ;
-(BOOL)accessHFDForReadingWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(NSError *)corruptionError;
-(int)openForReadingWithError:(id*)arg1 ;
-(id)initMemoryDatabase;
-(id)dumpSchemaWithError:(id*)arg1 ;
-(BOOL)_executeSQL:(id)arg1 cache:(BOOL)arg2 error:(id*)arg3 bindingHandler:(/*^block*/id)arg4 enumerationHandler:(/*^block*/id)arg5 ;
-(BOOL)detachDatabaseWithName:(id)arg1 error:(id*)arg2 ;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)setFileProtectionType:(NSString *)arg1 ;
-(NSURL *)fileURL;
-(BOOL)deleteDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id*)arg3 ;
-(BOOL)_stepStatement:(sqlite3_stmtRef)arg1 hasRow:(BOOL*)arg2 error:(id*)arg3 ;
-(void)setDelegate:(id<HDSQLiteDatabaseDelegate>)arg1 ;
-(void)setCheckpointRequired:(BOOL)arg1 ;
-(BOOL)checkpointRequired;
-(long long)userVersionWithDatabaseName:(id)arg1 error:(id*)arg2 ;
-(BOOL)performTransactionWithType:(long long)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)executeUncachedSQL:(id)arg1 error:(id*)arg2 ;
-(BOOL)setUserVersion:(long long)arg1 withDatabaseName:(id)arg2 error:(id*)arg3 ;
-(int)corruptionResultCode;
-(BOOL)incrementalVacuumDatabaseIfNeeded:(id)arg1 error:(id*)arg2 ;
-(BOOL)_integerValueForPragma:(id)arg1 databaseName:(id)arg2 value:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)detachProtectedDatabaseWithError:(id*)arg1 ;
-(BOOL)_executeUncachedSQL:(id)arg1 error:(id*)arg2 retryIfBusy:(BOOL)arg3 interruptible:(BOOL)arg4 ;
-(void)setVirtualFileSystem:(HDSQLiteVFS *)arg1 ;
-(id)getLastErrorWithResultCode:(int)arg1 ;
-(BOOL)enableIncrementalAutovacuumForDatabaseWithName:(id)arg1 error:(id*)arg2 ;
-(long long)validateForeignKeysForTable:(id)arg1 databaseName:(id)arg2 error:(id*)arg3 ;
-(BOOL)attachProtectedDatabaseWithURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)attachDatabaseWithName:(id)arg1 fileURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)executeUncachedSQL:(id)arg1 error:(id*)arg2 bindingHandler:(/*^block*/id)arg3 enumerationHandler:(/*^block*/id)arg4 ;
-(HDSQLiteVFS *)virtualFileSystem;
-(id)statementsForDeleteRowsFromDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id*)arg3 ;
-(id)_tableNamesForDatabaseWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)isDatabaseWithNameAttached:(id)arg1 ;
-(void)setCacheScope:(long long)arg1 ;
-(id)_schemaForDatabaseWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)_executeStatementWithError:(id*)arg1 statementProvider:(/*^block*/id)arg2 bindingHandler:(/*^block*/id)arg3 enumerationHandler:(/*^block*/id)arg4 ;
-(id)typeOfColumn:(id)arg1 inTable:(id)arg2 error:(id*)arg3 ;
-(BOOL)executeSQLStatements:(id)arg1 error:(id*)arg2 ;
-(void)setTransactionInterruptRequested:(BOOL)arg1 ;
-(BOOL)executeCachedStatementForKey:(const char*)arg1 error:(id*)arg2 SQLGenerator:(/*^block*/id)arg3 bindingHandler:(/*^block*/id)arg4 enumerationHandler:(/*^block*/id)arg5 ;
-(void)requireRollback;
-(BOOL)isWriter;
-(BOOL)deleteDataEntitySubclassTablesIfExist:(id)arg1 intermediateTables:(id)arg2 error:(id*)arg3 ;
-(BOOL)isProtectedDatabaseAttached;
-(BOOL)transactionInterruptRequested;
-(void)setWriter:(BOOL)arg1 ;
-(void)accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)accessHFDForWritingWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_setPragma:(id)arg1 integerValue:(long long)arg2 withDatabaseName:(id)arg3 error:(id*)arg4 ;
-(BOOL)executeSQL:(id)arg1 error:(id*)arg2 bindingHandler:(/*^block*/id)arg3 enumerationHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(HDSQLiteStatementCache *)statementCache;
-(id)queryPlanForSQL:(id)arg1 error:(id*)arg2 ;
@end

