/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/ICNoteContainer.h>
#import <libobjc.A.dylib/ICCloudObject.h>

@class ICFolder, ICAccountProxy, NSString, NSSet, NSPersistentStore, NSData, ICAccountData;

@interface ICAccount : ICNoteContainer <ICCloudObject> {

	BOOL _didAddObservers;
	BOOL _didAddTrashObservers;
	ICFolder* _defaultFolder;
	ICFolder* _trashFolder;
	ICAccountProxy* _accountProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) ICAccountProxy * accountProxy;                      //@synthesize accountProxy=_accountProxy - In the implementation block
@property (assign,nonatomic) BOOL didAddObservers;                               //@synthesize didAddObservers=_didAddObservers - In the implementation block
@property (assign,nonatomic) BOOL didAddTrashObservers;                          //@synthesize didAddTrashObservers=_didAddTrashObservers - In the implementation block
@property (nonatomic,retain) NSSet * ownerInverse; 
@property (nonatomic,retain) ICFolder * defaultFolder;                           //@synthesize defaultFolder=_defaultFolder - In the implementation block
@property (nonatomic,retain) ICFolder * trashFolder;                             //@synthesize trashFolder=_trashFolder - In the implementation block
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSPersistentStore * persistentStore; 
@property (nonatomic,retain) NSSet * folders; 
@property (nonatomic,retain) NSSet * notes; 
@property (nonatomic,retain) NSSet * serverChangeTokens; 
@property (nonatomic,retain) NSSet * deviceMigrationStates; 
@property (nonatomic,retain) NSSet * legacyTombstones; 
@property (assign,nonatomic) int accountType; 
@property (assign,nonatomic) BOOL didChooseToMigrate; 
@property (assign,nonatomic) BOOL didFinishMigration; 
@property (assign,nonatomic) BOOL didMigrateOnMac; 
@property (assign,nonatomic) BOOL storeDataSeparately; 
@property (nonatomic,retain) NSString * userRecordName; 
@property (nonatomic,retain) NSData * cryptoVerifier; 
@property (nonatomic,retain) ICAccountData * accountData; 
@property (nonatomic,readonly) BOOL isManaged; 
+(void)initialize;
+(void)localeDidChange:(id)arg1 ;
+(void)deleteAccount:(id)arg1 ;
+(id)accountUtilities;
+(void)setAccountUtilities:(id)arg1 ;
+(BOOL)clearAccountForAppleCloudKitTable;
+(id)localAccountInContext:(id)arg1 ;
+(BOOL)hasActiveCloudKitAccountInContext:(id)arg1 ;
+(id)newLocalAccountInContext:(id)arg1 ;
+(id)localizedLocalAccountName;
+(id)allAccountsInContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+(id)defaultAccountInContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3 ;
+(id)allCloudObjectsInContext:(id)arg1 ;
+(id)allActiveAccountsInContext:(id)arg1 ;
+(id)allAccountIdentifiersInContext:(id)arg1 ;
+(id)standardFolderIdentifierWithPrefix:(id)arg1 accountIdentifier:(id)arg2 accountType:(int)arg3 ;
+(id)localizedLocalAccountNameMidSentence;
+(id)keyPathsForValuesAffectingLocalizedName;
+(id)accountWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)newAccountWithIdentifier:(id)arg1 type:(int)arg2 context:(id)arg3 ;
+(id)cloudKitAccountInContext:(id)arg1 ;
+(id)accountsMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)allActiveCloudKitAccountsInContext:(id)arg1 ;
+(id)cloudKitIfMigratedElseLocalAccountInContext:(id)arg1 ;
+(id)allActiveAccountsInContext:(id)arg1 sortDescriptors:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3 ;
+(id)accountsWithAccountType:(int)arg1 context:(id)arg2 ;
+(unsigned long long)numberOfCloudKitAccountsInContext:(id)arg1 onlyMigrated:(BOOL)arg2 ;
+(void)initializeLocalAccountNamesInBackground;
+(void)deleteAccountWithBatchDelete:(id)arg1 ;
+(id)cloudKitAccountWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)allCloudKitAccountsInContext:(id)arg1 ;
+(BOOL)isCloudKitAccountAvailable;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)localizedName;
-(BOOL)isDeletable;
-(id)cacheKey;
-(id)containerIdentifier;
-(id)recordType;
-(id)recordName;
-(id)accountName;
-(BOOL)isLeaf;
-(void)setAccountType:(int)arg1 ;
-(NSPersistentStore *)persistentStore;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(void)awakeFromInsert;
-(void)prepareForDeletion;
-(BOOL)isManaged;
-(void)setDidChooseToMigrate:(BOOL)arg1 ;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(id)recordZoneName;
-(id)predicateForSearchableNotes;
-(id)predicateForSearchableAttachments;
-(id)noteVisibilityTestingForSearchingAccount;
-(BOOL)isAllNotesContainer;
-(id)ic_loggingValues;
-(BOOL)shouldBeDeletedFromLocalDatabase;
-(BOOL)hasAnyCustomFolders;
-(unsigned long long)visibleNotesIncludingTrashCount;
-(id)predicateForVisibleNotes;
-(id)predicateForPinnedNotes;
-(id)titleForNavigationBar;
-(id)visibleNotes;
-(unsigned long long)visibleNotesCount;
-(id)titleForTableViewCell;
-(BOOL)canBeSharedViaICloud;
-(void)updateSubFolderMergeableDataChangeCount;
-(BOOL)supportsEditingNotes;
-(id)visibleSubFolders;
-(id)subFolderOrderMergeableData;
-(void)setSubFolderOrderMergeableData:(id)arg1 ;
-(id)customNoteSortTypeValue;
-(id)accountFilesDirectoryURL;
-(id)visibleNoteContainerChildren;
-(BOOL)supportsLegacyTombstones;
-(ICFolder *)defaultFolder;
-(ICFolder *)trashFolder;
-(BOOL)canPasswordProtectNotes;
-(id)previewImageDirectoryURL;
-(BOOL)needsToBePushedToCloud;
-(BOOL)needsToBeDeletedFromCloud;
-(id)visibleFoldersWithParent:(id)arg1 ;
-(id)reservedAccountFolderTitles;
-(id)subFolderIdentifiersOrderedSet;
-(id)standardFolderIdentifierWithPrefix:(id)arg1 ;
-(id)predicateForVisibleAttachments;
-(id)predicateForVisibleFolders;
-(id)newlyCreatedRecord;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2 ;
-(BOOL)isInICloudAccount;
-(id)ic_loggingIdentifier;
-(id)cryptoPassphraseVerifier;
-(id)passwordProtectedNotes;
-(void)removeAllObserversIfNecessary;
-(BOOL)didAddTrashObservers;
-(void)setDidAddTrashObservers:(BOOL)arg1 ;
-(void)noteWillBeDeletedOrUndeleted:(id)arg1 ;
-(void)removeTrashObserversIfNecessary;
-(void)updateTrashFolderHiddenNoteContainerState;
-(id)defaultFolderIdentifier;
-(id)trashFolderIdentifier;
-(id)folderWithIdentifier:(id)arg1 ;
-(void)createDefaultFolder;
-(void)createTrashFolder;
-(void)addTrashObserversIfNecessary;
-(id)predicateForCustomFolders;
-(id)visibleFolders;
-(id)customRootLevelFolders;
-(id)predicateForFolders;
-(id)predicateForNotesInAccount;
-(id)allItemsFolderLocalizedTitle;
-(ICAccountProxy *)accountProxy;
-(id)accountDataCreateIfNecessary;
-(id)localizedNameMidSentence;
-(id)predicateForVisibleNotesIncludingTrash;
-(id)predicateForVisibleAttachmentsIncludingTrash;
-(void)updateAccountNameForAccountListSorting;
-(id)predicateForAttachmentsInAccount;
-(void)performBlockInPersonaContextIfNecessary:(/*^block*/id)arg1 ;
-(void)createStandardFolders;
-(BOOL)hasSameCryptoKeyAsAccount:(id)arg1 ;
-(unsigned long long)visibleCustomFoldersCount;
-(BOOL)containsSharedFolders;
-(unsigned long long)indexOfCustomRootLevelFolder:(id)arg1 ;
-(BOOL)visibleRootFoldersContainFolderWithTitle:(id)arg1 ;
-(id)visibleNoteContainers;
-(id)allChildObjects;
-(BOOL)shouldExcludeFilesFromCloudBackup;
-(id)fallbackImageDirectoryURL;
-(id)mediaDirectoryURL;
-(id)exportableMediaDirectoryURL;
-(unsigned long long)visibleAttachmentsIncludingTrashCount;
-(BOOL)didAddObservers;
-(void)setDidAddObservers:(BOOL)arg1 ;
-(void)setDefaultFolder:(ICFolder *)arg1 ;
-(void)setTrashFolder:(ICFolder *)arg1 ;
-(void)setAccountProxy:(ICAccountProxy *)arg1 ;
@end

