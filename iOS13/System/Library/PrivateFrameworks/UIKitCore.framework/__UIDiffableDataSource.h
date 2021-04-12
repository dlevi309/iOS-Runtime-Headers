/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UITableViewDataSource.h>

@protocol OS_dispatch_queue;
@class UITableView, UICollectionView, _UIDiffableDataSourceViewUpdater, NSUUID, NSObject, NSOrderedSet, _UIDataSourceSnapshotter, NSMutableArray, NSArray, NSString;

@interface __UIDiffableDataSource : NSObject <UICollectionViewDataSource, UITableViewDataSource> {

	UITableView* _tableView;
	UICollectionView* _collectionView;
	BOOL _isSnapshot;
	int _outstandingApplyCount;
	/*^block*/id _tableViewCellProvider;
	/*^block*/id _supplementaryViewProvider;
	/*^block*/id _supplementaryReuseIdentifierProvider;
	/*^block*/id _supplementaryViewConfigurationHandler;
	/*^block*/id _collectionViewCellProvider;
	/*^block*/id _tableViewCellConfigurationHandler;
	/*^block*/id _reuseIdentifierProvider;
	/*^block*/id _collectionViewCellConfigurationHandler;
	_UIDiffableDataSourceViewUpdater* _viewUpdater;
	NSUUID* _dataSourceGeneration;
	NSObject*<OS_dispatch_queue> _applyQueue;
	NSObject*<OS_dispatch_queue> _snapshotQueue;
	unsigned long long _mutationQueueSource;
	NSOrderedSet* _identifiers;
	NSOrderedSet* _sections;
	_UIDataSourceSnapshotter* _dataSourceSnapshot;
	NSMutableArray* _pendingSnapshotUpdates;

}

@property (nonatomic,copy) id tableViewCellConfigurationHandler;                          //@synthesize tableViewCellConfigurationHandler=_tableViewCellConfigurationHandler - In the implementation block
@property (nonatomic,copy) id reuseIdentifierProvider;                                    //@synthesize reuseIdentifierProvider=_reuseIdentifierProvider - In the implementation block
@property (nonatomic,copy) id collectionViewCellConfigurationHandler;                     //@synthesize collectionViewCellConfigurationHandler=_collectionViewCellConfigurationHandler - In the implementation block
@property (nonatomic,retain) _UIDiffableDataSourceViewUpdater * viewUpdater;              //@synthesize viewUpdater=_viewUpdater - In the implementation block
@property (nonatomic,retain) NSUUID * dataSourceGeneration;                               //@synthesize dataSourceGeneration=_dataSourceGeneration - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> applyQueue;                   //@synthesize applyQueue=_applyQueue - In the implementation block
@property (nonatomic,readonly) int outstandingApplyCount;                                 //@synthesize outstandingApplyCount=_outstandingApplyCount - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> snapshotQueue;                //@synthesize snapshotQueue=_snapshotQueue - In the implementation block
@property (assign) unsigned long long mutationQueueSource;                                //@synthesize mutationQueueSource=_mutationQueueSource - In the implementation block
@property (nonatomic,retain) NSOrderedSet * identifiers;                                  //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,retain) NSOrderedSet * sections;                                     //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) _UIDataSourceSnapshotter * dataSourceSnapshot;               //@synthesize dataSourceSnapshot=_dataSourceSnapshot - In the implementation block
@property (nonatomic,readonly) BOOL isSnapshot;                                           //@synthesize isSnapshot=_isSnapshot - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingSnapshotUpdates;                   //@synthesize pendingSnapshotUpdates=_pendingSnapshotUpdates - In the implementation block
@property (assign,nonatomic) long long tableViewDefaultRowAnimation; 
@property (nonatomic,__weak,readonly) UITableView * tableView; 
@property (nonatomic,copy) id tableViewCellProvider;                                      //@synthesize tableViewCellProvider=_tableViewCellProvider - In the implementation block
@property (nonatomic,__weak,readonly) UICollectionView * collectionView; 
@property (nonatomic,copy) id supplementaryViewProvider;                                  //@synthesize supplementaryViewProvider=_supplementaryViewProvider - In the implementation block
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) NSArray * sectionIdentifiers; 
@property (nonatomic,readonly) NSArray * itemIdentifiers; 
@property (nonatomic,copy) id supplementaryReuseIdentifierProvider;                       //@synthesize supplementaryReuseIdentifierProvider=_supplementaryReuseIdentifierProvider - In the implementation block
@property (nonatomic,copy) id supplementaryViewConfigurationHandler;                      //@synthesize supplementaryViewConfigurationHandler=_supplementaryViewConfigurationHandler - In the implementation block
@property (nonatomic,copy) id collectionViewCellProvider;                                 //@synthesize collectionViewCellProvider=_collectionViewCellProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)snapshot;
-(UITableView *)tableView;
-(UICollectionView *)collectionView;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(_UIDataSourceSnapshotter *)dataSourceSnapshot;
-(void)setDataSourceSnapshot:(_UIDataSourceSnapshotter *)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(id)arg1 ;
-(NSUUID *)dataSourceGeneration;
-(NSOrderedSet *)sections;
-(NSOrderedSet *)identifiers;
-(id)initWithDataSourceGeneration:(id)arg1 sectionIdentifiers:(id)arg2 identifiers:(id)arg3 dataSourceSnapshot:(id)arg4 ;
-(long long)numberOfItems;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg1 ;
-(NSArray *)sectionIdentifiers;
-(NSArray *)itemIdentifiers;
-(id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1 ;
-(long long)indexOfItemIdentifier:(id)arg1 ;
-(long long)indexOfSectionIdentifier:(id)arg1 ;
-(void)appendItemsWithIdentifiers:(id)arg1 ;
-(void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2 ;
-(void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2 ;
-(void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2 ;
-(void)deleteItemsWithIdentifiers:(id)arg1 ;
-(void)deleteAllItems;
-(void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2 ;
-(void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2 ;
-(void)reloadItemsWithIdentifiers:(id)arg1 ;
-(void)appendSectionsWithIdentifiers:(id)arg1 ;
-(void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(void)deleteSectionsWithIdentifiers:(id)arg1 ;
-(void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(void)reloadSectionsWithIdentifiers:(id)arg1 ;
-(id)initWithCollectionView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(void)setSupplementaryViewProvider:(id)arg1 ;
-(id)supplementaryViewProvider;
-(void)applyDifferencesFromSnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)itemIdentifierForIndexPath:(id)arg1 ;
-(id)indexPathForItemIdentifier:(id)arg1 ;
-(id)initWithViewUpdatesSink:(id)arg1 ;
-(id)collectionViewCellProvider;
-(BOOL)_isDiffableDataSource;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithTableView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(long long)tableViewDefaultRowAnimation;
-(void)setTableViewDefaultRowAnimation:(long long)arg1 ;
-(id)tableViewCellProvider;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithCollectionView:(id)arg1 cellProvider:(/*^block*/id)arg2 reuseIdentifierProvider:(/*^block*/id)arg3 cellConfigurationHandler:(/*^block*/id)arg4 dataSourceGeneration:(id)arg5 sectionIdentifiers:(id)arg6 identifiers:(id)arg7 dataSourceSnapshot:(id)arg8 dataSource:(id)arg9 ;
-(id)initWithTableView:(id)arg1 cellProvider:(/*^block*/id)arg2 reuseIdentifierProvider:(/*^block*/id)arg3 cellConfigurationHandler:(/*^block*/id)arg4 dataSourceGeneration:(id)arg5 sectionIdentifiers:(id)arg6 identifiers:(id)arg7 dataSourceSnapshot:(id)arg8 dataSource:(id)arg9 ;
-(void)_commitUpdate:(id)arg1 ;
-(BOOL)isSnapshot;
-(void)_commitStateAtomicallyWithIdentifiers:(id)arg1 sections:(id)arg2 dataSourceSnapshot:(id)arg3 shouldAdvanceGenerationalUUID:(BOOL)arg4 shouldCopy:(BOOL)arg5 ;
-(_UIDiffableDataSourceViewUpdater *)viewUpdater;
-(id)_snapshotWithHandlerAtomic:(/*^block*/id)arg1 ;
-(void)applyDifferencesFromSnapshot:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)outstandingApplyCount;
-(unsigned long long)mutationQueueSource;
-(void)setMutationQueueSource:(unsigned long long)arg1 ;
-(id)_pendingReloadUpdatesForDataSource:(id)arg1 ;
-(void)_commitNewDataSource:(id)arg1 withViewUpdates:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableArray *)pendingSnapshotUpdates;
-(void)_commitUpdate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)applyQueue;
-(BOOL)_canApplySnapshotUpdateWithoutDiffing:(id)arg1 ;
-(void)reloadFromSnapshot:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDataSourceGeneration:(NSUUID *)arg1 ;
-(void)reloadFromSnapshot:(id)arg1 ;
-(id)_reloadViewUpdatesForDiffUpdate:(id)arg1 dataSource:(id)arg2 ignoreInvalidItems:(BOOL)arg3 ;
-(id)_reloadViewUpdatesForDiffUpdate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)snapshotQueue;
-(void)setIdentifiers:(NSOrderedSet *)arg1 ;
-(void)setSections:(NSOrderedSet *)arg1 ;
-(id)reuseIdentifierProvider;
-(id)collectionViewCellConfigurationHandler;
-(id)supplementaryReuseIdentifierProvider;
-(id)supplementaryViewConfigurationHandler;
-(long long)_numberOfSectionsForCollectionView:(id)arg1 ;
-(long long)_numberOfItemsInSection:(long long)arg1 collectionView:(id)arg2 ;
-(id)_cellForItemAtIndexPath:(id)arg1 collectionView:(id)arg2 ;
-(id)_viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 collectionView:(id)arg3 ;
-(id)tableViewCellConfigurationHandler;
-(long long)_numberOfSectionsForTableView:(id)arg1 ;
-(long long)_numberOfRowsInSection:(long long)arg1 tableView:(id)arg2 ;
-(id)_cellForRowAtIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)initWithCollectionView:(id)arg1 cellProvider:(/*^block*/id)arg2 dataSource:(id)arg3 ;
-(id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(/*^block*/id)arg2 cellConfigurationHandler:(/*^block*/id)arg3 ;
-(id)initWithTableView:(id)arg1 reuseIdentifierProvider:(/*^block*/id)arg2 cellConfigurationHandler:(/*^block*/id)arg3 ;
-(void)appendSectionWithIdentifier:(id)arg1 ;
-(void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(id)emptySnapshot;
-(void)applyDifferencesFromSnapshot:(id)arg1 ;
-(void)applyDifferencesFromSnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 ;
-(void)applySnapshot:(id)arg1 ;
-(long long)_numberOfSectionsForCollectionViewDeprecatedSPI:(id)arg1 ;
-(long long)_numberOfItemsInSectionDeprecatedSPI:(long long)arg1 collectionView:(id)arg2 ;
-(id)_cellForItemAtIndexPathDeprecatedSPI:(id)arg1 collectionView:(id)arg2 ;
-(id)_viewForSupplementaryElementOfKindDeprecatedSPI:(id)arg1 atIndexPath:(id)arg2 collectionView:(id)arg3 ;
-(long long)_numberOfSectionsForTableViewDeprecatedSPI:(id)arg1 ;
-(long long)_numberOfRowsInSectionDeprecatedSPI:(long long)arg1 tableView:(id)arg2 ;
-(id)_cellForRowAtIndexPathDeprecatedSPI:(id)arg1 tableView:(id)arg2 ;
-(void)setTableViewCellProvider:(id)arg1 ;
-(void)setSupplementaryReuseIdentifierProvider:(id)arg1 ;
-(void)setSupplementaryViewConfigurationHandler:(id)arg1 ;
-(void)setCollectionViewCellProvider:(id)arg1 ;
-(void)setTableViewCellConfigurationHandler:(id)arg1 ;
-(void)setReuseIdentifierProvider:(id)arg1 ;
-(void)setCollectionViewCellConfigurationHandler:(id)arg1 ;
-(void)setViewUpdater:(_UIDiffableDataSourceViewUpdater *)arg1 ;
@end

