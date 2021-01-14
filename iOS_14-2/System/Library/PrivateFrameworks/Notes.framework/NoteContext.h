/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <libobjc.A.dylib/ICLegacyContext.h>

@class NSManagedObjectContext, NoteStoreObject, NoteAccountObject, AccountUtilities, CPExclusiveLock, NSNumber, NSMutableDictionary, ICManagedObjectContextUpdater, ICSelectorDelayer;

@interface NoteContext : NSObject <ICLegacyContext> {

	NSManagedObjectContext* _managedObjectContext;
	NoteStoreObject* _localStore;
	NoteAccountObject* _localAccount;
	AccountUtilities* _accountUtilities;
	NSManagedObjectContext* _nextIdContext;
	CPExclusiveLock* _nextIdLock;
	NSNumber* _nextId;
	CPExclusiveLock* _objectCreationLock;
	unsigned long long _notificationCount;
	BOOL _logChanges;
	BOOL _indexInBatches;
	BOOL _hasPriorityInSaveConflicts;
	BOOL _inMigrator;
	NSMutableDictionary* _notePropertyObjectsRealized;
	BOOL _isMainContext;
	BOOL _usePrivateQueue;
	ICManagedObjectContextUpdater* _mocUpdater;
	ICSelectorDelayer* _externalChangeNotificationDelayer;

}

@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,retain) AccountUtilities * accountUtilities;                                 //@synthesize accountUtilities=_accountUtilities - In the implementation block
@property (assign,nonatomic) BOOL isMainContext;                                                  //@synthesize isMainContext=_isMainContext - In the implementation block
@property (assign,nonatomic) BOOL usePrivateQueue;                                                //@synthesize usePrivateQueue=_usePrivateQueue - In the implementation block
@property (nonatomic,retain) ICManagedObjectContextUpdater * mocUpdater;                          //@synthesize mocUpdater=_mocUpdater - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * externalChangeNotificationDelayer;               //@synthesize externalChangeNotificationDelayer=_externalChangeNotificationDelayer - In the implementation block
@property (nonatomic,retain,readonly) NSManagedObjectContext * managedObjectContext; 
+(id)generateGUID;
+(id)visibleNotesIncludingEmptyBodyContentPredicate;
+(id)persistentStoreCoordinator;
+(unsigned long long)countOfVisibleNotesInCollection:(id)arg1 ;
+(id)newFetchRequestForAccounts;
+(id)storeOptions;
+(void)removeSqliteAndIdxFiles;
+(id)newFetchRequestForStores;
+(unsigned long long)countOfVisibleNotesMatchingPredicate:(id)arg1 includingNoteWithoutBodyContent:(BOOL)arg2 context:(id)arg3 ;
+(id)newlyAddedAttachmentInContext:(id)arg1 ;
+(id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(BOOL)arg2 context:(id)arg3 fetchLimit:(unsigned long long)arg4 ;
+(id)searchIndexerDataSource;
+(BOOL)shouldLogIndexing;
+(void)setTestsNotesRootPath:(id)arg1 ;
+(id)newManagedObjectContext;
+(id)newFetchRequestForNotes;
+(unsigned long long)countOfVisibleNotesMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(void)removeConflictingSqliteAndIdxFiles;
+(id)newLegacyContext;
+(BOOL)databaseIsCorrupt:(id)arg1 ;
+(id)pathForPersistentStore;
+(id)visibleNotesPredicate;
+(id)fileProtectionOption;
+(void)clearTestsNotesRootPath;
+(id)allVisibleNotesMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)defaultNotesSortDescriptors;
+(unsigned long long)countOfVisibleNotesInCollectionIncludingNotesWithoutBodyContent:(id)arg1 ;
+(id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(BOOL)arg2 context:(id)arg3 ;
+(id)urlForPersistentStore;
+(id)fileURLProtectionOption;
+(id)managedObjectModel;
+(id)pathForIndex;
-(void)clearCaches;
-(BOOL)save:(id*)arg1 ;
-(id)localStore;
-(NSManagedObjectContext *)managedObjectContext;
-(id)allVisibleNotesInCollection:(id)arg1 sorted:(BOOL)arg2 ;
-(id)nextIndex;
-(void)trackChanges:(id)arg1 ;
-(id)_notePropertyObjectForKey:(id)arg1 ;
-(unsigned long long)countOfVisibleNotesInCollection:(id)arg1 ;
-(id)newlyAddedAttachment;
-(BOOL)usePrivateQueue;
-(id)init;
-(void)deleteNote:(id)arg1 ;
-(BOOL)saveOutsideApp:(id*)arg1 ;
-(long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4 ;
-(id)faultedInStoresForAccounts:(id)arg1 ;
-(void)setUsePrivateQueue:(BOOL)arg1 ;
-(void)setAccountUtilities:(AccountUtilities *)arg1 ;
-(void)receiveDarwinNotificationWithChangeLogging:(BOOL)arg1 ;
-(id)allVisibleNotesInCollection:(id)arg1 ;
-(id)collectionForObjectID:(id)arg1 ;
-(id)initWithAccountUtilities:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(BOOL)setUpLastIndexTid;
-(void)sortNotes:(id)arg1 ;
-(id)accountForAccountId:(id)arg1 ;
-(id)noteForObjectID:(id)arg1 ;
-(id)newFRCForCollection:(id)arg1 delegate:(id)arg2 ;
-(id)newFRCForAccountsWithDelegate:(id)arg1 ;
-(unsigned long long)countOfNotesMatchingPredicate:(id)arg1 ;
-(id)visibleNoteForObjectID:(id)arg1 ;
-(void)batchFaultNotes:(id)arg1 ;
-(id)defaultStoreForNewNote;
-(AccountUtilities *)accountUtilities;
-(id)allVisibleNotesForAccountWithObjectID:(id)arg1 ;
-(id)allVisibleNotesMatchingPredicate:(id)arg1 ;
-(unsigned long long)countOfVisibleNotesMatchingPredicate:(id)arg1 ;
-(void)cleanUpLocks;
-(id)allNotesMatchingPredicate:(id)arg1 ;
-(id)allAccounts;
-(id)mostRecentlyModifiedNoteInCollection:(id)arg1 ;
-(id)allNotes;
-(id)newFRCForStoresWithDelegate:(id)arg1 ;
-(BOOL)hasMultipleEnabledStores;
-(id)newFetchRequestForNotes;
-(id)allNotesWithoutBodiesInCollection:(id)arg1 ;
-(id)newlyAddedNoteWithGUID:(id)arg1 ;
-(void)_createLocalAccount:(id*)arg1 andStore:(id*)arg2 ;
-(BOOL)isMainContext;
-(BOOL)setUpLocalAccountAndStore;
-(unsigned long long)countOfVisibleNotes;
-(void)forceSetUpUniqueObjects;
-(id)initForMainContext;
-(id)newlyAddedNote;
-(unsigned long long)countOfNotesInCollection:(id)arg1 ;
-(BOOL)shouldDisableLocalStore;
-(BOOL)nonEmptyNoteExistsForLegacyAccountWithObjectID:(id)arg1 ;
-(id)initWithPrivateQueue:(BOOL)arg1 ;
-(void)enableChangeLogging:(BOOL)arg1 ;
-(BOOL)saveSilently:(id*)arg1 ;
-(void)setMocUpdater:(ICManagedObjectContextUpdater *)arg1 ;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(id)initWithAccountUtilities:(id)arg1 inMigrator:(BOOL)arg2 ;
-(void)updateForRecentChanges;
-(unsigned long long)countOfStores;
-(id)propertyValueForKey:(id)arg1 ;
-(BOOL)forceDeleteAccount:(id)arg1 ;
-(void)setUpUniqueObjects;
-(BOOL)setUpCoreDataStack;
-(void)deleteNoteRegardlessOfConstraints:(id)arg1 ;
-(BOOL)deleteAccount:(id)arg1 ;
-(id)localAccount;
-(void)managedObjectContextWillSaveNotification:(id)arg1 ;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(void)reset;
-(id)allStores;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(BOOL)shouldObserveDarwinNotifications;
-(id)newlyAddedAccount;
-(void)invalidate;
-(id)allAccountsAsFaults:(BOOL)arg1 prefechedRelationshipKeyPaths:(id)arg2 ;
-(id)allNotesInCollection:(id)arg1 ;
-(id)visibleNotesPredicate;
-(void)setHasPriorityInSaveConflicts:(BOOL)arg1 ;
-(id)notesForIntegerIds:(id)arg1 ;
-(id)newFRCForFetchRequest:(id)arg1 delegate:(id)arg2 performFetch:(BOOL)arg3 ;
-(ICSelectorDelayer *)externalChangeNotificationDelayer;
-(id)initWithAccountUtilities:(id)arg1 inMigrator:(BOOL)arg2 isMainContext:(BOOL)arg3 usePrivateQueue:(BOOL)arg4 ;
-(ICManagedObjectContextUpdater *)mocUpdater;
-(id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(BOOL)arg2 ;
-(id)newlyAddedStore;
-(unsigned long long)countOfNotes;
-(id)initWithPrivateQueue;
-(id)newFRCForCollection:(id)arg1 delegate:(id)arg2 performFetch:(BOOL)arg3 ;
-(void)resetNotificationCount;
-(id)noteChangeWithType:(int)arg1 store:(id)arg2 ;
-(id)allVisibleNotes;
-(id)getNextIdObject;
-(void)setExternalChangeNotificationDelayer:(ICSelectorDelayer *)arg1 ;
-(BOOL)deleteStore:(id)arg1 ;
-(unsigned long long)countOfVisibleNotesForAccountWithObjectID:(id)arg1 ;
-(id)collectionForInfo:(id)arg1 ;
-(id)visibleNotesForIntegerIds:(id)arg1 ;
-(id)allVisibleNoteObjectIDsForAccountWithObjectID:(id)arg1 ;
-(void)postNotesChangedExternally;
-(void)setIsMainContext:(BOOL)arg1 ;
-(id)storeForObjectID:(id)arg1 ;
-(id)initForMigrator;
-(void)deleteChanges:(id)arg1 ;
-(id)liveNotesNeedingBodiesPredicate;
-(void)dealloc;
-(void)tearDownCoreDataStack;
-(void)handleMigration;
@end

