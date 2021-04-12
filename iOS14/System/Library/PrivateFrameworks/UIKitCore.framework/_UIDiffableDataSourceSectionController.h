/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UIDiffableDataSourceSectionControllerDelegate;
@class __UIDiffableDataSource, NSMapTable, NSSet, NSArray, _UIDiffableDataSourceSectionControllerHandlers;

@interface _UIDiffableDataSourceSectionController : NSObject <NSCopying> {

	__UIDiffableDataSource* _dataSource;
	NSMapTable* _snapshotsMap;
	NSSet* _associatedSectionIdentifiers;
	id<_UIDiffableDataSourceSectionControllerDelegate> _delegate;
	NSArray* _itemRenderers;
	_UIDiffableDataSourceSectionControllerHandlers* _handlers;

}

@property (nonatomic,readonly) NSArray * itemRenderers;                                            //@synthesize itemRenderers=_itemRenderers - In the implementation block
@property (nonatomic,readonly) NSSet * associatedSectionIdentifiers;                               //@synthesize associatedSectionIdentifiers=_associatedSectionIdentifiers - In the implementation block
@property (nonatomic,copy) _UIDiffableDataSourceSectionControllerHandlers * handlers;              //@synthesize handlers=_handlers - In the implementation block
-(_UIDiffableDataSourceSectionControllerHandlers *)handlers;
-(void)setHandlers:(_UIDiffableDataSourceSectionControllerHandlers *)arg1 ;
-(void)_applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(BOOL)arg3 viewPropertyAnimator:(id)arg4 animationsProvider:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)__applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(BOOL)arg3 viewPropertyAnimator:(id)arg4 animationsProvider:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(/*^block*/id)_customCollapseExpandAnimationsForSnapshot:(id)arg1 initialSectionSnapshot:(id)arg2 finalSectionSnapshot:(id)arg3 viewPropertyAnimator:(id)arg4 visibleBounds:(CGRect)arg5 sectionIndex:(long long)arg6 ;
-(id)_collectionView;
-(id)initWithItemRenderers:(id)arg1 associatedSectionIdentifiers:(id)arg2 snapshotsMap:(id)arg3 dataSource:(id)arg4 ;
-(void)applySnapshot:(id)arg1 toSection:(id)arg2 viewPropertyAnimator:(id)arg3 customAnimationsProvider:(/*^block*/id)arg4 ;
-(id)_queryClientSnapshotForExpandingParentItemForItem:(id)arg1 currentSectionSnapshot:(id)arg2 ;
-(BOOL)_shouldPerformCustomCollapseExpandAnimationsForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 ;
-(void)_updateAffectedVisibleCellConfigurationsForExapansionStateWithSnapshot:(id)arg1 ;
-(id)snapshotForSection:(id)arg1 ;
-(id)delegate;
-(void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(BOOL)arg3 ;
-(id)dataSource;
-(void)setDelegate:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(id)initWithDiffableDataSourceImpl:(id)arg1 ;
-(id)_extantMutableSnapshotForSection:(id)arg1 ;
-(NSSet *)associatedSectionIdentifiers;
-(void)_updateSnapshot:(id)arg1 forSectionIdentifier:(id)arg2 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureForDataSource:(id)arg1 ;
-(id)_extantMutableSnapshotForItem:(id)arg1 ;
-(void)_configureForItemRenderersIfNeeded:(id)arg1 ;
-(BOOL)_snapshotHasExpandOrCollapseUpdates:(id)arg1 ;
-(id)snapshotForItem:(id)arg1 ;
-(id)_snapshotForSectionContainingItem:(id)arg1 ;
-(void)_configureCell:(id)arg1 forItem:(id)arg2 ;
-(void)disclosureButtonWasTappedForItem:(id)arg1 ;
-(BOOL)_queryClientShouldCollapseItem:(id)arg1 ;
-(BOOL)_queryClientShouldExpandItem:(id)arg1 ;
-(void)_queryClientWillExpandItem:(id)arg1 ;
-(void)_queryClientWillCollapseItem:(id)arg1 ;
-(id)initWithDiffableDataSource:(id)arg1 ;
-(BOOL)_queryClientShouldQueryForSnapshotForExpandingParentItem:(id)arg1 ;
-(id)initWithItemRenderers:(id)arg1 ;
-(id)initWithItemRenderers:(id)arg1 associatedSectionIdentifiers:(id)arg2 ;
-(void)applySnapshot:(id)arg1 toSection:(id)arg2 customAnimationsProvider:(/*^block*/id)arg3 ;
-(NSArray *)itemRenderers;
-(id)_snapshotsMap;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

