/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDAssertionObserver.h>
#import <libobjc.A.dylib/HDContentProtectionObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDSQLiteDatabaseDelegate.h>
#import <libobjc.A.dylib/HDSQLiteDatabasePoolDelegate.h>
#import <libobjc.A.dylib/HDSQLiteDatabaseProvider.h>
#import <libobjc.A.dylib/HDDatabaseJournalDelegate.h>
#import <libobjc.A.dylib/HDHealthDatabase.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;
@class NSObject, NSLock, HKObserverSet, NSMutableArray, NSDate, NSMutableDictionary, HDDatabaseJournal, HDProfile, NSString, HDAssertionManager, NSConditionLock, NSMutableSet, NSHashTable, NSOperationQueue, NSDictionary, HDContentProtectionManager;

@interface HDDatabase : NSObject <HDAssertionObserver, HDContentProtectionObserver, HDDiagnosticObject, HDSQLiteDatabaseDelegate, HDSQLiteDatabasePoolDelegate, HDSQLiteDatabaseProvider, HDDatabaseJournalDelegate, HDHealthDatabase> {

	AB _invalidated;
	NSObject*<OS_dispatch_queue> _serialAsynchronousQueue;
	NSObject*<OS_dispatch_queue> _hfdQueue;
	shared_ptr<health::DataStore>* _highFrequencyDataStore;
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
+(void)loadEntityClasses;
+(id)allCurrentAndFutureEntityClasses;
+(id)_databaseCorruptionDefaultKeyForDatabaseWithName:(id)arg1 ;
+(void)reportDatabaseCorruptionForDatabaseWithName:(id)arg1 ;
+(void)didEncounterUncorruptedDatabaseWithName:(id)arg1 ;
+(void)reportIntegrityCheckFailure;
+(void)didPassIntegrityCheck;
-(void)dealloc;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)isProtectedDataAvailable;
-(BOOL)invalidated;
-(HDDatabaseJournal *)journal;
-(void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2 ;
-(void)invalidateAndWait;
-(id)diagnosticDescription;
-(id)_journalDirectoryPath;
-(HDAssertionManager *)assertionManager;
-(BOOL)performTransactionWithContext:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 inaccessibilityHandler:(/*^block*/id)arg4 ;
-(BOOL)addJournalEntries:(id)arg1 error:(id*)arg2 ;
-(void)addProtectedDataObserver:(id)arg1 ;
-(void)performWhenDataProtectedByFirstUnlockIsAvailable:(/*^block*/id)arg1 ;
-(void)removeProtectedDataObserver:(id)arg1 ;
-(id)takeAccessibilityAssertionWithOwnerIdentifier:(id)arg1 timeout:(double)arg2 error:(id*)arg3 ;
-(void)addProtectedDataObserver:(id)arg1 queue:(id)arg2 ;
-(BOOL)performWithTransactionContext:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(void)setOffsetTimeInterval:(double)arg1 ;
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(id)virtualFilesystemModuleForDatabase:(id)arg1 ;
-(id)databaseSizeInBytesExcludingHFD;
-(id)HFDSizeInBytes;
-(id)highFrequencyDataStoreURL;
-(BOOL)accessHighFrequencyDataStoreWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(void)performAsynchronously:(/*^block*/id)arg1 ;
-(void)obliterateWithReason:(id)arg1 preserveCopy:(BOOL)arg2 ;
-(void)performWhenDataProtectedByFirstUnlockIsAvailableOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(HDContentProtectionManager *)contentProtectionManager;
-(void)addDatabaseJournalMergeObserver:(id)arg1 journalType:(long long)arg2 queue:(id)arg3 ;
-(void)removeDatabaseJournalMergeObserver:(id)arg1 journalType:(long long)arg2 ;
-(unsigned long long)journalFileCountForType:(long long)arg1 ;
-(BOOL)addJournalEntry:(id)arg1 error:(id*)arg2 ;
-(id)progressForJournalMergeWithType:(long long)arg1 ;
-(BOOL)performWithJournalType:(long long)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(long long)_migrateOrCreateSchemaWithMigrationTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)_runPostMigrationUpdatesWithDatabase:(id)arg1 error:(id*)arg2 ;
-(long long)_createEntitiesWithMigrationTransaction:(id)arg1 error:(id*)arg2 ;
-(long long)_migrateWithMigrationTransaction:(id)arg1 fromUserVersion:(long long)arg2 error:(id*)arg3 ;
-(long long)_verifyDatabaseIdentifiersAreValidWithMigrationTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_enableIncrementalAutovacuumIfNeededForTransaction:(id)arg1 ;
-(id)allEntityClassesWithProtectionClass:(long long)arg1 ;
-(BOOL)_createDataTablesInDatabase:(id)arg1 entityClasses:(id)arg2 requiredPrefix:(id)arg3 error:(id*)arg4 ;
-(long long)currentSchemaVersionForProtectionClass:(long long)arg1 ;
-(BOOL)_createEntitiesForSchemaProvider:(id)arg1 protectionClass:(long long)arg2 migrator:(id)arg3 error:(id*)arg4 ;
-(void)_presentRollbackAlertForSchema:(id)arg1 protectionClass:(long long)arg2 foundVersion:(long long)arg3 currentVersion:(long long)arg4 ;
-(BOOL)_migrationRequiredForProtectionClass:(long long)arg1 migrator:(id)arg2 schemaProviders:(id)arg3 error:(id*)arg4 ;
-(BOOL)_createEntitiesOrAddMigrationStepsForProtectionClass:(long long)arg1 schemaProviders:(id)arg2 migrator:(id)arg3 error:(id*)arg4 ;
-(double)offsetTimeInterval;
-(BOOL)didRunPostMigrationUpdates;
-(BOOL)_applyOffsetTimeInterval:(double)arg1 database:(id)arg2 error:(id*)arg3 ;
-(void)setDidRunPostMigrationUpdates:(BOOL)arg1 ;
-(id)allEntityClasses;
-(long long)migrateOrCreateSchemaWithMigrationTransaction:(id)arg1 error:(id*)arg2 ;
-(id)_cloudSyncJournalDirectoryPath;
-(void)_reportDatabaseSizes;
-(id)mainDatabaseURL;
-(long long)_fileSizeForURL:(id)arg1 error:(id*)arg2 ;
-(id)_URLForWALForDatabaseAtURL:(id)arg1 ;
-(id)protectedDatabaseURL;
-(NSString *)profileDirectoryPath;
-(long long)_protectedDataState;
-(void)_protectedDataQueue_mergeJournalAsynchronously;
-(BOOL)_allowProtectedDataAccessWhileLockedWithTransaction:(id)arg1 ;
-(BOOL)_migrateOrCreateProtectedSchemaInDatabase:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(BOOL)_isDatabaseValidWithError:(id*)arg1 ;
-(id)_threadLocalTransaction;
-(id)_threadLocalTransactionContext;
-(id)_journalForType:(long long)arg1 ;
-(BOOL)_waitForMergesWithCurrentJournal:(id)arg1 error:(id*)arg2 ;
-(void)_performWhenDataProtectedByFirstUnlockIsAvailableOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_createDatabaseConnectionWithURL:(id)arg1 ;
-(id)_createDatabaseConnection;
-(long long)_performMigrationWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(void)_reportMigrationResultIfNecessaryForStatus:(long long)arg1 database:(id)arg2 protectedDatabase:(BOOL)arg3 error:(id)arg4 ;
-(long long)_migrateOrCreateProtectedSchemaInDatabaseIfWritable:(id)arg1 error:(id*)arg2 ;
-(void)_protectedDataQueue_flushProtectedDataIfNecessary;
-(id)_checkOutDatabaseForTransaction:(id)arg1 databaseType:(long long)arg2 error:(id*)arg3 ;
-(BOOL)_canAttachProtectedDatabaseForTransaction:(id)arg1 error:(id*)arg2 ;
-(id)databasePoolForDatabaseType:(long long)arg1 ;
-(BOOL)_attachProtectedDatabaseIfNeededToDatabase:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(void)_checkInDatabase:(id)arg1 type:(long long)arg2 flushImmediately:(BOOL)arg3 ;
-(id)_newDatabaseConnectionWithError:(id*)arg1 ;
-(void)_protectedDataQueue_beginObservingContentProtection;
-(BOOL)_journalQueue_performJournalMergeAndCleanup;
-(void)_protectedDataQueue_cancelProtectedDataFlushTimer;
-(double)protectedDataFlushInterval;
-(id)takeAccessibilityAssertionWithOwnerIdentifier:(id)arg1 shouldPerformTransaction:(BOOL)arg2 timeout:(double)arg3 error:(id*)arg4 ;
-(shared_ptr<health::DataStore>*)_highFrequencyDataStoreWithError:(id*)arg1 ;
-(BOOL)_protectedDataQueue_isProtectedDataFlushDeadlinePassed;
-(id)_currentDatabaseJournal;
-(void)_mergeSecondaryJournals;
-(id)newDatabaseForDatabasePool:(id)arg1 error:(id*)arg2 ;
-(void)databasePool:(id)arg1 didFlushDatabases:(id)arg2 ;
-(id)databaseTransaction:(id)arg1 checkOutDatabaseWithType:(long long)arg2 error:(id*)arg3 ;
-(void)checkInDatabase:(id)arg1 type:(long long)arg2 ;
-(void)databaseJournalMergeDidComplete:(id)arg1 ;
-(id)cloneAccessibilityAssertion:(id)arg1 ownerIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)performAsynchronouslySerial:(/*^block*/id)arg1 ;
-(BOOL)isDataProtectedByFirstUnlockAvailable;
-(id)beginExtendedTransactionWithContext:(id)arg1 transactionTimeout:(double)arg2 continuationTimeout:(double)arg3 error:(id*)arg4 ;
-(id)extendedDatabaseTransactionForIdentifier:(id)arg1 ;
-(void)finalizeExtendedTransactionForIdentifier:(id)arg1 ;
-(id)dumpSchemaAndReturnError:(id*)arg1 ;
-(void)setProtectedDataFlushInterval:(double)arg1 ;
-(void)beginObservingContentProtection;
-(BOOL)discardHighFrequencyDataStoreWithError:(id*)arg1 ;
-(void)unitTest_setContentProtectionStateAndWait:(long long)arg1 ;
-(id)unitTest_currentTransaction;
-(HDDatabaseJournal *)cloudSyncJournal;
-(NSString *)threadLocalTransactionKey;
-(NSString *)threadLocalTransactionContextKey;
-(NSString *)threadLocalIgnoreTransactionContextKey;
-(void)setAssertionManager:(HDAssertionManager *)arg1 ;
-(NSLock *)schemaMigrationLock;
-(void)setSchemaMigrationLock:(NSLock *)arg1 ;
-(NSConditionLock *)activeDatabasesLock;
-(void)setActiveDatabasesLock:(NSConditionLock *)arg1 ;
-(NSMutableSet *)activeDatabases;
-(void)setActiveDatabases:(NSMutableSet *)arg1 ;
-(NSHashTable *)migratedDatabases;
-(void)setMigratedDatabases:(NSHashTable *)arg1 ;
-(NSOperationQueue *)asynchronousOperationQueue;
-(void)setAsynchronousOperationQueue:(NSOperationQueue *)arg1 ;
-(NSObject*<OS_dispatch_queue>)journalQueue;
-(void)setJournalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_group>)journalGroup;
-(void)setJournalGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(unsigned long long)pendingJournalMerges;
-(void)setPendingJournalMerges:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)secondaryJournalMergeQueue;
-(void)setSecondaryJournalMergeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)extendedTransactions;
-(void)setExtendedTransactions:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)databasePoolForType;
-(void)setDatabasePoolForType:(NSDictionary *)arg1 ;
-(id)unitTest_didWaitForJournalMergeHandler;
-(void)setUnitTest_didWaitForJournalMergeHandler:(id)arg1 ;
@end

