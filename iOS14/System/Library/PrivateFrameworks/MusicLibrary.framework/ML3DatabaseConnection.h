/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@protocol ML3DatabaseConnectionDelegate;
#import <MusicLibrary/MusicLibrary-Structs.h>
@class ML3DatabaseStatementCache, NSMutableArray, ML3DatabaseConnectionPool, NSString, NSUUID;

@interface ML3DatabaseConnection : NSObject {

	sqlite3Ref _sqlitedb;
	BOOL _isOpen;
	ML3DatabaseStatementCache* _statementCache;
	unsigned long long _statementsSinceLastCheckpoint;
	unsigned _transactionLevel;
	BOOL _nestedTransactionWantsToRollback;
	NSMutableArray* _enqueuedTransactionCommitBlocks;
	ML3DatabaseConnectionPool* _owningPool;
	NSMutableArray* _registeredFunctions;
	NSMutableArray* _registeredModules;
	const void* _iTunesExtensions;
	int _profilingLevel;
	NSString* _lastTracedStatement;
	int _willDeleteDatabaseNotifyToken;
	BOOL _isHandlingIOError;
	BOOL _alreadyAttemptedCorruptionRecovery;
	BOOL _isReadOnly;
	BOOL _automaticCheckpointingEnabled;
	BOOL _logQueryPlans;
	id<ML3DatabaseConnectionDelegate> _connectionDelegate;
	NSString* _databasePath;
	unsigned long long _journalingMode;
	unsigned long long _protectionLevel;
	NSUUID* _currentTransactionID;
	NSUUID* _uniqueIdentifier;
	unsigned long long _checkpointStatementThreshold;

}

@property (assign,nonatomic,__weak) id<ML3DatabaseConnectionDelegate> connectionDelegate;              //@synthesize connectionDelegate=_connectionDelegate - In the implementation block
@property (nonatomic,readonly) NSString * databasePath;                                                //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) BOOL isOpen; 
@property (assign,setter=setReadOnly:,nonatomic) BOOL isReadOnly;                                      //@synthesize isReadOnly=_isReadOnly - In the implementation block
@property (assign,nonatomic) unsigned long long journalingMode;                                        //@synthesize journalingMode=_journalingMode - In the implementation block
@property (assign,nonatomic) unsigned long long protectionLevel;                                       //@synthesize protectionLevel=_protectionLevel - In the implementation block
@property (nonatomic,readonly) BOOL isInTransaction; 
@property (nonatomic,readonly) BOOL transactionMarkedForRollBack; 
@property (nonatomic,readonly) NSUUID * currentTransactionID;                                          //@synthesize currentTransactionID=_currentTransactionID - In the implementation block
@property (assign,nonatomic) int profilingLevel; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL automaticCheckpointingEnabled;                                       //@synthesize automaticCheckpointingEnabled=_automaticCheckpointingEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long checkpointStatementThreshold;                          //@synthesize checkpointStatementThreshold=_checkpointStatementThreshold - In the implementation block
@property (assign,nonatomic) BOOL logQueryPlans;                                                       //@synthesize logQueryPlans=_logQueryPlans - In the implementation block
-(NSString *)databasePath;
-(id)executeQuery:(id)arg1 ;
-(BOOL)popTransactionAndCommit:(BOOL)arg1 ;
-(id)_shortDescription;
-(void)flush;
-(void)_enumerateTableColumnNamesAndDefinitionsFromTable:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)transactionMarkedForRollBack;
-(void)setConnectionDelegate:(id<ML3DatabaseConnectionDelegate>)arg1 ;
-(BOOL)schemaDeleteColumn:(id)arg1 inTable:(id)arg2 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)isReadOnly;
-(BOOL)popToRootTransactionAndCommit:(BOOL)arg1 ;
-(int)profilingLevel;
-(void)_createDatabaseDirectoryIfNonexistent;
-(void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statement:(id)arg2 ;
-(BOOL)open;
-(BOOL)_handleZombieSQLiteConnection:(sqlite3Ref)arg1 ;
-(id)init;
-(BOOL)schemaInsertColumnDefinitions:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(int)_distrustQueriesDuringBlock:(/*^block*/id)arg1 ;
-(id)openBlobInTable:(id)arg1 column:(id)arg2 row:(long long)arg3 readOnly:(BOOL)arg4 ;
-(id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4 ;
-(BOOL)isOpen;
-(BOOL)executeUpdate:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(BOOL)close;
-(sqlite3Ref)_sqliteHandle;
-(void)_executeTransactionCommitBlocks:(BOOL)arg1 ;
-(BOOL)_handleConnectionErrorWhileOpening:(int)arg1 ;
-(BOOL)schemaRenameColumn:(id)arg1 inTable:(id)arg2 toNewColumnName:(id)arg3 ;
-(id)executeQuery:(id)arg1 withParameters:(id)arg2 ;
-(id<ML3DatabaseConnectionDelegate>)connectionDelegate;
-(NSUUID *)uniqueIdentifier;
-(id)sqliteError;
-(BOOL)pushTransactionUsingBehaviorType:(unsigned long long)arg1 ;
-(BOOL)_handleBusyLockWithNumberOfRetries:(int)arg1 ;
-(void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statementSQL:(id)arg2 ;
-(BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)isInTransaction;
-(BOOL)executeUpdate:(id)arg1 ;
-(BOOL)registerModule:(id)arg1 ;
-(BOOL)_alreadyAttemptedCorruptionRecovery;
-(void)_handleDatabaseCorruption;
-(void)_logDatabaseFileDebugInformation;
-(BOOL)_executeStatement:(id)arg1 withError:(id*)arg2 ;
-(void)_setOwningPool:(id)arg1 ;
-(BOOL)schemaAddColumnDefinition:(id)arg1 toTable:(id)arg2 ;
-(void)_logCurrentError;
-(BOOL)_databaseFileExists;
-(id)description;
-(BOOL)schemaInsertColumnDefinition:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_handleDatabaseTraceStatement:(const char*)arg1 ;
-(BOOL)automaticCheckpointingEnabled;
-(BOOL)pushTransaction;
-(void)_resetUnfinalizedStatements;
-(void)_setAlreadyAttemptedCorruptionRecovery:(BOOL)arg1 ;
-(BOOL)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)setAutomaticCheckpointingEnabled:(BOOL)arg1 ;
-(BOOL)registerModuleName:(id)arg1 moduleMethods:(sqlite3_module*)arg2 ;
-(BOOL)logQueryPlans;
-(void)setProfilingLevel:(int)arg1 ;
-(void)setLogQueryPlans:(BOOL)arg1 ;
-(id)_registeredModuleNamed:(id)arg1 ;
-(BOOL)schemaDeleteColumns:(id)arg1 inTable:(id)arg2 ;
-(id)_prepareStatement:(id)arg1 error:(id*)arg2 ;
-(void)setCurrentTransactionID:(NSUUID *)arg1 ;
-(BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(/*function pointer*/void*)arg3 ;
-(BOOL)tableExists:(id)arg1 ;
-(void)setJournalingMode:(unsigned long long)arg1 ;
-(BOOL)_alterTableNamed:(id)arg1 withNewColumnDefinitions:(id)arg2 newColumnNames:(id)arg3 oldColumnNames:(id)arg4 ;
-(BOOL)performTransactionWithBlock:(/*^block*/id)arg1 usingBehaviorType:(unsigned long long)arg2 ;
-(void)setCheckpointStatementThreshold:(unsigned long long)arg1 ;
-(BOOL)_validatePreparedStatement:(id)arg1 error:(id*)arg2 ;
-(void)_internalLogQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4 ;
-(BOOL)removeModuleNamed:(id)arg1 ;
-(BOOL)_databaseFilesAreWritable;
-(id)_databaseFilePaths;
-(BOOL)_closeAndFlushTransactionState:(BOOL)arg1 ;
-(BOOL)_internalEndTransactionAndCommit:(BOOL)arg1 ;
-(BOOL)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1 ;
-(void)_ensureConnectionIsOpen;
-(void)setProtectionLevel:(unsigned long long)arg1 ;
-(void)_finalizeAllStatements;
-(id)executeQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4 ;
-(NSUUID *)currentTransactionID;
-(unsigned long long)protectionLevel;
-(long long)lastInsertionRowID;
-(unsigned long long)checkpointStatementThreshold;
-(unsigned long long)journalingMode;
-(BOOL)deleteDatabase;
-(BOOL)_openWithFlags:(int)arg1 ;
-(BOOL)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(BOOL)databasePathExists;
-(BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(/*function pointer*/void*)arg3 userData:(void*)arg4 ;
-(int)checkpointDatabase;
-(BOOL)_handleDiskIOError;
-(void)_setTransactionLevel:(unsigned long long)arg1 ;
-(id)_owningPool;
-(id)initWithDatabasePath:(id)arg1 ;
-(void)_handleDatabaseProfileStatement:(const char*)arg1 executionTimeNS:(unsigned long long)arg2 ;
-(BOOL)_isDeviceMediaLibraryDatabase;
-(void)enqueueBlockForTransactionCommit:(/*^block*/id)arg1 ;
-(unsigned long long)_transactionLevel;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)_createDatabaseFileIfNonexistent;
-(void)_updateProfilingLevel;
@end

