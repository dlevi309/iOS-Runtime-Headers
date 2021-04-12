/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UICollectionViewDragDestination_Internal.h>

@class UICollectionView, _UIDataSourceSnapshotter, _UIDataSourceUpdateMap, NSMutableArray, NSPointerArray, NSString;

@interface _UICollectionViewShadowUpdatesController : NSObject <UICollectionViewDragDestination_Internal> {

	UICollectionView* _collectionView;
	_UIDataSourceSnapshotter* _initialSnapshot;
	_UIDataSourceUpdateMap* _updateMap;
	NSMutableArray* __shadowUpdates;
	NSPointerArray* _rebaseObservers;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;                //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) _UIDataSourceSnapshotter * initialSnapshot;              //@synthesize initialSnapshot=_initialSnapshot - In the implementation block
@property (nonatomic,retain) _UIDataSourceUpdateMap * updateMap;                      //@synthesize updateMap=_updateMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * _shadowUpdates;                         //@synthesize _shadowUpdates=__shadowUpdates - In the implementation block
@property (nonatomic,retain) NSPointerArray * rebaseObservers;                        //@synthesize rebaseObservers=_rebaseObservers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(UICollectionView *)collectionView;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)indexTitlesForCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 indexPathForIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(id)initWithCollectionView:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)collectionView:(id)arg1 tableLayout:(id)arg2 commitEditingStyle:(long long)arg3 forRowAtIndexPath:(id)arg4 ;
-(BOOL)collectionView:(id)arg1 tableLayout:(id)arg2 shouldIndentWhileEditingRowAtIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 tableLayout:(id)arg2 indentationLevelForRowAtIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 tableLayout:(id)arg2 editingStyleForRowAtIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 tableLayout:(id)arg2 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 tableLayout:(id)arg2 leadingSwipeActionsForRowAtIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 tableLayout:(id)arg2 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 tableLayout:(id)arg2 trailingSwipeActionsForRowAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 tableLayout:(id)arg2 willBeginEditingRowAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 tableLayout:(id)arg2 didEndEditingRowAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 heightForHeaderViewInTableLayout:(id)arg2 ;
-(double)collectionView:(id)arg1 heightForFooterViewInTableLayout:(id)arg2 ;
-(double)collectionView:(id)arg1 tableLayout:(id)arg2 heightForRowAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 tableLayout:(id)arg2 estimatedHeightForRowAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 tableLayout:(id)arg2 estimatedHeightForHeaderInSection:(long long)arg3 ;
-(double)collectionView:(id)arg1 tableLayout:(id)arg2 estimatedHeightForFooterInSection:(long long)arg3 ;
-(double)collectionView:(id)arg1 tableLayout:(id)arg2 heightForHeaderInSection:(long long)arg3 ;
-(double)collectionView:(id)arg1 tableLayout:(id)arg2 heightForFooterInSection:(long long)arg3 ;
-(void)collectionView:(id)arg1 tableLayout:(id)arg2 accessoryButtonTappedForRowWithIndexPath:(id)arg3 ;
-(BOOL)_collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4 ;
-(BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)arg1 ;
-(BOOL)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(CGPoint)arg2 contentSize:(CGSize)arg3 ;
-(CGPoint)_collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(id)_collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)_collectionView:(id)arg1 templateLayoutCellForCellsWithReuseIdentifier:(id)arg2 ;
-(void)_collectionView:(id)arg1 willLayoutCell:(id)arg2 usingTemplateLayoutCell:(id)arg3 forItemAtIndexPath:(id)arg4 ;
-(BOOL)_collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)_collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)_sectionIndexTitlesForCollectionView:(id)arg1 ;
-(id)_collectionView:(id)arg1 sectionIndexTitlesTrimmedToCount:(unsigned long long)arg2 ;
-(id)_collectionView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2 ;
-(id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3 ;
-(id)indexPathAfterShadowUpdates:(id)arg1 allowingAppendingInserts:(BOOL)arg2 ;
-(BOOL)shouldRebaseForUpdates;
-(void)rebaseForUpdates:(id)arg1 notifyRebaseObservers:(BOOL)arg2 ;
-(void)_collectionView:(id)arg1 willPerformUpdates:(id)arg2 ;
-(id)modelIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2 ;
-(id)indexPathForElementWithModelIdentifier:(id)arg1 inView:(id)arg2 ;
-(long long)sectionIndexAfterShadowUpdates:(long long)arg1 allowingAppendingInserts:(BOOL)arg2 ;
-(id)indexPathBeforeShadowUpdates:(id)arg1 ;
-(id)indexPathAfterShadowUpdates:(id)arg1 ;
-(id)shadowUpdates;
-(long long)sectionIndexAfterShadowUpdates:(long long)arg1 ;
-(long long)sectionIndexBeforeShadowUpdates:(long long)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3 ;
-(BOOL)_collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3 ;
-(void)appendShadowUpdate:(id)arg1 ;
-(id)computeRevertShadowUpdates;
-(id)_collectionView:(id)arg1 cursorRegionForItemAtIndexPath:(id)arg2 defaultRegion:(id)arg3 ;
-(id)_collectionView:(id)arg1 cursorStyleForModifiers:(long long)arg2 atIndexPath:(id)arg3 ;
-(void)_collectionView:(id)arg1 cursorWillEnterItemAtIndexPath:(id)arg2 ;
-(void)_collectionView:(id)arg1 cursorWillExitItemAtIndexPath:(id)arg2 ;
-(long long)_collectionView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)_collectionView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(id)_collectionView:(id)arg1 layout:(id)arg2 flowLayoutRowAlignmentOptionsForSection:(long long)arg3 ;
-(id)_collectionView:(id)arg1 layout:(id)arg2 sizesForItemsInSection:(long long)arg3 ;
-(NSMutableArray *)_shadowUpdates;
-(id)_findShadowUpdateForIdentifier:(id)arg1 inShadowUpdates:(id)arg2 ;
-(_UIDataSourceUpdateMap *)updateMap;
-(void)_regenerateUpdateMap;
-(void)addRebaseObserver:(id)arg1 ;
-(id)_shadowUpdateReuseIdentifierForItemItemAtIndexPath:(id)arg1 ;
-(_UIDataSourceSnapshotter *)initialSnapshot;
-(void)_pruneAndRebaseShadowUpdatesForShadowInsertWithIdentifier:(id)arg1 ;
-(BOOL)_shouldPerformTranslationForDelegateBasedFlowLayoutSizing;
-(void)didRebaseWithNewBaseUpdateMap:(id)arg1 ;
-(void)_updateCellIfNeeded:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canHandleDropSession:(id)arg2 ;
-(BOOL)_collectionView:(id)arg1 canHandleDropSesson:(id)arg2 ;
-(void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2 ;
-(void)_collectionView:(id)arg1 dropSessionDidEnter:(id)arg2 ;
-(void)collectionView:(id)arg1 dropSessionDidExit:(id)arg2 ;
-(void)_collectionView:(id)arg1 dropSessionDidExit:(id)arg2 ;
-(void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2 ;
-(void)_collectionView:(id)arg1 dropSessionDidEnd:(id)arg2 ;
-(void)_collectionView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2 ;
-(id)_collectionView:(id)arg1 dragDestinationTargetIndexPathForProposedIndexPath:(id)arg2 currentIndexPath:(id)arg3 dropSession:(id)arg4 ;
-(id)_collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(BOOL)_collectionView:(id)arg1 prefersFullSizePreviewsForDragSession:(id)arg2 ;
-(void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2 ;
-(void)_collectionView:(id)arg1 dragSessionDidEnd:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2 ;
-(BOOL)_collectionView:(id)arg1 dragSessionSupportsSystemDrag:(id)arg2 ;
-(id)_collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4 ;
-(id)_collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4 ;
-(id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2 ;
-(id)_collectionView:(id)arg1 liftingPreviewParametersForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2 ;
-(void)_collectionView:(id)arg1 dragSessionWillBegin:(id)arg2 ;
-(double)collectionView:(id)arg1 listLayout:(id)arg2 heightForRowAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 listLayout:(id)arg2 heightForHeaderInSection:(long long)arg3 ;
-(double)collectionView:(id)arg1 listLayout:(id)arg2 heightForFooterInSection:(long long)arg3 ;
-(void)setInitialSnapshot:(_UIDataSourceSnapshotter *)arg1 ;
-(void)setUpdateMap:(_UIDataSourceUpdateMap *)arg1 ;
-(NSPointerArray *)rebaseObservers;
-(id)_coalesceUpdatesIfPossible:(id)arg1 ;
-(id)_supplementaryIndexPathBeforeShadowUpdates:(id)arg1 ;
-(id)_collectionView:(id)arg1 flowLayoutRowAlignmentOptionsForSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 listLayout:(id)arg2 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 listLayout:(id)arg2 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 listLayout:(id)arg2 willBeginEditingRowAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 listLayout:(id)arg2 didEndEditingRowAtIndexPath:(id)arg3 ;
-(BOOL)_shadowUpdatesAreSimpleInsertWithOptionalMoveSequenceForIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 canHandleDropSesson:(id)arg2 ;
-(id)_rebasedShadowUpdatesForUpdate:(id)arg1 initialSnapshot:(id)arg2 shadowUpdates:(id)arg3 ;
-(id)_rebasedUpdateMapForUpdate:(id)arg1 ;
-(id)_snapshotForShadowUpdatePreceedingShadowUpdate:(id)arg1 shadowUpdates:(id)arg2 ;
-(id)_indexPathsBeforeShadowUpdates:(id)arg1 ;
-(id)_findInsertShadowUpdateForFinalIndexPath:(id)arg1 ;
-(void)set_shadowUpdates:(NSMutableArray *)arg1 ;
-(void)setRebaseObservers:(NSPointerArray *)arg1 ;
@end
