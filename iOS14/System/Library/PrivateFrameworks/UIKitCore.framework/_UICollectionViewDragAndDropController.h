/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionViewShadowUpdatesController.h>
#import <UIKitCore/_UICollectionViewPlaceholderContextDelegate.h>
#import <UIKitCore/_UICollectionViewDragSourceControllerDelegate.h>
#import <UIKitCore/_UICollectionViewDragDestinationControllerDelegate.h>
#import <UIKitCore/_UICollectionViewDropCoordinator.h>
#import <UIKit/UICollectionViewDropCoordinator.h>

@class UICollectionViewDropProposal, NSArray, NSIndexPath, _UICollectionViewDragDestinationController, _UICollectionViewDragSourceController, NSMutableArray, _UICollectionViewPlaceholderContext, NSMutableDictionary, NSMutableSet, NSMapTable, _UIDropAnimationHandlers, NSUUID, NSString;

@interface _UICollectionViewDragAndDropController : _UICollectionViewShadowUpdatesController <_UICollectionViewPlaceholderContextDelegate, _UICollectionViewDragSourceControllerDelegate, _UICollectionViewDragDestinationControllerDelegate, _UICollectionViewDropCoordinator, UICollectionViewDropCoordinator> {

	int _sessionKind;
	_UICollectionViewDragDestinationController* _destinationController;
	_UICollectionViewDragSourceController* _sourceController;
	NSMutableArray* __reorderedItems;
	_UICollectionViewPlaceholderContext* _currentlyInsertingPlaceholderContext;
	NSMutableDictionary* _placeholderContextsByIndexPath;
	NSMutableSet* _placeholderContexts;
	NSMutableDictionary* _cellAppearanceStatesByIndexPaths;
	NSMapTable* _cellAppearanceStatesByCellPointers;
	NSMutableArray* _dropCoordinatorItems;
	NSMapTable* _dropCoordinatorItemsMap;
	NSMutableArray* _cellsDeferredForReuse;
	long long _sessionRefCount;
	_UIDropAnimationHandlers* _defaultAnimationHandlers;
	NSUUID* _currentDropInsertionShadowUpdateIdentifier;

}

@property (nonatomic,retain) NSMutableArray * _reorderedItems;                                                        //@synthesize _reorderedItems=__reorderedItems - In the implementation block
@property (nonatomic,retain) _UICollectionViewPlaceholderContext * currentlyInsertingPlaceholderContext;              //@synthesize currentlyInsertingPlaceholderContext=_currentlyInsertingPlaceholderContext - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * placeholderContextsByIndexPath;                                    //@synthesize placeholderContextsByIndexPath=_placeholderContextsByIndexPath - In the implementation block
@property (nonatomic,retain) NSMutableSet * placeholderContexts;                                                      //@synthesize placeholderContexts=_placeholderContexts - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cellAppearanceStatesByIndexPaths;                                  //@synthesize cellAppearanceStatesByIndexPaths=_cellAppearanceStatesByIndexPaths - In the implementation block
@property (nonatomic,retain) NSMapTable * cellAppearanceStatesByCellPointers;                                         //@synthesize cellAppearanceStatesByCellPointers=_cellAppearanceStatesByCellPointers - In the implementation block
@property (nonatomic,retain) NSMutableArray * dropCoordinatorItems;                                                   //@synthesize dropCoordinatorItems=_dropCoordinatorItems - In the implementation block
@property (nonatomic,retain) NSMapTable * dropCoordinatorItemsMap;                                                    //@synthesize dropCoordinatorItemsMap=_dropCoordinatorItemsMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * cellsDeferredForReuse;                                                  //@synthesize cellsDeferredForReuse=_cellsDeferredForReuse - In the implementation block
@property (assign,nonatomic) long long sessionRefCount;                                                               //@synthesize sessionRefCount=_sessionRefCount - In the implementation block
@property (nonatomic,retain) _UIDropAnimationHandlers * defaultAnimationHandlers;                                     //@synthesize defaultAnimationHandlers=_defaultAnimationHandlers - In the implementation block
@property (nonatomic,retain) NSUUID * currentDropInsertionShadowUpdateIdentifier;                                     //@synthesize currentDropInsertionShadowUpdateIdentifier=_currentDropInsertionShadowUpdateIdentifier - In the implementation block
@property (assign,nonatomic) int sessionKind;                                                                         //@synthesize sessionKind=_sessionKind - In the implementation block
@property (nonatomic,retain) _UICollectionViewDragDestinationController * destinationController;                      //@synthesize destinationController=_destinationController - In the implementation block
@property (nonatomic,retain) _UICollectionViewDragSourceController * sourceController;                                //@synthesize sourceController=_sourceController - In the implementation block
@property (nonatomic,readonly) NSArray * reorderedItems; 
@property (nonatomic,readonly) unsigned long long reorderingCapabilities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UICollectionViewDropProposal * dropProposal; 
@property (nonatomic,readonly) id<UIDropSession> dropSession; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSIndexPath * destinationIndexPath; 
@property (nonatomic,readonly) UICollectionViewDropProposal * proposal; 
@property (nonatomic,readonly) id<UIDropSession> session; 
-(id)_shadowUpdateReuseIdentifierForItemItemAtIndexPath:(id)arg1 ;
-(id)initWithCollectionView:(id)arg1 ;
-(void)setSessionKind:(int)arg1 ;
-(void)_updateCellIfNeeded:(id)arg1 atIndexPath:(id)arg2 ;
-(UICollectionViewDropProposal *)dropProposal;
-(BOOL)_shouldPerformTranslationForDelegateBasedFlowLayoutSizing;
-(void)didRebaseWithNewBaseUpdateMap:(id)arg1 ;
-(id<UIDropSession>)dropSession;
-(UICollectionViewDropProposal *)proposal;
-(void)set_reorderedItems:(NSMutableArray *)arg1 ;
-(void)dragSourceController:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 ;
-(void)_incrementSessionRefCount;
-(void)setPlaceholderContextsByIndexPath:(NSMutableDictionary *)arg1 ;
-(void)setCurrentDropInsertionShadowUpdateIdentifier:(NSUUID *)arg1 ;
-(void)dragSourceController:(id)arg1 didEndForItemsAtIndexPaths:(id)arg2 ;
-(BOOL)placeholderContext:(id)arg1 didCommitInsertionWithDataSourceUpdates:(/*^block*/id)arg2 ;
-(id)placeholderContextDidDismiss:(id)arg1 ;
-(void)setSourceController:(_UICollectionViewDragSourceController *)arg1 ;
-(NSMutableArray *)dropCoordinatorItems;
-(BOOL)hasShadowUpdates;
-(void)setCellsDeferredForReuse:(NSMutableArray *)arg1 ;
-(id)_dropCoordinatorItemForIndexPath:(id)arg1 ;
-(id)dropItem:(id)arg1 toPlaceholderInsertedAtIndexPath:(id)arg2 withReuseIdentifier:(id)arg3 cellUpdateHandler:(/*^block*/id)arg4 ;
-(int)_determineSessionKind;
-(void)dragDestinationControllerSessionWillBegin:(id)arg1 ;
-(id)dataSourceIndexPathForPresentationIndexPath:(id)arg1 ;
-(void)_resetReorderedItems;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)insertPlaceholderForItemAtIndexPath:(id)arg1 forDragItem:(id)arg2 reuseIdentifier:(id)arg3 cellUpdateHandler:(/*^block*/id)arg4 ;
-(id)dropItem:(id)arg1 toTarget:(id)arg2 ;
-(void)_updateAppearanceForCell:(id)arg1 atIndexPath:(id)arg2 appearance:(long long)arg3 ;
-(BOOL)cellShouldRemainInHierarchy:(id)arg1 indexPath:(id)arg2 ;
-(void)dragSourceControllerSessionWillBegin:(id)arg1 ;
-(/*^block*/id)endReordering;
-(long long)numberOfSections;
-(id)indexPathForCurrentReorderedItem;
-(void)_beginDragAndDropInsertingItemAtIndexPath:(id)arg1 ;
-(NSMutableSet *)placeholderContexts;
-(void)dragSourceController:(id)arg1 willBeginAnimatingCancelForItemsAtIndexPaths:(id)arg2 withAnimator:(id)arg3 ;
-(void)dragSourceController:(id)arg1 didCompleteLiftForItemsAtIndexPaths:(id)arg2 ;
-(id)sourceIndexPaths;
-(void)dragSourceController:(id)arg1 willEndForItemsAtIndexPaths:(id)arg2 withDropOperation:(unsigned long long)arg3 ;
-(void)_updateCellAppearancesForItemsAtIndexPaths:(id)arg1 ;
-(id)dropItem:(id)arg1 intoItemAtIndexPath:(id)arg2 rect:(CGRect)arg3 ;
-(id<UIDropSession>)session;
-(id)dropToPlaceholderCellAtIndexPath:(id)arg1 reuseIdentifier:(id)arg2 forDragItem:(id)arg3 cellUpdateHandler:(/*^block*/id)arg4 ;
-(void)dropToTarget:(id)arg1 forDragItem:(id)arg2 ;
-(void)setDestinationController:(_UICollectionViewDragDestinationController *)arg1 ;
-(NSMapTable *)cellAppearanceStatesByCellPointers;
-(void)dragDestinationController:(id)arg1 didCompleteDropAnimationForDragItem:(id)arg2 ;
-(void)_removeReorderedItemsCellsFromViewHierarchy;
-(void)_performCancelDropToIndexPath:(id)arg1 forDragItem:(id)arg2 ;
-(NSArray *)items;
-(void)setCellAppearanceStatesByCellPointers:(NSMapTable *)arg1 ;
-(void)setDropCoordinatorItemsMap:(NSMapTable *)arg1 ;
-(BOOL)_removeMoveShadowUpdateMatchingReorderedItem:(id)arg1 ;
-(NSArray *)reorderedItems;
-(id)_cellAppearanceStateForCell:(id)arg1 addIfNotFound:(BOOL)arg2 ;
-(void)dragSourceController:(id)arg1 didCancelLiftForItemsAtIndexPaths:(id)arg2 ;
-(void)_invokeAllCompletionHandlers;
-(void)transferOwnershipOfCellForDeferredReuseAfterDropAnimations:(id)arg1 ;
-(NSString *)description;
-(id)presentationIndexPathForDataSourceIndexPath:(id)arg1 ;
-(_UICollectionViewPlaceholderContext *)currentlyInsertingPlaceholderContext;
-(/*^block*/id)cancelReordering;
-(void)dragSourceController:(id)arg1 willBeginLiftForItemsAtIndexPaths:(id)arg2 ;
-(void)setCellAppearanceStatesByIndexPaths:(NSMutableDictionary *)arg1 ;
-(void)_addAnimationHandlers:(id)arg1 toAnimator:(id)arg2 ;
-(void)setCurrentlyInsertingPlaceholderContext:(_UICollectionViewPlaceholderContext *)arg1 ;
-(int)sessionKind;
-(void)dragSourceController:(id)arg1 didCompleteAnimatingCancelForItemsAtIndexPaths:(id)arg2 ;
-(long long)sessionRefCount;
-(void)setSessionRefCount:(long long)arg1 ;
-(void)_removeAnyDeferredReuseCells;
-(id)_cellForDropCoordinatorItem:(id)arg1 ;
-(id)indexPathForDragAndDropInsertion;
-(void)updateReorderingTargetIndexPath:(id)arg1 ;
-(void)_resetAllAnimationHandlers;
-(void)_addDropCoordinatorItem:(id)arg1 ;
-(_UICollectionViewDragDestinationController *)destinationController;
-(NSIndexPath *)destinationIndexPath;
-(BOOL)beginReorderingForItemAtIndexPath:(id)arg1 cell:(id)arg2 ;
-(void)placeholderContextNeedsCellUpdate:(id)arg1 ;
-(id)_cellAppearanceStateForIndexPath:(id)arg1 ;
-(id)indexPathForOriginalReorderedItem;
-(BOOL)_deleteShadowUpdateWithIdentifier:(id)arg1 ;
-(void)reset;
-(NSMutableArray *)cellsDeferredForReuse;
-(id)placeholderContextForDragItem:(id)arg1 ;
-(long long)_determineAppearanceForItemAtIndexPath:(id)arg1 ;
-(unsigned long long)reorderingCapabilities;
-(void)dragDestinationControllerDidConcludeDrop:(id)arg1 ;
-(void)_beginReorderingForItemAtIndexPath:(id)arg1 cell:(id)arg2 ;
-(BOOL)_hasReorderingMoved;
-(void)_cleanupAfterOutstandingSessionCompletion;
-(void)setDropCoordinatorItems:(NSMutableArray *)arg1 ;
-(void)dragDestinationController:(id)arg1 willPerformDropAtIndexPath:(id)arg2 ;
-(BOOL)cancelReorderingShouldRevertOrdering;
-(void)updateAppearanceForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)dropItem:(id)arg1 toPlaceholder:(id)arg2 ;
-(void)dragSourceController:(id)arg1 didUpdateItemCountOfSelectedItems:(long long)arg2 ;
-(void)_shadowUpdatesWereReverted;
-(void)dragDestinationController:(id)arg1 willBeginDropAnimationForDragItem:(id)arg2 animator:(id)arg3 ;
-(id)_indexPathForCellAppearanceState:(id)arg1 ;
-(void)dragDestinationController:(id)arg1 didPerformDropAtIndexPath:(id)arg2 ;
-(NSMutableDictionary *)placeholderContextsByIndexPath;
-(BOOL)isDragDestinationInteractivelyReordering;
-(void)setPlaceholderContexts:(NSMutableSet *)arg1 ;
-(id)_dropCoordinatorItemForDragItem:(id)arg1 ;
-(id)dropToPlaceholderInsertedAtIndexPath:(id)arg1 reuseIdentifier:(id)arg2 forDragItem:(id)arg3 cellUpdateHandler:(/*^block*/id)arg4 ;
-(void)_updateCellAppearanceForCell:(id)arg1 appearance:(long long)arg2 ;
-(void)dropToLocation:(CGPoint)arg1 inContainerView:(id)arg2 withTransform:(CGAffineTransform)arg3 forDragItem:(id)arg4 ;
-(_UIDropAnimationHandlers *)defaultAnimationHandlers;
-(BOOL)updateWillCauseInternalInconsistency:(id)arg1 ;
-(void)dragDestinationControllerSessionDidEnd:(id)arg1 ;
-(id)dropItem:(id)arg1 toItemAtIndexPath:(id)arg2 ;
-(void)_rollbackCurrentDropInsertion;
-(id)_presentationIndexPathForIndexPath:(id)arg1 allowingAppendingInserts:(BOOL)arg2 ;
-(void)_decrementSessionRefCount;
-(_UICollectionViewDragSourceController *)sourceController;
-(NSMapTable *)dropCoordinatorItemsMap;
-(BOOL)_isReordering;
-(NSMutableArray *)_reorderedItems;
-(void)_resetAnyDragStateModifiedVisibleCells;
-(NSUUID *)currentDropInsertionShadowUpdateIdentifier;
-(void)setDefaultAnimationHandlers:(_UIDropAnimationHandlers *)arg1 ;
-(void)dragSourceController:(id)arg1 didSupplyCancellationPreviewForItemAtIndexPath:(id)arg2 ;
-(NSMutableDictionary *)cellAppearanceStatesByIndexPaths;
-(void)dropToItemAtIndexPath:(id)arg1 forDragItem:(id)arg2 ;
-(BOOL)isCellPerformingLegacyReorderingAtIndexPath:(id)arg1 ;
@end

