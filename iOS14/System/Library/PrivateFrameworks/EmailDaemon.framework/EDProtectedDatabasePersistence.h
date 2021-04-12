/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFSignpostable.h>

@protocol OS_dispatch_queue;
@class EDPersistenceDatabase, EDPersistenceDatabaseJournalManager, EDPersistenceHookRegistry, NSObject, NSString;

@interface EDProtectedDatabasePersistence : NSObject <EFLoggable, EFSignpostable> {

	os_unfair_lock_s _initializationLock;
	os_unfair_lock_s _reconciliationLock;
	EDPersistenceDatabase* _database;
	BOOL _isInitialized;
	BOOL _isReconciling;
	EDPersistenceDatabaseJournalManager* _journalManager;
	EDPersistenceHookRegistry* _hookRegistry;
	NSObject*<OS_dispatch_queue> _reconciliationQueue;

}

@property (nonatomic,readonly) EDPersistenceDatabaseJournalManager * journalManager;                 //@synthesize journalManager=_journalManager - In the implementation block
@property (nonatomic,readonly) EDPersistenceHookRegistry * hookRegistry;                             //@synthesize hookRegistry=_hookRegistry - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> reconciliationQueue;              //@synthesize reconciliationQueue=_reconciliationQueue - In the implementation block
@property (assign,nonatomic) BOOL isInitialized;                                                     //@synthesize isInitialized=_isInitialized - In the implementation block
@property (assign,nonatomic) BOOL isReconciling;                                                     //@synthesize isReconciling=_isReconciling - In the implementation block
@property (nonatomic,readonly) BOOL supportsJournaling; 
@property (nonatomic,readonly) BOOL protectedDataAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long signpostID; 
+(id)log;
+(id)protectedDatabaseName;
+(id)journalDatabaseName;
+(id)signpostLog;
-(BOOL)isInitialized;
-(void)setDatabase:(id)arg1 ;
-(unsigned long long)signpostID;
-(BOOL)supportsJournaling;
-(id)initWithBasePath:(id)arg1 hookRegistry:(id)arg2 ;
-(BOOL)protectedDataAvailable;
-(void)scheduleRecurringActivity;
-(BOOL)_isRecoverableError:(id)arg1 ;
-(void)finishJournalReconciliation:(unsigned long long)arg1 ;
-(void)addAdditionalCriteriaToCleanupActivity:(id)arg1 ;
-(EDPersistenceDatabaseJournalManager *)journalManager;
-(EDPersistenceHookRegistry *)hookRegistry;
-(id)database;
-(void)setIsInitialized:(BOOL)arg1 ;
-(void)attachProtectedOrJournalDatabaseToConnectionIfNecessary:(id)arg1 withSchema:(id)arg2 ;
-(void)detachProtectedOrJournalDatabaseFromConnectionIfNecessary:(id)arg1 ;
-(void)reconcileJournalsWithSchema:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithJournalManager:(id)arg1 hookRegistry:(id)arg2 ;
-(BOOL)_performOnDemandReconciliationForConnection:(id)arg1 withSchema:(id)arg2 ;
-(void)_ensureProtectedDatabaseOrJournalIsAttachedToConnection:(id)arg1 withSchema:(id)arg2 ;
-(void)_ensureJournalIsAttachedToConnection:(id)arg1 withSchema:(id)arg2 ;
-(BOOL)_attachProtectedDatabaseToConnection:(id)arg1 withSchema:(id)arg2 error:(id*)arg3 ;
-(void)_attachJournalDatabaseToConnection:(id)arg1 withSchema:(id)arg2 ;
-(void)_detachProtectedDatabaseFromConnection:(id)arg1 ;
-(void)_detachJournalDatabaseFromConnection:(id)arg1 ;
-(BOOL)_initializeDatabase:(id)arg1 withConnection:(id)arg2 schema:(id)arg3 error:(id*)arg4 ;
-(BOOL)_updateSqliteSequenceForDatabase:(id)arg1 schema:(id)arg2 withConnection:(id)arg3 error:(id*)arg4 ;
-(id)_allReferencingColumnsForTable:(id)arg1 ;
-(long long)_maxRowIDForColumn:(id)arg1 withConnection:(id)arg2 ;
-(BOOL)isReconciling;
-(void)setIsReconciling:(BOOL)arg1 ;
-(unsigned long long)_reconcileJournalsWithSchema:(id)arg1 connection:(id)arg2 ;
-(unsigned long long)_runReconciliationWithSchema:(id)arg1 connection:(id)arg2 ;
-(unsigned long long)_resultForConnection:(id)arg1 success:(BOOL)arg2 error:(id)arg3 errorMessage:(id)arg4 ;
-(unsigned long long)_mergeSchema:(id)arg1 connection:(id)arg2 journaledRows:(unsigned long long*)arg3 newRows:(unsigned long long*)arg4 ;
-(BOOL)_isJournalMalformedForSchema:(id)arg1 connection:(id)arg2 ;
-(unsigned long long)_mergeTable:(id)arg1 connection:(id)arg2 journaledRows:(unsigned long long*)arg3 newRows:(unsigned long long*)arg4 ;
-(unsigned long long)_executeStatementString:(id)arg1 onConnection:(id)arg2 errorMessage:(id)arg3 ;
-(unsigned long long)_deleteRowIDs:(id)arg1 fromJournal:(id)arg2 withConnection:(id)arg3 ;
-(id)_databaseIDsToDeleteForTable:(id)arg1 ;
-(void)_deleteDatabaseIDs:(id)arg1 fromTable:(id)arg2 ;
-(BOOL)_removeExistingDatabaseIDs:(id)arg1 withColumn:(id)arg2 connection:(id)arg3 ;
-(unsigned long long)_executeUpdateStatement:(id)arg1 onConnection:(id)arg2 errorMessage:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)reconciliationQueue;
@end

