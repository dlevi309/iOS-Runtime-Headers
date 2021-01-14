/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDAssertionObserver.h>
#import <libobjc.A.dylib/HDContentProtectionObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDSQLiteDatabaseDelegate.h>
#import <libobjc.A.dylib/HDSQLiteDatabasePoolDelegate.h>
#import <libobjc.A.dylib/HDSQLiteDatabaseProvider.h>
#import <libobjc.A.dylib/HDDatabaseJournalDelegate.h>
#import <libobjc.A.dylib/HDHFDataStoreDelegate.h>
#import <libobjc.A.dylib/HDDatabaseMigrationTransactionDelegate.h>
#import <libobjc.A.dylib/HDHealthDatabase.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;
@class NSObject, HDHFDataStore, NSLock, HKObserverSet, NSMutableArray, NSDate, NSMutableDictionary, HDDatabaseJournal, HDProfile, NSString, HDAssertionManager, NSConditionLock, NSMutableSet, NSHashTable, NSOperationQueue, NSDictionary, HDContentProtectionManager;

@interface HDDatabase : NSObject <HDAssertionObserver, HDContentProtectionObserver, HDDiagnosticObject, HDSQLiteDatabaseDelegate, HDSQLiteDatabasePoolDelegate, HDSQLiteDatabaseProvider, HDDatabaseJournalDelegate, HDHFDataStoreDelegate, HDDatabaseMigrationTransactionDelegate, HDHealthDatabase> {

	AB _invalidated;
	NSObject*<OS_dispatch_queue> _serialAsynchronousQueue;
	HDHFDataStore* _hfDataStore;
	NSLock* _writeLock;
	NSObject*<OS_dispatch_queue> _protectedDataQueue;
	HKObserverSet* _protectedDataObservers;
	long long _protectedDataState;
	long long _observedContentProtectionState;
	BOOL _isObservingContentProtection;
	NSMutableArray* _firstUnlockBlocks;
	BOOL _shouldNotifyFirstUnlockObservers;
	NSDate* _protectedDataFlushDeadlineDate;
	NSObject*<OS_dispatch_source> _protectedDataFlushDeadlineTimer;
	BOOL _hasFlushedProtectedData;
	AB _hasPendingSecondaryJournalMerge;
	NSMutableDictionary* _databaseJournalMergeObserverSetByType;
	BOOL _didRunPostMigrationUpdates;
	HDDatabaseJournal* _journal;
	HDDatabaseJournal* _cloudSyncJournal;
	HDProfile* _profile;
	NSString* _profileDirectoryPath;
	NSString* _threadLocalTransactionKey;
	NSString* _threadLocalTransactionContextKey;
	NSString* _threadLocalIgnoreTransactionContextKey;
	HDAssertionManager* _assertionManager;
	NSLock* _schemaMigrationLock;
	NSConditionLock* _activeDatabasesLock;
	NSMutableSet* _activeDatabases;
	NSHashTable* _migratedDatabases;
	NSOperationQueue* _asynchronousOperationQueue;
	NSObject*<OS_dispatch_queue> _journalQueue;
	NSObject*<OS_dispatch_group> _journalGroup;
	unsigned long long _pendingJournalMerges;
	NSObject*<OS_dispatch_queue> _secondaryJournalMergeQueue;
	NSMutableDictionary* _extendedTransactions;
	NSDictionary* _databasePoolForType;
	HDContentProtectionManager* _contentProtectionManager;
	double _offsetTimeInterval;
	double _protectedDataFlushInterval;
	long long _corruptedMigrationAttemptsCount;
	/*^block*/id _unitTest_didWaitForJournalMergeHandler;

}

@property (nonatomic,copy,readonly) NSString * profileDirectoryPath;                                                               //@synthesize profileDirectoryPath=_profileDirectoryPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadLocalTransactionKey;                                                          //@synthesize threadLocalTransactionKey=_threadLocalTransactionKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadLocalTransactionContextKey;                                                   //@synthesize threadLocalTransactionContextKey=_threadLocalTransactionContextKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadLocalIgnoreTransactionContextKey;                                             //@synthesize threadLocalIgnoreTransactionContextKey=_threadLocalIgnoreTransactionContextKey - In the implementation block
@property (readonly) BOOL invalidated; 
@property (nonatomic,retain) HDAssertionManager * assertionManager;                                                                //@synthesize assertionManager=_assertionManager - In the implementation block
@property (nonatomic,retain) NSLock * schemaMigrationLock;                                                                         //@synthesize schemaMigrationLock=_schemaMigrationLock - In the implementation block
@property (nonatomic,retain) NSConditionLock * activeDatabasesLock;                                                                //@synthesize activeDatabasesLock=_activeDatabasesLock - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeDatabases;                                                                       //@synthesize activeDatabases=_activeDatabases - In the implementation block
@property (nonatomic,retain) NSHashTable * migratedDatabases;                                                                      //@synthesize migratedDatabases=_migratedDatabases - In the implementation block
@property (nonatomic,retain) NSOperationQueue * asynchronousOperationQueue;                                                        //@synthesize asynchronousOperationQueue=_asynchronousOperationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> journalQueue;                                                            //@synthesize journalQueue=_journalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> journalGroup;                                                            //@synthesize journalGroup=_journalGroup - In the implementation block
@property (assign,nonatomic) unsigned long long pendingJournalMerges;                                                              //@synthesize pendingJournalMerges=_pendingJournalMerges - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> secondaryJournalMergeQueue;                                              //@synthesize secondaryJournalMergeQueue=_secondaryJournalMergeQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * extendedTransactions;                                                           //@synthesize extendedTransactions=_extendedTransactions - In the implementation block
@property (nonatomic,retain) NSDictionary * databasePoolForType;                                                                   //@synthesize databasePoolForType=_databasePoolForType - In the implementation block
@property (nonatomic,readonly) HDContentProtectionManager * contentProtectionManager;                                              //@synthesize contentProtectionManager=_contentProtectionManager - In the implementation block
@property (assign,nonatomic) double offsetTimeInterval;                                                                            //@synthesize offsetTimeInterval=_offsetTimeInterval - In the implementation block
@property (assign,nonatomic) double protectedDataFlushInterval;                                                                    //@synthesize protectedDataFlushInterval=_protectedDataFlushInterval - In the implementation block
@property (assign,nonatomic) BOOL didRunPostMigrationUpdates;                                                                      //@synthesize didRunPostMigrationUpdates=_didRunPostMigrationUpdates - In the implementation block
@property (assign,nonatomic) long long corruptedMigrationAttemptsCount;                                                            //@synthesize corruptedMigrationAttemptsCount=_corruptedMigrationAttemptsCount - In the implementation block
@property (nonatomic,copy) id unitTest_didWaitForJournalMergeHandler;                                                              //@synthesize unitTest_didWaitForJournalMergeHandler=_unitTest_didWaitForJournalMergeHandler - In the implementation block
@property (nonatomic,readonly) HDDatabaseJournal * journal;                                                                        //@synthesize journal=_journal - In the implementation block
@property (nonatomic,readonly) HDDatabaseJournal * cloudSyncJournal;                                                               //@synthesize cloudSyncJournal=_cloudSyncJournal - In the implementation block
@property (assign,nonatomic,__weak) HDProfile * profile;                                                                           //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isDataProtectedByFirstUnlockAvailable,nonatomic,readonly) BOOL dataProtectedByFirstUnlockAvailable; 
@property (getter=isProtectedDataAvailable,nonatomic,readonly) BOOL protectedDataAvailable; 
+(id)createDatabaseConnectionWithURL:(id)arg1 ;
+(long long)unitTest_createOrMigrateDatabaseAtDirectoryURL:(id)arg1 schemaProviders:(id)arg2 behavior:(id)arg3 error:(id*)arg4 ;
+(BOOL)unitTest_prepareUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2 error:(id*)arg3 ;
+(id)allCurrentAndFutureEntityClasses;
+(id)allEntityClassesWithBehavior:(id)arg1 ;
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(id)_checkOutDatabaseForTransaction:(id)arg1 databaseType:(long long)arg2 error:(id*)arg3 ;
-(void)setProfile:(HDProfile *)arg1 ;
-(BOOL)performWithJournalType:(long long)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(long long)_performMigrationWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2 error:(id*)arg3 ;
-(NSObject*<OS_dispatch_queue>)journalQueue;
-(id)_cloudSyncJournalDirectoryPath;
-(void)performWhenDataProtectedByFirstUnlockIsAvailable:(/*^block*/id)arg1 ;
-(HDDatabaseJournal *)journal;
-(id)protectedDatabaseURL;
-(id)progressForJournalMergeWithType:(long long)arg1 ;
-(void)setCorruptedMigrationAttemptsCount:(long long)arg1 ;
-(id)unitTest_currentTransaction;
-(void)_reportMigrationResultIfNecessaryForStatus:(long long)arg1 database:(id)arg2 protectedDatabase:(BOOL)arg3 error:(id)arg4 ;
-(NSConditionLock *)activeDatabasesLock;
-(BOOL)invalidated;
-(NSString *)threadLocalIgnoreTransactionContextKey;
-(void)setUnitTest_didWaitForJournalMergeHandler:(id)arg1 ;
-(double)protectedDataFlushInterval;
-(NSOperationQueue *)asynchronousOperationQueue;
-(void)setAsynchronousOperationQueue:(NSOperationQueue *)arg1 ;
-(void)removeProtectedDataObserver:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(id)databaseURLForType:(long long)arg1 ;
-(long long)_fileSizeForURL:(id)arg1 error:(id*)arg2 ;
-(void)databaseJournalMergeDidComplete:(id)arg1 ;
-(BOOL)_isDatabaseValidWithError:(id*)arg1 ;
-(HDAssertionManager *)assertionManager;
-(void)_protectedDataQueue_mergeJournalAsynchronously;
-(BOOL)performWithTransactionContext:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)shouldRequestRebuildForFailure:(long long)arg1 code:(int)arg2 ;
-(void)_protectedDataQueue_beginObservingContentProtection;
-(void)setOffsetTimeInterval:(double)arg1 ;
-(void)setPendingJournalMerges:(unsigned long long)arg1 ;
-(BOOL)didRunPostMigrationUpdates;
-(void)requestHFDRebuild;
-(void)setSchemaMigrationLock:(NSLock *)arg1 ;
-(id)takeAccessibilityAssertionWithOwnerIdentifier:(id)arg1 shouldPerformTransaction:(BOOL)arg2 timeout:(double)arg3 error:(id*)arg4 ;
-(BOOL)_migrateOrCreateProtectedSchemaInDatabase:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(HDDatabaseJournal *)cloudSyncJournal;
-(void)migrationTransaction:(id)arg1 didCreateDatabasesWithIdentifier:(id)arg2 ;
-(BOOL)addJournalEntry:(id)arg1 error:(id*)arg2 ;
-(void)_protectedDataQueue_flushProtectedDataIfNecessary;
-(void)setCurrentHFDRebuildStage:(long long)arg1 ;
-(NSString *)profileDirectoryPath;
-(id)cloneAccessibilityAssertion:(id)arg1 ownerIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)_journalForType:(long long)arg1 ;
-(id)databaseSizeInBytesExcludingHFD;
-(void)checkInDatabase:(id)arg1 type:(long long)arg2 ;
-(BOOL)accessHighFrequencyDataStoreWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(long long)databaseTypeForDatabasePool:(id)arg1 ;
-(id)extendedDatabaseTransactionForIdentifier:(id)arg1 ;
-(id)_URLForWALForDatabaseAtURL:(id)arg1 ;
-(id)_createAndVerifyDatabaseConnectionWithType:(long long)arg1 error:(id*)arg2 ;
-(void)performWhenDataProtectedByFirstUnlockIsAvailableOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSHashTable *)migratedDatabases;
-(id)unitTest_didWaitForJournalMergeHandler;
-(BOOL)addJournalEntries:(id)arg1 error:(id*)arg2 ;
-(double)offsetTimeInterval;
-(void)setActiveDatabasesLock:(NSConditionLock *)arg1 ;
-(HDContentProtectionManager *)contentProtectionManager;
-(void)reportHFDRebuildStatus:(long long)arg1 error:(id)arg2 ;
-(BOOL)isDataProtectedByFirstUnlockAvailable;
-(void)setSecondaryJournalMergeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)_allowProtectedDataAccessWhileLockedWithTransaction:(id)arg1 ;
-(BOOL)discardHighFrequencyDataStoreWithError:(id*)arg1 ;
-(BOOL)rebuildIfNeeded:(id*)arg1 ;
-(id)diagnosticDescription;
-(void)_protectedDataQueue_cancelProtectedDataFlushTimer;
-(void)setJournalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HDProfile *)profile;
-(BOOL)performHighPriorityTransactionsWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(long long)currentHFDRebuildStage;
-(id)newDatabaseForDatabasePool:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)secondaryJournalMergeQueue;
-(void)addProtectedDataObserver:(id)arg1 ;
-(NSString *)threadLocalTransactionContextKey;
-(id)mainDatabaseURL;
-(NSString *)threadLocalTransactionKey;
-(BOOL)_attachProtectedDatabaseIfNeededToDatabase:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)databasePoolForType;
-(void)HFDataStore:(id)arg1 detectedCorruptionOfType:(long long)arg2 code:(int)arg3 error:(id)arg4 shouldPromptUser:(BOOL)arg5 ;
-(void)invalidateAndWait;
-(void)_checkInDatabase:(id)arg1 type:(long long)arg2 flushImmediately:(BOOL)arg3 ;
-(id)checkOutUnprotectedDatabase:(id)arg1 error:(id*)arg2 ;
-(void)unitTest_setContentProtectionStateAndWait:(long long)arg1 ;
-(long long)_migrateOrCreateProtectedSchemaInDatabaseIfWritable:(id)arg1 error:(id*)arg2 ;
-(BOOL)performTransactionWithContext:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 inaccessibilityHandler:(/*^block*/id)arg4 ;
-(void)performAsynchronouslySerial:(/*^block*/id)arg1 ;
-(BOOL)_journalQueue_performJournalMergeAndCleanup;
-(void)setProtectedDataFlushInterval:(double)arg1 ;
-(void)databasePool:(id)arg1 didFlushDatabases:(id)arg2 ;
-(unsigned long long)pendingJournalMerges;
-(unsigned long long)journalChapterCountForType:(long long)arg1 ;
-(long long)_protectedDataState;
-(BOOL)_canAttachProtectedDatabaseForTransaction:(id)arg1 error:(id*)arg2 ;
-(NSLock *)schemaMigrationLock;
-(void)setDatabasePoolForType:(NSDictionary *)arg1 ;
-(id)databasePoolForDatabaseType:(long long)arg1 ;
-(void)unitTest_requestHFDRebuild;
-(id)databaseSizeInBytesForTypeUnprotected:(BOOL)arg1 WAL:(BOOL)arg2 ;
-(void)_performWhenDataProtectedByFirstUnlockIsAvailableOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_group>)journalGroup;
-(BOOL)_protectedDataQueue_isProtectedDataFlushDeadlinePassed;
-(id)highFrequencyDataStoreURL;
-(id)allEntityClassesWithProtectionClass:(long long)arg1 ;
-(void)migrationTransaction:(id)arg1 didEncounterDatabaseMismatchWithUnprotectedIdentifier:(id)arg2 protectedIdentifier:(id)arg3 ;
-(void)setAssertionManager:(HDAssertionManager *)arg1 ;
-(id)beginExtendedTransactionWithContext:(id)arg1 transactionTimeout:(double)arg2 continuationTimeout:(double)arg3 error:(id*)arg4 ;
-(void)_mergeSecondaryJournals;
-(id)_threadLocalTransaction;
-(void)addDatabaseJournalMergeObserver:(id)arg1 journalType:(long long)arg2 queue:(id)arg3 ;
-(NSMutableDictionary *)extendedTransactions;
-(NSMutableSet *)activeDatabases;
-(BOOL)_applyOffsetTimeInterval:(double)arg1 database:(id)arg2 error:(id*)arg3 ;
-(void)performAsynchronously:(/*^block*/id)arg1 ;
-(BOOL)isProtectedDataAvailable;
-(id)checkOutProtectedDatabase:(id)arg1 highFrequencyDataStore:(id*)arg2 error:(id*)arg3 ;
-(id)_newDatabaseConnectionWithType:(long long)arg1 error:(id*)arg2 ;
-(long long)corruptedMigrationAttemptsCount;
-(BOOL)_runPostMigrationUpdatesWithDatabase:(id)arg1 error:(id*)arg2 ;
-(void)removeDatabaseJournalMergeObserver:(id)arg1 journalType:(long long)arg2 ;
-(void)obliterateWithReason:(id)arg1 preserveCopy:(BOOL)arg2 ;
-(void)setActiveDatabases:(NSMutableSet *)arg1 ;
-(void)setExtendedTransactions:(NSMutableDictionary *)arg1 ;
-(id)HFDSizeInBytes;
-(void)setMigratedDatabases:(NSHashTable *)arg1 ;
-(id)_threadLocalTransactionContext;
-(id)_journalDirectoryPath;
-(BOOL)_waitForMergesWithCurrentJournal:(id)arg1 error:(id*)arg2 ;
-(id)takeAccessibilityAssertionWithOwnerIdentifier:(id)arg1 timeout:(double)arg2 error:(id*)arg3 ;
-(void)setDidRunPostMigrationUpdates:(BOOL)arg1 ;
-(void)addProtectedDataObserver:(id)arg1 queue:(id)arg2 ;
-(void)beginObservingContentProtection;
-(id)_createDatabaseConnectionWithType:(long long)arg1 ;
-(void)setJournalGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)dealloc;
-(id)_currentDatabaseJournal;
-(void)finalizeExtendedTransactionForIdentifier:(id)arg1 ;
-(void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2 ;
@end

