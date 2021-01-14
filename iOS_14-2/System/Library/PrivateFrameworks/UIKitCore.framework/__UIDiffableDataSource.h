/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UITableViewDataSource.h>

@protocol OS_dispatch_queue, _UIDiffableDataSourceState;
@class UITableView, UICollectionView, NSMapTable, NSHashTable, NSDiffableDataSourceTransaction, UICollectionViewDiffableDataSourceReorderingHandlers, UICollectionViewDiffableDataSourceSectionSnapshotHandlers, _UIDiffableDataSourceViewUpdater, NSObject, NSArray, NSString;

@interface __UIDiffableDataSource : NSObject <UICollectionViewDataSource, UITableViewDataSource> {

	UITableView* _tableView;
	UICollectionView* _collectionView;
	NSMapTable* _rendererMap;
	/*^block*/id _rendererIdentifierProvider;
	NSHashTable* _sectionControllers;
	NSDiffableDataSourceTransaction* _pendingReorderingTransaction;
	NSDiffableDataSourceTransaction* _currentTransaction;
	BOOL _pendingReorderingTransactionShouldPerformViewAnimations;
	BOOL _isApplyingWithoutRebasingSectionSnapshots;
	/*^block*/id _tableViewCellProvider;
	/*^block*/id _supplementaryViewProvider;
	/*^block*/id _supplementaryReuseIdentifierProvider;
	/*^block*/id _supplementaryViewConfigurationHandler;
	/*^block*/id _collectionViewCellProvider;
	/*^block*/id _cellObserver;
	UICollectionViewDiffableDataSourceReorderingHandlers* _reorderingHandlers;
	/*^block*/id _willApplySnapshotHandler;
	/*^block*/id _didApplySnapshotHandler;
	/*^block*/id _canReorderItemHandler;
	UICollectionViewDiffableDataSourceSectionSnapshotHandlers* _sectionSnapshotHandlers;
	/*^block*/id _tableViewCellConfigurationHandler;
	/*^block*/id _reuseIdentifierProvider;
	/*^block*/id _collectionViewCellConfigurationHandler;
	_UIDiffableDataSourceViewUpdater* _viewUpdater;
	NSObject*<OS_dispatch_queue> _applyQueue;
	Aq _outstandingApplyCount;
	NSObject*<OS_dispatch_queue> _snapshotQueue;
	unsigned long long _mutationQueueSource;
	id<_UIDiffableDataSourceState> _state;

}

@property (nonatomic,copy) id tableViewCellConfigurationHandler;                                                             //@synthesize tableViewCellConfigurationHandler=_tableViewCellConfigurationHandler - In the implementation block
@property (nonatomic,copy) id reuseIdentifierProvider;                                                                       //@synthesize reuseIdentifierProvider=_reuseIdentifierProvider - In the implementation block
@property (nonatomic,copy) id collectionViewCellConfigurationHandler;                                                        //@synthesize collectionViewCellConfigurationHandler=_collectionViewCellConfigurationHandler - In the implementation block
@property (nonatomic,retain) _UIDiffableDataSourceViewUpdater * viewUpdater;                                                 //@synthesize viewUpdater=_viewUpdater - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> applyQueue;                                                      //@synthesize applyQueue=_applyQueue - In the implementation block
@property (nonatomic,readonly) Aq outstandingApplyCount;                                                                     //@synthesize outstandingApplyCount=_outstandingApplyCount - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> snapshotQueue;                                                   //@synthesize snapshotQueue=_snapshotQueue - In the implementation block
@property (assign) unsigned long long mutationQueueSource;                                                                   //@synthesize mutationQueueSource=_mutationQueueSource - In the implementation block
@property (nonatomic,retain) id<_UIDiffableDataSourceState> state;                                                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL isApplyingWithoutRebasingSectionSnapshots;                                                 //@synthesize isApplyingWithoutRebasingSectionSnapshots=_isApplyingWithoutRebasingSectionSnapshots - In the implementation block
@property (assign,nonatomic) long long tableViewDefaultRowAnimation; 
@property (nonatomic,__weak,readonly) UITableView * tableView; 
@property (nonatomic,copy) id tableViewCellProvider;                                                                         //@synthesize tableViewCellProvider=_tableViewCellProvider - In the implementation block
@property (nonatomic,__weak,readonly) UICollectionView * collectionView; 
@property (nonatomic,__weak,readonly) UICollectionView * _collectionView; 
@property (nonatomic,copy) id supplementaryViewProvider;                                                                     //@synthesize supplementaryViewProvider=_supplementaryViewProvider - In the implementation block
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) NSArray * sectionIdentifiers; 
@property (nonatomic,readonly) NSArray * itemIdentifiers; 
@property (nonatomic,copy) id supplementaryReuseIdentifierProvider;                                                          //@synthesize supplementaryReuseIdentifierProvider=_supplementaryReuseIdentifierProvider - In the implementation block
@property (nonatomic,copy) id supplementaryViewConfigurationHandler;                                                         //@synthesize supplementaryViewConfigurationHandler=_supplementaryViewConfigurationHandler - In the implementation block
@property (nonatomic,copy) id collectionViewCellProvider;                                                                    //@synthesize collectionViewCellProvider=_collectionViewCellProvider - In the implementation block
@property (nonatomic,copy) id cellObserver;                                                                                  //@synthesize cellObserver=_cellObserver - In the implementation block
@property (nonatomic,readonly) NSArray * sectionControllers; 
@property (nonatomic,copy) UICollectionViewDiffableDataSourceReorderingHandlers * reorderingHandlers;                        //@synthesize reorderingHandlers=_reorderingHandlers - In the implementation block
@property (nonatomic,copy) id willApplySnapshotHandler;                                                                      //@synthesize willApplySnapshotHandler=_willApplySnapshotHandler - In the implementation block
@property (nonatomic,copy) id didApplySnapshotHandler;                                                                       //@synthesize didApplySnapshotHandler=_didApplySnapshotHandler - In the implementation block
@property (nonatomic,copy) id canReorderItemHandler;                                                                         //@synthesize canReorderItemHandler=_canReorderItemHandler - In the implementation block
@property (nonatomic,copy) UICollectionViewDiffableDataSourceSectionSnapshotHandlers * sectionSnapshotHandlers;              //@synthesize sectionSnapshotHandlers=_sectionSnapshotHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)snapshot;
-(BOOL)_shouldNotifyForApplyingSnapshot;
-(id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1 ;
-(void)_applyDifferencesFromSnapshot:(id)arg1 viewPropertyAnimator:(id)arg2 customAnimationsProvider:(/*^block*/id)arg3 ;
-(void)_performApplyWithoutRebasingSectionSnapshots:(/*^block*/id)arg1 ;
-(id)associatedSectionControllerForItemIdentifier:(id)arg1 ;
-(id)willApplySnapshotHandler;
-(void)_commitUpdate:(id)arg1 snapshot:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)snapshotQueue;
-(long long)_numberOfItemsInSection:(long long)arg1 collectionView:(id)arg2 ;
-(void)applyDifferencesFromSnapshot:(id)arg1 ;
-(BOOL)sectionController:(id)arg1 shouldQueryForSnapshotForExpandingParentItem:(id)arg2 ;
-(void)setCollectionViewCellProvider:(id)arg1 ;
-(void)appendSectionWithIdentifier:(id)arg1 ;
-(id)cellObserver;
-(void)reloadSectionsWithIdentifiers:(id)arg1 ;
-(id)_snapshotWithHandlerAtomic:(/*^block*/id)arg1 ;
-(long long)tableViewDefaultRowAnimation;
-(void)_commitStateAtomicallyWithIdentifiers:(id)arg1 sections:(id)arg2 dataSourceSnapshot:(id)arg3 shouldAdvanceGenerationalUUID:(BOOL)arg4 shouldCopy:(BOOL)arg5 ;
-(long long)_numberOfSectionsForTableViewDeprecatedSPI:(id)arg1 ;
-(void)_notifyDidApplyForCurrentTransactionIfNeeded;
-(void)deleteSectionsWithIdentifiers:(id)arg1 ;
-(id)_reloadViewUpdatesForDiffUpdate:(id)arg1 dataSource:(id)arg2 ignoreInvalidItems:(BOOL)arg3 ;
-(id)emptySnapshot;
-(void)_applyDifferencesFromSnapshot:(id)arg1 viewPropertyAnimator:(id)arg2 customAnimationsProvider:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)_numberOfSectionsForCollectionViewDeprecatedSPI:(id)arg1 ;
-(void)setMutationQueueSource:(unsigned long long)arg1 ;
-(void)setDidApplySnapshotHandler:(id)arg1 ;
-(id)initWithState:(id)arg1 ;
-(void)setSupplementaryViewConfigurationHandler:(id)arg1 ;
-(unsigned long long)_capabilities;
-(void)_resetCurrentTransaction;
-(id)initWithTableView:(id)arg1 cellProvider:(/*^block*/id)arg2 reuseIdentifierProvider:(/*^block*/id)arg3 cellConfigurationHandler:(/*^block*/id)arg4 state:(id)arg5 dataSource:(id)arg6 ;
-(id)tableViewCellConfigurationHandler;
-(long long)_numberOfItemsInSectionDeprecatedSPI:(long long)arg1 collectionView:(id)arg2 ;
-(void)setSupplementaryReuseIdentifierProvider:(id)arg1 ;
-(NSArray *)sectionIdentifiers;
-(id)collectionViewCellConfigurationHandler;
-(void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2 ;
-(id)sectionController:(id)arg1 snapshotForExpandingParentItem:(id)arg2 currentSectionSnapshot:(id)arg3 ;
-(void)_notifyWillApplyForCurrentTransactionIfNeeded;
-(id)_transactionForFinalSnapshot:(id)arg1 dataSourceDiffer:(id)arg2 shouldSkipRebasingSectionSnapshots:(BOOL)arg3 ;
-(id)_reloadViewUpdatesForDiffUpdate:(id)arg1 ;
-(void)setSupplementaryViewProvider:(id)arg1 ;
-(void)_willBeginReorderingForItemAtIndexPath:(id)arg1 ;
-(id)_viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 collectionView:(id)arg3 ;
-(void)reloadFromSnapshot:(id)arg1 ;
-(BOOL)_isApplyingReorderingTransaction;
-(long long)_numberOfSectionsForTableView:(id)arg1 ;
-(id)supplementaryViewConfigurationHandler;
-(long long)_numberOfSectionsForCollectionView:(id)arg1 ;
-(long long)_numberOfRowsInSection:(long long)arg1 tableView:(id)arg2 ;
-(BOOL)sectionController:(id)arg1 shouldCollapseItem:(id)arg2 ;
-(id)initWithCollectionView:(id)arg1 cellProvider:(/*^block*/id)arg2 reuseIdentifierProvider:(/*^block*/id)arg3 cellConfigurationHandler:(/*^block*/id)arg4 state:(id)arg5 dataSource:(id)arg6 ;
-(UICollectionViewDiffableDataSourceReorderingHandlers *)reorderingHandlers;
-(void)sectionController:(id)arg1 willCollapseItem:(id)arg2 ;
-(BOOL)isApplyingWithoutRebasingSectionSnapshots;
-(void)_commitReorderingForItemAtIndexPath:(id)arg1 toDestinationIndexPath:(id)arg2 shouldPerformViewAnimations:(BOOL)arg3 ;
-(id)initWithCollectionView:(id)arg1 cellProvider:(/*^block*/id)arg2 dataSource:(id)arg3 ;
-(void)deleteAllItems;
-(id)didApplySnapshotHandler;
-(id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(/*^block*/id)arg2 cellConfigurationHandler:(/*^block*/id)arg3 ;
-(void)appendItemsWithIdentifiers:(id)arg1 ;
-(void)appendSectionsWithIdentifiers:(id)arg1 ;
-(void)sectionController:(id)arg1 willExpandItem:(id)arg2 ;
-(NSArray *)sectionControllers;
-(void)reloadFromSnapshot:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reloadItemsWithIdentifiers:(id)arg1 ;
-(void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)setIsApplyingWithoutRebasingSectionSnapshots:(BOOL)arg1 ;
-(id)_cellForRowAtIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)initWithTableView:(id)arg1 reuseIdentifierProvider:(/*^block*/id)arg2 cellConfigurationHandler:(/*^block*/id)arg3 ;
-(void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2 ;
-(void)applyDifferencesFromSnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 ;
-(void)setTableViewCellProvider:(id)arg1 ;
-(void)applyDifferencesFromSnapshot:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setWillApplySnapshotHandler:(id)arg1 ;
-(id)collectionViewCellProvider;
-(void)setReorderingHandlers:(UICollectionViewDiffableDataSourceReorderingHandlers *)arg1 ;
-(id)_viewForSupplementaryElementOfKindDeprecatedSPI:(id)arg1 atIndexPath:(id)arg2 collectionView:(id)arg3 ;
-(id)_reorderingTransactionForReorderingUpdate:(id)arg1 ;
-(id)canReorderItemHandler;
-(id)_cellForItemAtIndexPath:(id)arg1 collectionView:(id)arg2 ;
-(void)_commitNewDataSource:(id)arg1 withViewUpdates:(id)arg2 viewPropertyAnimator:(id)arg3 customAnimationsProvider:(/*^block*/id)arg4 commitAlongsideHandler:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(UICollectionView *)_collectionView;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg1 ;
-(void)setReuseIdentifierProvider:(id)arg1 ;
-(id)_pendingReloadUpdatesForSnapshot:(id)arg1 ;
-(void)setTableViewCellConfigurationHandler:(id)arg1 ;
-(void)applySnapshot:(id)arg1 ;
-(Aq)outstandingApplyCount;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2 ;
-(void)setTableViewDefaultRowAnimation:(long long)arg1 ;
-(void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(void)setCollectionViewCellConfigurationHandler:(id)arg1 ;
-(BOOL)canMoveItemAtIndexPath:(id)arg1 ;
-(id)tableViewCellProvider;
-(void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2 ;
-(void)_computeCurrentTransactionForFinalSnapshot:(id)arg1 withDataSourceDiffer:(id)arg2 ;
-(void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(long long)indexOfItemIdentifier:(id)arg1 ;
-(id)supplementaryReuseIdentifierProvider;
-(id)reuseIdentifierProvider;
-(void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2 ;
-(id)currentTransaction;
-(void)_commitUpdate:(id)arg1 ;
-(BOOL)sectionController:(id)arg1 shouldExpandItem:(id)arg2 ;
-(_UIDiffableDataSourceViewUpdater *)viewUpdater;
-(id)_cellForItemAtIndexPathDeprecatedSPI:(id)arg1 collectionView:(id)arg2 ;
-(void)addAssociatedSectionControllerIfNeeded:(id)arg1 ;
-(long long)_numberOfRowsInSectionDeprecatedSPI:(long long)arg1 tableView:(id)arg2 ;
-(void)_commitRebasedSectionSnapshotsFromCurrentTransactionIfNeeded;
-(void)_applyDifferencesFromSnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)applyDifferencesFromSnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_applyDifferencesFromSnapshot:(id)arg1 customAnimationsProvider:(/*^block*/id)arg2 ;
-(void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(id)_cellForRowAtIndexPathDeprecatedSPI:(id)arg1 tableView:(id)arg2 ;
-(BOOL)_canApplySnapshotUpdateWithoutDiffing:(id)arg1 ;
-(void)_commitReorderingForItemAtIndexPath:(id)arg1 toDestinationIndexPath:(id)arg2 ;
-(void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(long long)indexOfSectionIdentifier:(id)arg1 ;
-(void)setViewUpdater:(_UIDiffableDataSourceViewUpdater *)arg1 ;
-(void)setCellObserver:(id)arg1 ;
-(void)deleteItemsWithIdentifiers:(id)arg1 ;
-(void)setCanReorderItemHandler:(id)arg1 ;
-(id)associatedSectionControllerForSectionIdentifier:(id)arg1 ;
-(unsigned long long)mutationQueueSource;
-(NSObject*<OS_dispatch_queue>)applyQueue;
-(NSArray *)itemIdentifiers;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)initWithCollectionView:(id)arg1 itemRenderers:(id)arg2 rendererIdentifierProvider:(/*^block*/id)arg3 ;
-(id)supplementaryViewProvider;
-(long long)numberOfItems;
-(id)snapshotForSection:(id)arg1 ;
-(UITableView *)tableView;
-(UICollectionViewDiffableDataSourceSectionSnapshotHandlers *)sectionSnapshotHandlers;
-(id)initWithCollectionView:(id)arg1 sectionControllers:(id)arg2 rendererIdentifierProvider:(/*^block*/id)arg3 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)initWithCollectionView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(id)_snapshotForSection:(id)arg1 ;
-(long long)numberOfItemsInSection:(id)arg1 ;
-(void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)itemIdentifierForIndexPath:(id)arg1 ;
-(long long)numberOfSections;
-(id)indexPathForItemIdentifier:(id)arg1 ;
-(void)_registerItemRenderers:(id)arg1 rendererIdentifierProvider:(/*^block*/id)arg2 ;
-(UICollectionView *)collectionView;
-(void)setSectionSnapshotHandlers:(UICollectionViewDiffableDataSourceSectionSnapshotHandlers *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)_diffableDataSourceImpl;
-(NSString *)description;
-(BOOL)_isDiffableDataSource;
-(void)setState:(id<_UIDiffableDataSourceState>)arg1 ;
-(id<_UIDiffableDataSourceState>)state;
-(id)initWithViewUpdatesSink:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithTableView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
@end

