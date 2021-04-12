/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EDDatabaseChangeHookResponder.h>
#import <libobjc.A.dylib/EDAccountChangeHookResponder.h>
#import <libobjc.A.dylib/EDMailboxChangeHookResponder.h>
#import <libobjc.A.dylib/EDMessageChangeHookResponder.h>
#import <libobjc.A.dylib/EDProtectedDataReconciliationHookResponder.h>
#import <libobjc.A.dylib/EDThreadScopeManagerDataSource.h>
#import <libobjc.A.dylib/EFSignpostable.h>
#import <libobjc.A.dylib/EDPersistenceDatabaseSchemaProvider.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol EMVIPManager, EFScheduler;
@class NSMutableSet, NSMutableArray, EDMessagePersistence, EDPersistenceDatabase, EDPersistenceHookRegistry, EMBlockedSenderManager, EDThreadScopeManager, EFDebouncer, NSString;

@interface EDThreadPersistence : NSObject <EDDatabaseChangeHookResponder, EDAccountChangeHookResponder, EDMailboxChangeHookResponder, EDMessageChangeHookResponder, EDProtectedDataReconciliationHookResponder, EDThreadScopeManagerDataSource, EFSignpostable, EDPersistenceDatabaseSchemaProvider, EFLoggable> {

	NSMutableSet* _threadObjectIDsToRecompute;
	os_unfair_lock_s _threadRecomputationLock;
	NSMutableArray* _migratingThreadScopes;
	os_unfair_lock_s _migratingThreadScopesLock;
	EDMessagePersistence* _messagePersistence;
	EDPersistenceDatabase* _database;
	EDPersistenceHookRegistry* _hookRegistry;
	id<EMVIPManager> _vipManager;
	EMBlockedSenderManager* _blockedSenderManager;
	EDThreadScopeManager* _threadScopeManager;
	id<EFScheduler> _reconciliationCleanupScheduler;
	id<EFScheduler> _threadRecomputationScheduler;
	EFDebouncer* _threadRecomputationDebouncer;

}

@property (nonatomic,readonly) EDMessagePersistence * messagePersistence;                  //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (nonatomic,readonly) EDPersistenceDatabase * database;                           //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) EDPersistenceHookRegistry * hookRegistry;                   //@synthesize hookRegistry=_hookRegistry - In the implementation block
@property (nonatomic,readonly) id<EMVIPManager> vipManager;                                //@synthesize vipManager=_vipManager - In the implementation block
@property (nonatomic,readonly) EMBlockedSenderManager * blockedSenderManager;              //@synthesize blockedSenderManager=_blockedSenderManager - In the implementation block
@property (nonatomic,readonly) EDThreadScopeManager * threadScopeManager;                  //@synthesize threadScopeManager=_threadScopeManager - In the implementation block
@property (nonatomic,retain) id<EFScheduler> reconciliationCleanupScheduler;               //@synthesize reconciliationCleanupScheduler=_reconciliationCleanupScheduler - In the implementation block
@property (nonatomic,retain) id<EFScheduler> threadRecomputationScheduler;                 //@synthesize threadRecomputationScheduler=_threadRecomputationScheduler - In the implementation block
@property (nonatomic,retain) EFDebouncer * threadRecomputationDebouncer;                   //@synthesize threadRecomputationDebouncer=_threadRecomputationDebouncer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long signpostID; 
+(id)log;
+(id)signpostLog;
+(id)threadSendersTableSchema;
+(id)threadRecipientsTableSchema;
+(id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2 ;
+(id)threadScopesTableSchema;
+(id)threadsTableSchema;
+(id)threadMailboxesTableSchema;
-(EDPersistenceDatabase *)database;
-(unsigned long long)signpostID;
-(EDPersistenceHookRegistry *)hookRegistry;
-(id<EFScheduler>)reconciliationCleanupScheduler;
-(void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceIsChangingConversationID:(long long)arg1 messages:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceIsAddingMessages:(id)arg1 journaled:(BOOL)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidChangeMessageIDHeaderHash:(id)arg1 oldConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4 ;
-(void)persistenceIsDeletingMessages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceIsDeletingAllMessagesInMailboxWithURL:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(id)arg1 generationWindow:(id)arg2 ;
-(id<EMVIPManager>)vipManager;
-(EDMessagePersistence *)messagePersistence;
-(void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceIsChangingFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceWillReplaceDatabaseID:(long long)arg1 with:(long long)arg2 forTable:(id)arg3 column:(id)arg4 ;
-(void)persistenceDidReconcileProtectedData;
-(void)setReconciliationCleanupScheduler:(id<EFScheduler>)arg1 ;
-(void)persistenceIsAddingMailboxWithDatabaseID:(long long)arg1 objectID:(id)arg2 generationWindow:(id)arg3 ;
-(EMBlockedSenderManager *)blockedSenderManager;
-(id)initWithMessagePersistence:(id)arg1 database:(id)arg2 hookRegistry:(id)arg3 vipManager:(id)arg4 blockedSenderManager:(id)arg5 ;
-(void)persistenceIsInitializingDatabaseWithConnection:(id)arg1 ;
-(void)resetThreadScopedForActivatedAccount:(id)arg1 ;
-(/*^block*/id)threadScopeMatcherForActivatedAccount:(id)arg1 ;
-(id)resetThreadScopesForDeactivatedAccount:(id)arg1 ;
-(void)setNeedsUpdateForThreadScope:(id)arg1 ;
-(void)resetThreadScopesForMailboxScope:(id)arg1 ;
-(void)updateLastViewedDateForThreadScope:(id)arg1 ;
-(void)threadObjectIDsForThreadScope:(id)arg1 sortDescriptors:(id)arg2 initialBatchSize:(unsigned long long)arg3 journaledObjectIDs:(id)arg4 batchBlock:(/*^block*/id)arg5 ;
-(id)threadForObjectID:(id)arg1 originatingQuery:(id)arg2 error:(id*)arg3 ;
-(id)threadObjectIDBeforeThreadObjectID:(id)arg1 forSortDescriptors:(id)arg2 excluding:(id)arg3 ;
-(id)threadObjectIDsByNextExistingForThreadObjectIDs:(id)arg1 forSortDescriptors:(id)arg2 excluding:(id)arg3 ;
-(id)changeForThreadWithObjectID:(id)arg1 changedKeyPaths:(id)arg2 ;
-(id)oldestThreadObjectIDForMailbox:(id)arg1 threadScope:(id)arg2 ;
-(BOOL)beginMigratingThreadScope:(id)arg1 ;
-(BOOL)addThreads:(id)arg1 ;
-(BOOL)endMigratingThreadScope:(id)arg1 ;
-(BOOL)deleteThreadsWithObjectIDs:(id)arg1 ;
-(void)_recomputeThreads;
-(EDThreadScopeManager *)threadScopeManager;
-(BOOL)_isThreadScopePrecomputed:(id)arg1 shouldMigrate:(BOOL*)arg2 ;
-(BOOL)_enumerateThreadObjectIDsForThreadScope:(id)arg1 filterClause:(id)arg2 sortDescriptors:(id)arg3 batchBlock:(/*^block*/id)arg4 ;
-(void)_addOrderByToThreadSelect:(id)arg1 forSortDescriptors:(id)arg2 ;
-(long long)_databaseIDForThreadObjectID:(id)arg1 ;
-(id)_mailboxesForThreadDatabaseID:(id)arg1 ;
-(id)_sendersForThreadDatabaseID:(id)arg1 ;
-(id)_sendersFromMessagesForThreadObjectID:(id)arg1 ;
-(id)_recipientsOfType:(unsigned long long)arg1 forThreadDatabaseID:(id)arg2 ;
-(id)_recipientsOfType:(unsigned long long)arg1 fromMessagesForThreadObjectID:(id)arg2 ;
-(void)_scheduleRecomputationForThread:(id)arg1 reason:(id)arg2 ;
-(id)_nonJournaledSubjectForThreadWithObjectID:(id)arg1 connection:(id)arg2 ;
-(id)_flagColorsFromRow:(id)arg1 ;
-(id)_messageThreadExpressionForThreadObjectID:(id)arg1 ;
-(id)_addressesFromSelectStatement:(id)arg1 ;
-(id)_senderAddressesExpressionForMessages:(id)arg1 ;
-(id)_addressesFromMessageAddressesStatement:(id)arg1 ;
-(id)_recipientAddressesExpressionForRecipientType:(unsigned long long)arg1 messages:(id)arg2 ;
-(id)_threadExpressionForThreadScopeDatabaseID:(long long)arg1 conversation:(long long)arg2 ;
-(id)_comparisonExpressionForSortDescriptors:(id)arg1 conversationID:(long long)arg2 threadExpression:(id)arg3 threadScopeDatabaseID:(long long)arg4 connection:(id)arg5 ;
-(id)_senderDatabaseIDsAndDatesForMessages:(id)arg1 ;
-(id)_recipientDatabaseIDsAndDatesForMessages:(id)arg1 recipientType:(unsigned long long)arg2 ;
-(id)_threadDatabaseIDExpressionForThreadScopeDatabaseID:(long long)arg1 conversation:(long long)arg2 ;
-(EFDebouncer *)threadRecomputationDebouncer;
-(id)_messageThreadExpressionForThreadScope:(id)arg1 objectIDs:(id)arg2 ;
-(id)_persistedMessagesForMailboxScope:(id)arg1 messageExpression:(id)arg2 ;
-(void)_iterateWrappedMessagesByConversationForPersistedMessages:(id)arg1 writeBlock:(/*^block*/id)arg2 ;
-(BOOL)_addThreadScopeToDatabaseWithMailboxType:(id)arg1 needsUpdate:(BOOL)arg2 lastViewedDate:(id)arg3 connection:(id)arg4 ;
-(id)_threadScopedToResetForActivatedAccount:(id)arg1 ;
-(void)_resetThreadScope:(id)arg1 withDatabaseID:(id)arg2 ;
-(void)_enumerateThreadScopesUsingBlock:(/*^block*/id)arg1 ;
-(id)_addedMailboxObjectIDsForActivatedAccount:(id)arg1 ;
-(void)_getIndividualMailboxScopes:(id*)arg1 unifiedMailboxThreadScopes:(id*)arg2 forAccount:(id)arg3 ;
-(BOOL)_addThreadScopeToDatabase:(id)arg1 withMailboxDatabaseID:(long long)arg2 needsUpdate:(BOOL)arg3 lastViewedDate:(id)arg4 updateThreadScopeManager:(BOOL)arg5 connection:(id)arg6 ;
-(void)_addPersistedMessages:(id)arg1 journaled:(BOOL)arg2 generationWindow:(id)arg3 ;
-(id)_filteredPersistedMessagesForPersistedMessages:(id)arg1 ;
-(void)_persistenceIsDeletingMessages:(id)arg1 generationWindow:(id)arg2 ;
-(void)_persistenceIsChangingFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3 ;
-(id)_persistenceIsChangingFlags:(id)arg1 wrappedMessages:(id)arg2 threadObjectID:(id)arg3 threadScopeDatabaseID:(long long)arg4 ;
-(void)_iterateWrappedMessagesByConversationForPersistedMessages:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_updateNewestReadMessageWithWrappedMessage:(id)arg1 threadExpression:(id)arg2 ;
-(id)_recalculateDisplayMessageForThreadObjectID:(id)arg1 threadScopeDatabaseID:(long long)arg2 ;
-(BOOL)_recalculateNewestReadMessageForThreadObjectID:(id)arg1 threadScopeDatabaseID:(long long)arg2 ;
-(id)_deleteWrappedMessages:(id)arg1 fromThreadWithObjectID:(id)arg2 threadScopeDatabaseID:(long long)arg3 generationWindow:(id)arg4 ;
-(id)_updateThreadForDeleteWithObjectID:(id)arg1 threadScopeDatabaseID:(long long)arg2 generationWindow:(id)arg3 ;
-(BOOL)_deleteMailboxesFromWrappedMessages:(id)arg1 fromThreadWithDatabaseID:(id)arg2 messageThreadExpression:(id)arg3 ;
-(id)_updateBasicPropertiesAfterDeleteForThreadObjectID:(id)arg1 threadScopeDatabaseID:(long long)arg2 ;
-(BOOL)_deleteSendersFromThreadWithDatabaseID:(id)arg1 messageThreadExpression:(id)arg2 ;
-(BOOL)_deleteRecipientsOfType:(unsigned long long)arg1 fromThreadWithDatabaseID:(id)arg2 messageThreadExpression:(id)arg3 ;
-(id)_upsertForThreadsWithThreadScopeDatabaseID:(long long)arg1 conversation:(long long)arg2 ;
-(id)_countMessagesForExpression:(id)arg1 ;
-(void)_addKeyPathsForBasicPropertiesChangeToKeyPaths:(id)arg1 ;
-(id)_mailboxDatabaseIDsForWrappedMessages:(id)arg1 ;
-(void)_deleteAllMessagesInThreadScope:(id)arg1 withDatabaseID:(id)arg2 generationWindow:(id)arg3 ;
-(void)_updateAllThreadsAfterDeleteInThreadScope:(id)arg1 withDatabaseID:(id)arg2 generationWindow:(id)arg3 ;
-(id)_threadForWrappedMessages:(id)arg1 objectID:(id)arg2 ;
-(BOOL)_messagesAreJournaledForThreadWithObjectID:(id)arg1 ;
-(BOOL)_setPriorityForDisplayMessageSenderForThreadObjectID:(id)arg1 ;
-(id)_wrappedMessagesByThreadScopeForPersistedMessages:(id)arg1 ;
-(id)_expressionForThreadScope:(id)arg1 ;
-(id)_persistedMessagesByPossibleThreadScopeForPersistedMessages:(id)arg1 ;
-(id)_wrappedMessageForPersistedMessages:(id)arg1 threadScope:(id)arg2 ;
-(id)_threadQueryForThreadScope:(id)arg1 ;
-(void)_addKeyPathsForDisplayMessageChangeToKeyPaths:(id)arg1 ;
-(id)_messageThreadExpressionForThreadScope:(id)arg1 conversationExpression:(id)arg2 ;
-(id)_messageMailboxesExpressionForMailboxScope:(id)arg1 ;
-(id)_messageFilterExpressionForFilterPredicate:(id)arg1 ;
-(BOOL)_addThreadScopeToDatabase:(id)arg1 needsUpdate:(BOOL)arg2 lastViewedDate:(id)arg3 updateThreadScopeManager:(BOOL)arg4 ;
-(id)_statementForOldestThreadInMailbox:(id)arg1 threadScope:(id)arg2 createMailboxDatabaseIDIfNecessary:(BOOL)arg3 ;
-(void)threadScopeManager:(id)arg1 gatherStatisticsForThreadScopesWithDatabaseIDs:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)threadScopeManager:(id)arg1 mailboxScopeExists:(id)arg2 ;
-(BOOL)threadScopeManager:(id)arg1 isValidMailboxObjectID:(id)arg2 ;
-(void)threadScopeManager:(id)arg1 populateThreadScopesWithBlock:(/*^block*/id)arg2 ;
-(BOOL)threadScopeManager:(id)arg1 evictThreadScopesWithDatabaseIDs:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(unsigned long long)persistenceStateForThreadScope:(id)arg1 ;
-(id)_senderDatabaseIDsAndDatesForThreadWithObjectID:(id)arg1 ;
-(id)_senderDatabaseIDsAndDatesForWrappedMessages:(id)arg1 ;
-(id)_recipientDatabaseIDsAndDatesForThreadWithObjectID:(id)arg1 recipientType:(unsigned long long)arg2 ;
-(id)_recipientDatabaseIDsAndDatesForWrappedMessages:(id)arg1 recipientType:(unsigned long long)arg2 ;
-(id)_inactiveMailboxDatabaseIDsForMailboxScope:(id)arg1 forThreadScopeDatabaseID:(id)arg2 ;
-(BOOL)_updateDisplayMessageWithUnreadWrappedMessages:(id)arg1 threadExpression:(id)arg2 ;
-(BOOL)addThreadScopeToDatabase:(id)arg1 needsUpdate:(BOOL)arg2 lastViewedDate:(id)arg3 ;
-(id)statisticsForThreadScopesWithDatabaseIDs:(id)arg1 ;
-(id<EFScheduler>)threadRecomputationScheduler;
-(void)setThreadRecomputationScheduler:(id<EFScheduler>)arg1 ;
-(void)setThreadRecomputationDebouncer:(EFDebouncer *)arg1 ;
@end

