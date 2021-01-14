/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/ICManagedObjectContextUpdaterDelegate.h>
#import <libobjc.A.dylib/ICNoteContainer.h>

@protocol OS_dispatch_queue;
@class ICAccount, NSManagedObjectContext, ICFolderCustomNoteSortType, NSString, NSArray, NSData, ICPersistentContainer, ICNotesCrossProcessChangeCoordinator, ICNote, NSError, NSTimer, ICManagedObjectContextUpdater, ICAccountUtilities, NSObject, NSDictionary;

@interface ICNoteContext : NSObject <ICManagedObjectContextUpdaterDelegate, ICNoteContainer> {

	BOOL _delaySaving;
	BOOL _databaseOpenFailedDueToLowDiskSpace;
	BOOL _saving;
	BOOL _shouldEnsureLocalAccount;
	ICPersistentContainer* _persistentContainer;
	ICNotesCrossProcessChangeCoordinator* _crossProcessChangeCoordinator;
	NSManagedObjectContext* _managedObjectContext;
	ICNote* _currentNote;
	NSError* _databaseOpenError;
	NSTimer* _updateAttachmentLocationsTimer;
	unsigned long long _contextOptions;
	ICManagedObjectContextUpdater* _contextUpdater;
	ICAccountUtilities* _accountUtilities;
	NSTimer* _trashDeletionTimer;
	NSObject*<OS_dispatch_queue> _backgroundTaskQueue;
	NSDictionary* _persistentStoresByAccountId;
	unsigned long long _countOfPerformBackgroundTask;

}

@property (assign,nonatomic) unsigned long long contextOptions;                                                 //@synthesize contextOptions=_contextOptions - In the implementation block
@property (retain) NSManagedObjectContext * managedObjectContext;                                               //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) ICNotesCrossProcessChangeCoordinator * crossProcessChangeCoordinator;              //@synthesize crossProcessChangeCoordinator=_crossProcessChangeCoordinator - In the implementation block
@property (nonatomic,retain) ICManagedObjectContextUpdater * contextUpdater;                                    //@synthesize contextUpdater=_contextUpdater - In the implementation block
@property (getter=isSaving) BOOL saving;                                                                        //@synthesize saving=_saving - In the implementation block
@property (nonatomic,retain) ICAccountUtilities * accountUtilities;                                             //@synthesize accountUtilities=_accountUtilities - In the implementation block
@property (nonatomic,retain) NSTimer * trashDeletionTimer;                                                      //@synthesize trashDeletionTimer=_trashDeletionTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backgroundTaskQueue;                                  //@synthesize backgroundTaskQueue=_backgroundTaskQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldEnsureLocalAccount;                                                     //@synthesize shouldEnsureLocalAccount=_shouldEnsureLocalAccount - In the implementation block
@property (nonatomic,retain) NSDictionary * persistentStoresByAccountId;                                        //@synthesize persistentStoresByAccountId=_persistentStoresByAccountId - In the implementation block
@property (assign,nonatomic) unsigned long long countOfPerformBackgroundTask;                                   //@synthesize countOfPerformBackgroundTask=_countOfPerformBackgroundTask - In the implementation block
@property (assign,nonatomic) BOOL delaySaving;                                                                  //@synthesize delaySaving=_delaySaving - In the implementation block
@property (nonatomic,readonly) BOOL isSharedContext; 
@property (readonly) ICPersistentContainer * persistentContainer;                                               //@synthesize persistentContainer=_persistentContainer - In the implementation block
@property (nonatomic,retain) ICNote * currentNote;                                                              //@synthesize currentNote=_currentNote - In the implementation block
@property (nonatomic,retain) NSError * databaseOpenError;                                                       //@synthesize databaseOpenError=_databaseOpenError - In the implementation block
@property (assign,nonatomic) BOOL databaseOpenFailedDueToLowDiskSpace;                                          //@synthesize databaseOpenFailedDueToLowDiskSpace=_databaseOpenFailedDueToLowDiskSpace - In the implementation block
@property (nonatomic,retain) NSTimer * updateAttachmentLocationsTimer;                                          //@synthesize updateAttachmentLocationsTimer=_updateAttachmentLocationsTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) ICAccount * noteContainerAccount; 
@property (nonatomic,readonly) ICFolderCustomNoteSortType * customNoteSortType; 
@property (nonatomic,readonly) BOOL isSharedViaICloud; 
@property (nonatomic,readonly) BOOL isSharedReadOnly; 
@property (nonatomic,readonly) BOOL isAllNotesContainer; 
@property (nonatomic,readonly) BOOL canBeSharedViaICloud; 
@property (nonatomic,readonly) BOOL supportsEditingNotes; 
@property (nonatomic,readonly) BOOL isTrashFolder; 
@property (nonatomic,readonly) NSString * containerIdentifier; 
@property (nonatomic,readonly) NSArray * visibleSubFolders; 
@property (nonatomic,retain) NSData * subFolderOrderMergeableData; 
+(BOOL)isActive;
+(id)searchIndexerDataSource;
+(void)resetAppState;
+(void)useContainerNamed:(id)arg1 ;
+(void)resetAppContainer;
+(BOOL)hasContextOptions:(unsigned long long)arg1 ;
+(void)enableLocalAccount;
+(void)markOldTrashedNotesForDeletionInContext:(id)arg1 ;
+(BOOL)legacyNotesDisabled;
+(BOOL)updateSharedStateFile:(id)arg1 toState:(BOOL)arg2 error:(id*)arg3 ;
+(void)setLegacyNotesDisabled:(BOOL)arg1 ;
+(id)sharedContext;
+(id)workerManagedObjectContextForContainer:(id)arg1 ;
+(id)performBackgroundTaskSerialQueue;
+(id)snapshotManagedObjectContextForContainer:(id)arg1 ;
+(void)startSharedContextWithOptions:(unsigned long long)arg1 ;
+(BOOL)hasSharedContext;
+(BOOL)isSingleRunningNotesApp;
+(id)filenameFromFileWrapper:(id)arg1 ;
+(void)crashThisApp;
-(BOOL)save:(id*)arg1 ;
-(ICPersistentContainer *)persistentContainer;
-(NSManagedObjectContext *)managedObjectContext;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(id)accountName;
-(id)persistentStoreCoordinator;
-(BOOL)save;
-(BOOL)isAllNotesContainer;
-(void)setAccountUtilities:(ICAccountUtilities *)arg1 ;
-(ICFolderCustomNoteSortType *)customNoteSortType;
-(BOOL)supportsEditingNotes;
-(BOOL)isTrashFolder;
-(NSArray *)visibleSubFolders;
-(NSData *)subFolderOrderMergeableData;
-(void)setSubFolderOrderMergeableData:(NSData *)arg1 ;
-(void)refreshAll;
-(id)newFetchedResultsControllerForAllAccounts;
-(void)reloadPersistentContainer;
-(id)persistentStoreForAccountID:(id)arg1 ;
-(void)destroyPersistentStore;
-(void)purgeEverything;
-(id)customNoteSortTypeValue;
-(BOOL)isSharedContext;
-(void)postMoveUpdateChangeCountForNote:(id)arg1 ;
-(void)setDelaySaving:(BOOL)arg1 ;
-(ICNote *)currentNote;
-(void)setCurrentNote:(ICNote *)arg1 ;
-(NSError *)databaseOpenError;
-(BOOL)databaseOpenFailedDueToLowDiskSpace;
-(void)deleteEverything;
-(NSTimer *)updateAttachmentLocationsTimer;
-(void)setUpdateAttachmentLocationsTimer:(NSTimer *)arg1 ;
-(void)setShouldEnsureLocalAccount:(BOOL)arg1 ;
-(unsigned long long)countOfPerformBackgroundTask;
-(void)setCountOfPerformBackgroundTask:(unsigned long long)arg1 ;
-(BOOL)saveImmediately;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)backgroundTaskQueue;
-(ICAccountUtilities *)accountUtilities;
-(NSString *)containerIdentifier;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(BOOL)isDeleted;
-(void)performBackgroundTask:(/*^block*/id)arg1 ;
-(BOOL)hasContextOptions:(unsigned long long)arg1 ;
-(void)saveAndClearDecryptedDataIfNecessary;
-(void)updateAccounts;
-(void)addOrDeleteLocalAccountIfNecessary;
-(BOOL)hasAnyContextOptions:(unsigned long long)arg1 ;
-(void)setContextOptions:(unsigned long long)arg1 ;
-(void)startSearchIndexerChangeObservingIfNecessary;
-(void)accountsDidChange:(id)arg1 ;
-(id)noteVisibilityTestingForSearchingAccount;
-(void)setupCrossProcessChangeCoordinator;
-(void)setPersistentStoresByAccountId:(NSDictionary *)arg1 ;
-(void)loadAdditionalPersistentStores;
-(void)setupTrashDeletionTimer;
-(void)cloudContextFetchRecordChangeOperationDidFinish:(id)arg1 ;
-(NSTimer *)trashDeletionTimer;
-(void)purgeDeletedObjectsInManagedObjectContext:(id)arg1 ;
-(void)performSnapshotBackgroundTask:(/*^block*/id)arg1 ;
-(void)setTrashDeletionTimer:(NSTimer *)arg1 ;
-(BOOL)isSaving;
-(void)applicationWillTerminate;
-(id)primaryICloudACAccount;
-(void)setSaving:(BOOL)arg1 ;
-(BOOL)recoverFromSaveError;
-(BOOL)delaySaving;
-(void)cleanupAdditionalPersistentStores;
-(id)allICloudACAccounts;
-(void)setBackgroundTaskQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)managedObjectContextUpdater:(id)arg1 objectDidChange:(id)arg2 ;
-(void)createAdditionalPersistentStoresWithAccountIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldEnsureLocalAccount;
-(id)predicateForVisibleNotes;
-(ICManagedObjectContextUpdater *)contextUpdater;
-(BOOL)supportsVisibilityTestingType:(long long)arg1 ;
-(id)predicateForSearchableNotes;
-(id)predicateForSearchableAttachments;
-(id)predicateForPinnedNotes;
-(id)fetchedResultsControllerForFetchRequest:(id)arg1 sectionNameKeyPath:(id)arg2 ;
-(id)persistentContainerQueue;
-(void)setCrossProcessChangeCoordinator:(ICNotesCrossProcessChangeCoordinator *)arg1 ;
-(void)setContextUpdater:(ICManagedObjectContextUpdater *)arg1 ;
-(void)clearPersistentContainer;
-(void)setDatabaseOpenError:(NSError *)arg1 ;
-(void)setDatabaseOpenFailedDueToLowDiskSpace:(BOOL)arg1 ;
-(void)refreshPersistentStoresByAccountIdFromPersistentStores:(id)arg1 ;
-(ICNotesCrossProcessChangeCoordinator *)crossProcessChangeCoordinator;
-(unsigned long long)contextOptions;
-(BOOL)isSharedViaICloud;
-(BOOL)isSharedReadOnly;
-(void)startIndexingWithCoreSpotlightDelegateForDescription:(id)arg1 coordinator:(id)arg2 ;
-(void)createAdditionalPersistentStoresWithAccountIdentifiers:(id)arg1 persistentContainer:(id)arg2 ;
-(id)defaultPersistentStoreFromPersistentStores:(id)arg1 ;
-(id)inMemoryPersistentStoreFromPersistentStores:(id)arg1 ;
-(id)storeFilenameForAccountIdentifier:(id)arg1 ;
-(NSDictionary *)persistentStoresByAccountId;
-(id)workerManagedObjectContext;
-(id)snapshotManagedObjectContext;
-(id)titleForNavigationBar;
-(void)dealloc;
-(BOOL)noteIsVisible:(id)arg1 ;
-(id)visibleNotes;
-(unsigned long long)visibleNotesCount;
-(id)titleForTableViewCell;
-(BOOL)canBeSharedViaICloud;
-(BOOL)isModernCustomFolder;
-(void)saveSubFolderMergeableDataIfNeeded;
-(BOOL)mergeWithSubFolderMergeableData:(id)arg1 ;
-(void)updateSubFolderMergeableDataChangeCount;
-(ICAccount *)noteContainerAccount;
@end

