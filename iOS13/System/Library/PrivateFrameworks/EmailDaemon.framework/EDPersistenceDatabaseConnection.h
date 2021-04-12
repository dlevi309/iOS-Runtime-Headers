/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol EDPersistenceDatabaseConnectionDelegate;
@class NSString, EDPersistenceDatabaseJournal, EFSQLConnection;

@interface EDPersistenceDatabaseConnection : NSObject <EFLoggable> {

	BOOL _isWriter;
	id<EDPersistenceDatabaseConnectionDelegate> _delegate;
	NSString* _protectedDatabaseName;
	NSString* _journalDatabaseName;
	EDPersistenceDatabaseJournal* _journal;
	EFSQLConnection* _sqlConnection;
	NSString* _basePath;

}

@property (nonatomic,__weak,readonly) id<EDPersistenceDatabaseConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * protectedDatabaseName;                                             //@synthesize protectedDatabaseName=_protectedDatabaseName - In the implementation block
@property (nonatomic,copy) NSString * journalDatabaseName;                                               //@synthesize journalDatabaseName=_journalDatabaseName - In the implementation block
@property (nonatomic,retain) EDPersistenceDatabaseJournal * journal;                                     //@synthesize journal=_journal - In the implementation block
@property (nonatomic,readonly) EFSQLConnection * sqlConnection;                                          //@synthesize sqlConnection=_sqlConnection - In the implementation block
@property (nonatomic,readonly) NSString * basePath;                                                      //@synthesize basePath=_basePath - In the implementation block
@property (nonatomic,readonly) NSString * fullPath; 
@property (nonatomic,copy,readonly) NSString * protectedDatabasePath; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL protectedDatabaseAttached; 
@property (nonatomic,readonly) BOOL journalDatabaseAttached; 
@property (nonatomic,readonly) sqlite3Ref sqlDB; 
@property (nonatomic,readonly) BOOL isWriter; 
@property (nonatomic,readonly) long long lastInsertedDatabaseID; 
@property (nonatomic,readonly) long long transactionGeneration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isValid;
-(void)open;
-(void)close;
-(id<EDPersistenceDatabaseConnectionDelegate>)delegate;
-(NSString *)fullPath;
-(BOOL)isWriter;
-(void)setIsWriter:(BOOL)arg1 ;
-(EDPersistenceDatabaseJournal *)journal;
-(void)setJournal:(EDPersistenceDatabaseJournal *)arg1 ;
-(BOOL)tableExists:(id)arg1 ;
-(id)preparedStatementForQueryString:(id)arg1 ;
-(void)handleSQLResult:(int)arg1 message:(id)arg2 ;
-(long long)transactionGeneration;
-(void)handleError:(id)arg1 message:(id)arg2 ;
-(BOOL)executeInsertStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)checkForConnectionErrorWithMessage:(id)arg1 ;
-(BOOL)executeDeleteStatement:(id)arg1 error:(id*)arg2 ;
-(long long)lastInsertedDatabaseID;
-(sqlite3Ref)sqlDB;
-(BOOL)executeUpdateStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeStatementString:(id)arg1 errorMessage:(id)arg2 ;
-(BOOL)executeSelectStatement:(id)arg1 withBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)protectedDatabaseAttached;
-(EFSQLConnection *)sqlConnection;
-(BOOL)performUsingTransaction:(BOOL)arg1 isWriter:(BOOL)arg2 transactionError:(id*)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)databaseIsAttached:(id)arg1 ;
-(NSString *)protectedDatabaseName;
-(BOOL)columnExists:(id)arg1 inTable:(id)arg2 type:(unsigned long long*)arg3 ;
-(NSString *)basePath;
-(id)initWithBasePath:(id)arg1 databaseName:(id)arg2 isWriter:(BOOL)arg3 delegate:(id)arg4 ;
-(NSString *)protectedDatabasePath;
-(BOOL)attachProtectedDatabaseWithName:(id)arg1 url:(id)arg2 error:(id*)arg3 ;
-(BOOL)detachProtectedDatabase;
-(int)configureSQLConnection;
-(long long)transactionTypeForWriting;
-(NSString *)journalDatabaseName;
-(BOOL)executeInsertStatement:(id)arg1 rowsChanged:(unsigned long long*)arg2 ;
-(id)_databasePathForFileName:(id)arg1 ;
-(long long)_adjustedDatabaseTypeForType:(long long)arg1 ;
-(BOOL)_executePreparedStatement:(id)arg1 withBlock:(/*^block*/id)arg2 description:(id)arg3 error:(id*)arg4 ;
-(BOOL)executeUpsertStatement:(id)arg1 error:(id*)arg2 ;
-(void)_fixFilePermissionForPath:(const char*)arg1 ;
-(BOOL)journalDatabaseAttached;
-(BOOL)detachJournalDatabase;
-(BOOL)_startTransactionWithSQLConnection:(id)arg1 forWriting:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_finishTransactionWithSQLConnection:(id)arg1 afterSuccess:(BOOL)arg2 transactionError:(id*)arg3 ;
-(BOOL)_fetchTransactionWriteGenerationWithSQLConnection:(id)arg1 newGeneration:(long long*)arg2 ;
-(BOOL)_storeTransactionWriteGenerationWithSQLConnection:(id)arg1 newGeneration:(long long)arg2 ;
-(BOOL)tableExists:(id)arg1 inDatabase:(id)arg2 ;
-(BOOL)columnExists:(id)arg1 inTable:(id)arg2 database:(id)arg3 type:(unsigned long long*)arg4 ;
-(BOOL)_attachDatabaseWithName:(id)arg1 url:(id)arg2 error:(id*)arg3 ;
-(void)setProtectedDatabaseName:(NSString *)arg1 ;
-(BOOL)attachProtectedDatabaseWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)_detachDatabaseWithName:(id)arg1 ;
-(void)setJournalDatabaseName:(NSString *)arg1 ;
-(BOOL)attachJournalDatabase:(id)arg1 withName:(id)arg2 error:(id*)arg3 ;
-(id)initForInMemoryDatabaseIsWriter:(BOOL)arg1 delegate:(id)arg2 ;
-(id)initWithSQLDB:(sqlite3Ref)arg1 isWriter:(BOOL)arg2 delegate:(id)arg3 ;
-(BOOL)executeUpdateStatement:(id)arg1 rowsChanged:(unsigned long long*)arg2 ;
-(BOOL)executeUpsertStatement:(id)arg1 rowsChanged:(unsigned long long*)arg2 ;
-(BOOL)executeDeleteStatement:(id)arg1 rowsChanged:(unsigned long long*)arg2 ;
-(void)clearLastInsertedDatabaseID;
-(BOOL)attachProtectedDatabaseWithName:(id)arg1 ;
-(BOOL)attachJournalDatabase:(id)arg1 withName:(id)arg2 ;
@end

