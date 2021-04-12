/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDSQLiteDatabaseDelegate;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSURL, HDSQLiteStatementCache, NSNumber;

@interface HDSQLiteDatabase : NSObject {

	sqlite3Ref _db;
	BOOL _isInTransaction;
	BOOL _requiresRollback;
	long long _transactionType;
	NSMutableDictionary* _attachedDatabaseURLsByName;
	BOOL _isHandlingTransactionEnd;
	NSMutableArray* _beforeCommitBlocks;
	NSMutableArray* _onCommitBlocks;
	NSMutableArray* _onRollbackBlocks;
	BOOL _writer;
	BOOL _checkpointRequired;
	BOOL _hasEncounteredCorruptionError;
	int _corruptionResultCode;
	id<HDSQLiteDatabaseDelegate> _delegate;
	NSURL* _fileURL;
	long long _cacheScope;
	HDSQLiteStatementCache* _statementCache;

}

@property (nonatomic,readonly) long long statementCacheScope; 
@property (assign,nonatomic) long long cacheScope;                                      //@synthesize cacheScope=_cacheScope - In the implementation block
@property (nonatomic,readonly) HDSQLiteStatementCache * statementCache;                 //@synthesize statementCache=_statementCache - In the implementation block
@property (nonatomic,readonly) BOOL hasEncounteredCorruptionError;                      //@synthesize hasEncounteredCorruptionError=_hasEncounteredCorruptionError - In the implementation block
@property (nonatomic,readonly) int corruptionResultCode;                                //@synthesize corruptionResultCode=_corruptionResultCode - In the implementation block
@property (assign,nonatomic,__weak) id<HDSQLiteDatabaseDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (getter=isOpen,nonatomic,readonly) BOOL open; 
@property (assign,getter=isWriter,nonatomic) BOOL writer;                               //@synthesize writer=_writer - In the implementation block
@property (assign,nonatomic) BOOL checkpointRequired;                                   //@synthesize checkpointRequired=_checkpointRequired - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * lastInsertRowID; 
+(id)virtualFilesystemModule;
+(id)highFrequencyDatabaseURLWithProfileDirectoryPath:(id)arg1 ;
+(id)mainDatabaseURLWithProfileDirectoryPath:(id)arg1 ;
+(id)protectedDatabaseURLWithProfileDirectoryPath:(id)arg1 ;
-(void)dealloc;
-(void)close;
-(id<HDSQLiteDatabaseDelegate>)delegate;
-(void)setDelegate:(id<HDSQLiteDatabaseDelegate>)arg1 ;
-(NSURL *)fileURL;
-(BOOL)isOpen;
-(int)openWithError:(id*)arg1 ;
-(NSNumber *)lastInsertRowID;
-(BOOL)isWriter;
-(void)accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
-(id)_statementCache;
-(void)setWriter:(BOOL)arg1 ;
-(void)setCacheScope:(long long)arg1 ;
-(BOOL)executeSQL:(id)arg1 error:(id*)arg2 bindingHandler:(/*^block*/id)arg3 enumerationHandler:(/*^block*/id)arg4 ;
-(id)initWithDatabaseURL:(id)arg1 delegate:(id)arg2 ;
-(int)_openForWriting:(BOOL)arg1 additionalFlags:(int)arg2 error:(id*)arg3 ;
-(int)_copyContentsFromDatabase:(sqlite3Ref)arg1 toDatabase:(sqlite3Ref)arg2 ;
-(BOOL)_executeUncachedSQL:(id)arg1 error:(id*)arg2 retryIfBusy:(BOOL)arg3 ;
-(BOOL)_verifyDatabaseOpenAndReturnError:(id*)arg1 ;
-(id)getLastErrorWithResultCode:(int)arg1 ;
-(long long)statementCacheScope;
-(BOOL)_executeUncachedSQL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_executeSQL:(id)arg1 cache:(BOOL)arg2 error:(id*)arg3 bindingHandler:(/*^block*/id)arg4 enumerationHandler:(/*^block*/id)arg5 ;
-(BOOL)executeUncachedSQL:(id)arg1 error:(id*)arg2 bindingHandler:(/*^block*/id)arg3 enumerationHandler:(/*^block*/id)arg4 ;
-(BOOL)_stepStatement:(sqlite3_stmtRef)arg1 hasRow:(BOOL*)arg2 error:(id*)arg3 ;
-(BOOL)_prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)_setPragma:(id)arg1 integerValue:(long long)arg2 withDatabaseName:(id)arg3 error:(id*)arg4 ;
-(BOOL)_integerValueForPragma:(id)arg1 databaseName:(id)arg2 value:(long long*)arg3 error:(id*)arg4 ;
-(id)_schemaForTableWithName:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(BOOL)isDatabaseWithNameAttached:(id)arg1 ;
-(id)_tableNamesForDatabaseWithName:(id)arg1 error:(id*)arg2 ;
-(id)_schemaForDatabaseWithName:(id)arg1 error:(id*)arg2 ;
-(id)initMemoryDatabaseWithDelegate:(id)arg1 ;
-(id)initMemoryDatabaseFromURL:(id)arg1 delegate:(id)arg2 ;
-(id)initWithDatabaseURL:(id)arg1 copyingDatabase:(id)arg2 delegate:(id)arg3 ;
-(int)openForReadingWithError:(id*)arg1 ;
-(int)openWithFileProtectionCompleteUnlessOpenWithError:(id*)arg1 ;
-(int)getChangesCount;
-(BOOL)performTransactionWithType:(long long)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)executeUncachedSQL:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeSQLStatements:(id)arg1 error:(id*)arg2 ;
-(BOOL)setUserVersion:(long long)arg1 withDatabaseName:(id)arg2 error:(id*)arg3 ;
-(long long)userVersionWithDatabaseName:(id)arg1 error:(id*)arg2 ;
-(void)onCommit:(/*^block*/id)arg1 orRollback:(/*^block*/id)arg2 ;
-(void)beforeCommit:(/*^block*/id)arg1 ;
-(void)requireRollback;
-(long long)validateForeignKeysForTable:(id)arg1 databaseName:(id)arg2 error:(id*)arg3 ;
-(BOOL)table:(id)arg1 hasColumnWithName:(id)arg2 error:(id*)arg3 ;
-(BOOL)foreignKeyExistsFromTable:(id)arg1 column:(id)arg2 toTable:(id)arg3 column:(id)arg4 error:(id*)arg5 ;
-(id)typeOfColumn:(id)arg1 inTable:(id)arg2 error:(id*)arg3 ;
-(BOOL)columnIsNullable:(id)arg1 inTable:(id)arg2 error:(id*)arg3 ;
-(BOOL)enableIncrementalAutovacuumForDatabaseWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)incrementalVacuumDatabaseIfNeeded:(id)arg1 error:(id*)arg2 ;
-(BOOL)performIntegrityCheckWithError:(id*)arg1 integrityErrorHandler:(/*^block*/id)arg2 ;
-(id)queryPlanForSQL:(id)arg1 error:(id*)arg2 ;
-(BOOL)attachDatabaseWithName:(id)arg1 fileURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)detachDatabaseWithName:(id)arg1 error:(id*)arg2 ;
-(id)_schemaForIndexWithName:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(id)dumpSchemaWithError:(id*)arg1 ;
-(BOOL)checkpointRequired;
-(void)setCheckpointRequired:(BOOL)arg1 ;
-(long long)cacheScope;
-(HDSQLiteStatementCache *)statementCache;
-(BOOL)hasEncounteredCorruptionError;
-(int)corruptionResultCode;
-(id)highFrequencyDatabaseURL;
-(BOOL)accessHFDForReadingWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)accessHFDForWritingWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)deleteDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id*)arg3 ;
-(BOOL)isProtectedDatabaseAttached;
-(BOOL)attachProtectedDatabaseWithURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)detachProtectedDatabaseWithError:(id*)arg1 ;
-(BOOL)deleteRowsFromDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id*)arg3 ;
-(id)statementsForDeleteRowsFromDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id*)arg3 ;
-(BOOL)correlationCountForDataEntitySubclassTable:(id)arg1 count:(long long*)arg2 error:(id*)arg3 ;
@end
