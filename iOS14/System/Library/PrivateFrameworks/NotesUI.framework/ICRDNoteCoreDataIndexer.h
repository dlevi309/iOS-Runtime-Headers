/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/ICRDCoreDataIndexer.h>

@protocol ICNoteContainer, OS_dispatch_queue;
@class NoteCollectionObject, ICFolderCustomNoteSortType, ICRDFolderCoreDataIndexer, NSObject, NSFetchedResultsController, NSMutableDictionary, NSOrderedSet, ICRDNoteFolderSectionIdentifier, ICRDNoteSectionIdentifier, NSArray;

@interface ICRDNoteCoreDataIndexer : ICRDCoreDataIndexer {

	BOOL _shouldIncludeOutlineParentItems;
	BOOL _shouldIncludeSubfolders;
	id<ICNoteContainer> _noteContainer;
	NoteCollectionObject* _noteCollection;
	unsigned long long _pinnedNotesSectionMinimumCount;
	ICFolderCustomNoteSortType* _sortType;
	ICRDFolderCoreDataIndexer* _folderIndexer;
	NSObject*<OS_dispatch_queue> _indexAccessQueue;
	NSFetchedResultsController* _modernPinnedNoteFetchedResultsController;
	NSFetchedResultsController* _modernNoteFetchedResultsController;
	NSFetchedResultsController* _legacyNoteFetchedResultsController;
	NSMutableDictionary* _sectionIdentifiersToManagedObjectIDs;
	NSOrderedSet* _sectionIdentifiers;
	ICRDNoteFolderSectionIdentifier* _folderSectionIdentifier;
	ICRDNoteSectionIdentifier* _pinnedNoteSectionIdentifier;
	ICRDNoteSectionIdentifier* _noteSectionIdentifier;
	NSArray* _sortedNoteIdentifiers;

}

@property (nonatomic,retain) ICRDFolderCoreDataIndexer * folderIndexer;                                          //@synthesize folderIndexer=_folderIndexer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> indexAccessQueue;                                      //@synthesize indexAccessQueue=_indexAccessQueue - In the implementation block
@property (nonatomic,retain) NSFetchedResultsController * modernPinnedNoteFetchedResultsController;              //@synthesize modernPinnedNoteFetchedResultsController=_modernPinnedNoteFetchedResultsController - In the implementation block
@property (nonatomic,retain) NSFetchedResultsController * modernNoteFetchedResultsController;                    //@synthesize modernNoteFetchedResultsController=_modernNoteFetchedResultsController - In the implementation block
@property (nonatomic,retain) NSFetchedResultsController * legacyNoteFetchedResultsController;                    //@synthesize legacyNoteFetchedResultsController=_legacyNoteFetchedResultsController - In the implementation block
@property (nonatomic,readonly) BOOL sortsByPinned; 
@property (nonatomic,retain) NSMutableDictionary * sectionIdentifiersToManagedObjectIDs;                         //@synthesize sectionIdentifiersToManagedObjectIDs=_sectionIdentifiersToManagedObjectIDs - In the implementation block
@property (nonatomic,retain) NSOrderedSet * sectionIdentifiers;                                                  //@synthesize sectionIdentifiers=_sectionIdentifiers - In the implementation block
@property (nonatomic,retain) ICRDNoteFolderSectionIdentifier * folderSectionIdentifier;                          //@synthesize folderSectionIdentifier=_folderSectionIdentifier - In the implementation block
@property (nonatomic,retain) ICRDNoteSectionIdentifier * pinnedNoteSectionIdentifier;                            //@synthesize pinnedNoteSectionIdentifier=_pinnedNoteSectionIdentifier - In the implementation block
@property (nonatomic,retain) ICRDNoteSectionIdentifier * noteSectionIdentifier;                                  //@synthesize noteSectionIdentifier=_noteSectionIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * sortedNoteIdentifiers;                                                    //@synthesize sortedNoteIdentifiers=_sortedNoteIdentifiers - In the implementation block
@property (nonatomic,retain) id<ICNoteContainer> noteContainer;                                                  //@synthesize noteContainer=_noteContainer - In the implementation block
@property (nonatomic,retain) NoteCollectionObject * noteCollection;                                              //@synthesize noteCollection=_noteCollection - In the implementation block
@property (assign,nonatomic) unsigned long long pinnedNotesSectionMinimumCount;                                  //@synthesize pinnedNotesSectionMinimumCount=_pinnedNotesSectionMinimumCount - In the implementation block
@property (nonatomic,retain) ICFolderCustomNoteSortType * sortType;                                              //@synthesize sortType=_sortType - In the implementation block
@property (nonatomic,readonly) unsigned long long totalNoteCount; 
@property (nonatomic,readonly) unsigned long long totalFolderCount; 
@property (assign,nonatomic) BOOL shouldIncludeSubfolders;                                                       //@synthesize shouldIncludeSubfolders=_shouldIncludeSubfolders - In the implementation block
-(NSOrderedSet *)sectionIdentifiers;
-(id<ICNoteContainer>)noteContainer;
-(NoteCollectionObject *)noteCollection;
-(void)setSectionIdentifiers:(NSOrderedSet *)arg1 ;
-(void)setNoteContainer:(id<ICNoteContainer>)arg1 ;
-(void)setNoteCollection:(NoteCollectionObject *)arg1 ;
-(ICFolderCustomNoteSortType *)sortType;
-(void)setSortType:(ICFolderCustomNoteSortType *)arg1 ;
-(void)reloadData:(/*^block*/id)arg1 ;
-(id)expansionStateContext;
-(id)firstRelevantItemIdentifier;
-(id)nextRelevantItemIdentifierAfter:(id)arg1 ;
-(id)newSnapshotFromIndex;
-(id)sectionSnapshotsForSectionControllerType:(unsigned long long)arg1 ;
-(id)sectionIdentifiersForSectionControllerType:(unsigned long long)arg1 ;
-(void)setShouldIncludeOutlineParentItems:(BOOL)arg1 ;
-(void)setFolderSectionIdentifier:(ICRDNoteFolderSectionIdentifier *)arg1 ;
-(void)setPinnedNoteSectionIdentifier:(ICRDNoteSectionIdentifier *)arg1 ;
-(void)setNoteSectionIdentifier:(ICRDNoteSectionIdentifier *)arg1 ;
-(ICRDFolderCoreDataIndexer *)folderIndexer;
-(void)clearIndex;
-(void)updateLegacyFetchedResultsControllers;
-(void)updateModernNoteFetchedResultsControllers;
-(NSMutableDictionary *)sectionIdentifiersToManagedObjectIDs;
-(ICRDNoteSectionIdentifier *)pinnedNoteSectionIdentifier;
-(ICRDNoteSectionIdentifier *)noteSectionIdentifier;
-(unsigned long long)totalFolderCount;
-(void)setSectionIdentifiersToManagedObjectIDs:(NSMutableDictionary *)arg1 ;
-(BOOL)shouldIncludeSubfolders;
-(id)activeFetchedResultsControllers;
-(NSFetchedResultsController *)modernPinnedNoteFetchedResultsController;
-(NSFetchedResultsController *)modernNoteFetchedResultsController;
-(NSFetchedResultsController *)legacyNoteFetchedResultsController;
-(NSObject*<OS_dispatch_queue>)indexAccessQueue;
-(void)unmergePinnedNotesAndNotesSectionIfNeeded;
-(void)indexObjectsInSection:(id)arg1 sectionIndex:(unsigned long long)arg2 fetchedResultsController:(id)arg3 ;
-(ICRDNoteFolderSectionIdentifier *)folderSectionIdentifier;
-(void)addObjectIDs:(id)arg1 toIndexInSection:(id)arg2 ;
-(void)mergePinnedNotesAndNotesSectionIfNeeded;
-(void)updateSectionIdentifiers;
-(BOOL)shouldIncludeOutlineParentItems;
-(NSArray *)sortedNoteIdentifiers;
-(void)deleteObjectWithIDFromIndex:(id)arg1 inSection:(id)arg2 ;
-(void)removeObjectIDs:(id)arg1 fromIndexInSection:(id)arg2 ;
-(BOOL)sortsByPinned;
-(void)sortSection:(id)arg1 ;
-(unsigned long long)pinnedNotesSectionMinimumCount;
-(void)prependObjectIDs:(id)arg1 toIndexInSection:(id)arg2 ;
-(void)setLegacyNoteFetchedResultsController:(NSFetchedResultsController *)arg1 ;
-(void)setModernPinnedNoteFetchedResultsController:(NSFetchedResultsController *)arg1 ;
-(void)setModernNoteFetchedResultsController:(NSFetchedResultsController *)arg1 ;
-(id)initWithNoteContainer:(id)arg1 noteCollection:(id)arg2 legacyManagedObjectContext:(id)arg3 modernManagedObjectContext:(id)arg4 ;
-(unsigned long long)totalNoteCount;
-(id)sectionIdentifierForHeaderInSection:(long long)arg1 ;
-(void)togglePinnedForNote:(id)arg1 ;
-(void)deleteWithDecisionController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPinnedNotesSectionMinimumCount:(unsigned long long)arg1 ;
-(void)setShouldIncludeSubfolders:(BOOL)arg1 ;
-(void)setFolderIndexer:(ICRDFolderCoreDataIndexer *)arg1 ;
-(void)setIndexAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSortedNoteIdentifiers:(NSArray *)arg1 ;
@end

