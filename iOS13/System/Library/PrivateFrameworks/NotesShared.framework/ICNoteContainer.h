/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/ICCloudSyncingObject.h>
#import <libobjc.A.dylib/ICNoteContainer.h>

@class ICCRDTIdentifierOrderedSetVersionedDocument, ICAccount, NSString, CROrderedSet, NSManagedObjectContext, ICFolderCustomNoteSortType, NSArray, NSData;

@interface ICNoteContainer : ICCloudSyncingObject <ICNoteContainer> {

	BOOL _subFolderOrderMergeableDataDirty;
	ICCRDTIdentifierOrderedSetVersionedDocument* _subFolderIdentifiersOrderedSetDocument;

}

@property (nonatomic,retain) ICAccount * owner; 
@property (nonatomic,retain) NSString * accountNameForAccountListSorting; 
@property (assign,nonatomic) BOOL isHiddenNoteContainer; 
@property (nonatomic,retain) NSString * nestedTitleForSorting; 
@property (nonatomic,retain) ICCRDTIdentifierOrderedSetVersionedDocument * subFolderIdentifiersOrderedSetDocument;              //@synthesize subFolderIdentifiersOrderedSetDocument=_subFolderIdentifiersOrderedSetDocument - In the implementation block
@property (assign,nonatomic) int sortOrder; 
@property (nonatomic,readonly) CROrderedSet * subFolderIdentifiersOrderedSet; 
@property (assign,getter=isSubFolderOrderMergeableDataDirty,nonatomic) BOOL subFolderOrderMergeableDataDirty;                   //@synthesize subFolderOrderMergeableDataDirty=_subFolderOrderMergeableDataDirty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) ICAccount * noteContainerAccount; 
@property (readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) ICFolderCustomNoteSortType * customNoteSortType; 
@property (nonatomic,readonly) BOOL isSharedViaICloud; 
@property (nonatomic,readonly) BOOL isAllNotesContainer; 
@property (nonatomic,readonly) BOOL canBeSharedViaICloud; 
@property (nonatomic,readonly) BOOL supportsEditingNotes; 
@property (nonatomic,readonly) BOOL isTrashFolder; 
@property (nonatomic,readonly) NSString * containerIdentifier; 
@property (nonatomic,readonly) NSArray * visibleSubFolders; 
@property (nonatomic,retain) NSData * subFolderOrderMergeableData; 
+(id)keyPathsForValuesAffectingCloudAccount;
-(id)cacheKey;
-(NSString *)containerIdentifier;
-(id)accountName;
-(void)willTurnIntoFault;
-(void)willSave;
-(void)willRefresh:(BOOL)arg1 ;
-(BOOL)supportsVisibilityTestingType:(long long)arg1 ;
-(id)predicateForSearchableNotes;
-(id)predicateForSearchableAttachments;
-(id)noteVisibilityTestingForSearchingAccount;
-(BOOL)isAllNotesContainer;
-(BOOL)isSharedViaICloud;
-(id)cloudAccount;
-(id)predicateForVisibleNotes;
-(id)predicateForPinnedNotes;
-(id)titleForNavigationBar;
-(BOOL)noteIsVisible:(id)arg1 ;
-(id)visibleNotes;
-(unsigned long long)visibleNotesCount;
-(id)titleForTableViewCell;
-(id)detailForTableViewCell;
-(BOOL)canBeSharedViaICloud;
-(BOOL)isModernCustomFolder;
-(void)saveSubFolderMergeableDataIfNeeded;
-(BOOL)mergeWithSubFolderMergeableData:(id)arg1 ;
-(void)updateSubFolderMergeableDataChangeCount;
-(ICAccount *)noteContainerAccount;
-(ICFolderCustomNoteSortType *)customNoteSortType;
-(BOOL)supportsEditingNotes;
-(BOOL)isTrashFolder;
-(NSArray *)visibleSubFolders;
-(NSData *)subFolderOrderMergeableData;
-(void)setSubFolderOrderMergeableData:(NSData *)arg1 ;
-(CROrderedSet *)subFolderIdentifiersOrderedSet;
-(BOOL)isSubFolderOrderMergeableDataDirty;
-(ICCRDTIdentifierOrderedSetVersionedDocument *)subFolderIdentifiersOrderedSetDocument;
-(void)writeSubFolderMergeableData;
-(void)setSubFolderOrderMergeableDataDirty:(BOOL)arg1 ;
-(void)setSubFolderIdentifiersOrderedSetDocument:(ICCRDTIdentifierOrderedSetVersionedDocument *)arg1 ;
@end

