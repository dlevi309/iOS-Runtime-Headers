/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionViewLayoutOrthogonalScrolling.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UICollectionView, NSMutableDictionary, NSMutableIndexSet, UIDynamicAnimator, UICollectionViewLayoutInvalidationContext, NSIndexSet, NSArray, _UICollectionViewCompositionLayout, NSString;

@interface UICollectionViewLayout : NSObject <_UICollectionViewLayoutOrthogonalScrolling, NSCoding> {

	UICollectionView* _collectionView;
	CGSize _collectionViewBoundsSize;
	NSMutableDictionary* _initialAnimationLayoutAttributesDict;
	NSMutableDictionary* _finalAnimationLayoutAttributesDict;
	NSMutableDictionary* _deletedSupplementaryIndexPathsDict;
	NSMutableDictionary* _insertedSupplementaryIndexPathsDict;
	NSMutableDictionary* _deletedDecorationIndexPathsDict;
	NSMutableDictionary* _insertedDecorationIndexPathsDict;
	NSMutableIndexSet* _deletedSectionsSet;
	NSMutableIndexSet* _insertedSectionsSet;
	NSMutableDictionary* _decorationViewClassDict;
	NSMutableDictionary* _decorationViewNibDict;
	NSMutableDictionary* _decorationViewExternalObjectsTables;
	UICollectionViewLayout* _transitioningFromLayout;
	UICollectionViewLayout* _transitioningToLayout;
	UIDynamicAnimator* _animator;
	UICollectionViewLayoutInvalidationContext* _invalidationContext;
	CGRect _frame;
	NSIndexSet* _sections;
	NSIndexSet* _items;
	NSArray* _elementKinds;
	_UICollectionViewCompositionLayout* _compositionLayout;
	UICollectionViewLayout* _siblingLayout;
	CGPoint _layoutOffset;
	unsigned long long _layoutOffsetEdges;
	struct {
		unsigned inTransitionFromTransitionLayout : 1;
		unsigned inTransitionToTransitionLayout : 1;
		unsigned prepared : 1;
		unsigned wantsRightToLeftHorizontalMirroringIfNeeded : 1;
	}  _layoutFlags;
	long long _sublayoutType;

}

@property (assign,setter=_setFrame:,getter=_frame,nonatomic) CGRect frame; 
@property (setter=_setSections:,getter=_sections,nonatomic,copy) NSIndexSet * sections; 
@property (setter=_setItems:,getter=_items,nonatomic,copy) NSIndexSet * items; 
@property (setter=_setElementKinds:,getter=_elementKinds,nonatomic,copy) NSArray * elementKinds; 
@property (assign,setter=_setCompositionLayout:,getter=_compositionLayout,nonatomic) _UICollectionViewCompositionLayout * compositionLayout; 
@property (assign,setter=_setSiblingLayout:,getter=_siblingLayout,nonatomic) UICollectionViewLayout * siblingLayout; 
@property (assign,setter=_setLayoutOffset:,getter=_layoutOffset,nonatomic) CGPoint layoutOffset; 
@property (assign,setter=_setLayoutOffsetEdges:,getter=_layoutOffsetEdges,nonatomic) unsigned long long layoutOffsetEdges; 
@property (assign,setter=_setSublayoutType:,getter=_sublayoutType,nonatomic) long long sublayoutType;                                                     //@synthesize sublayoutType=_sublayoutType - In the implementation block
@property (assign,setter=_setPrepared:,getter=_isPrepared,nonatomic) BOOL prepared; 
@property (getter=_focusFastScrollingIndexBarInsets,nonatomic,readonly) UIEdgeInsets focusFastScrollingIndexBarInsets; 
@property (nonatomic,readonly) UICollectionView * collectionView;                                                                                         //@synthesize collectionView=_collectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)_frame;
-(CGRect)bounds;
-(id)_items;
-(void)invalidateLayout;
-(CGRect)_bounds;
-(UICollectionView *)collectionView;
-(unsigned long long)_layoutAxis;
-(BOOL)isEditing;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1 ;
-(id)indexPathsToInsertForDecorationViewOfKind:(id)arg1 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(BOOL)_estimatesSizes;
-(id)_invalidationContextForUpdatedLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)registerClass:(Class)arg1 forDecorationViewOfKind:(id)arg2 ;
-(void)_setWantsRightToLeftHorizontalMirroringIfNeeded:(BOOL)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(BOOL)_estimatesSupplementaryItems;
-(void)_willPerformUpdateVisibleCellsPass;
-(void)_didPerformUpdateVisibleCellsPass;
-(void)_prepareForPreferredAttributesQueryForView:(id)arg1 withLayoutAttributes:(id)arg2 ;
-(BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
-(void)_prepareForCollectionViewUpdates:(id)arg1 withDataSourceTranslator:(id)arg2 ;
-(BOOL)_wantsUntrackedAnimationCleanupForAuxillaryItems;
-(BOOL)_preparedForBoundsChanges;
-(BOOL)_overridesSafeAreaPropagationToDescendants;
-(unsigned long long)_edgesForSafeAreaPropagationToDescendants;
-(BOOL)_disallowsFadeCellsForBoundsChange;
-(void)_traitCollectionDidChangeFromPreviousCollection:(id)arg1 newTraitCollection:(id)arg2 ;
-(BOOL)_hasOrthogonalScrollingSections;
-(id)_orthogonalScrollingSections;
-(void)_setOffset:(CGPoint)arg1 forOrthogonalScrollingSection:(long long)arg2 ;
-(CGPoint)_offsetForOrthogonalScrollingSection:(long long)arg1 ;
-(BOOL)_shouldConfigureForPagingForOrthogonalScrollingSection:(long long)arg1 ;
-(double)_orthogonalScrollingPagingDimensionForSection:(long long)arg1 ;
-(BOOL)_orthogonalScrollingShouldCenterCustomPagingSizeForSection:(long long)arg1 ;
-(CGPoint)_orthogonalScrollingTargetContentOffsetForOffset:(CGPoint)arg1 section:(long long)arg2 ;
-(BOOL)_orthogonalScrollingUsesTargetContentOffsetForSection:(long long)arg1 ;
-(unsigned long long)_orthogonalScrollingAxis;
-(double)_orthogonalScrollingDecelerationRateForSection:(long long)arg1 ;
-(CGVector)_scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1 ;
-(CGRect)_orthogonalScrollingLayoutRectForSection:(long long)arg1 ;
-(CGRect)_orthogonalScrollingContentRectForSection:(long long)arg1 ;
-(NSDirectionalEdgeInsets)_orthogonalScrollingContentInsetsForSection:(long long)arg1 ;
-(id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(CGRect)arg1 ;
-(BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2 ;
-(BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2 ;
-(CGRect)_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg1 frame:(CGRect)arg2 ;
-(BOOL)_orthogonalScrollingElementShouldAppearAboveForAttributes:(id)arg1 ;
-(CGRect)_dynamicReferenceBounds;
-(id)_dynamicAnimator;
-(id)_elementKinds;
-(id)_sections;
-(BOOL)canBeEdited;
-(void)setEditing:(BOOL)arg1 ;
-(void)prepareForTransitionFromLayout:(id)arg1 ;
-(void)prepareForTransitionToLayout:(id)arg1 ;
-(void)_setCollectionView:(id)arg1 ;
-(id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(CGPoint)arg2 previousIndexPaths:(id)arg3 previousPosition:(CGPoint)arg4 ;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(CGPoint)_contentOffsetFromProposedContentOffset:(CGPoint)arg1 forScrollingToItemAtIndexPath:(id)arg2 atScrollPosition:(unsigned long long)arg3 ;
-(id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(UIEdgeInsets)_preferredLayoutMargins;
-(BOOL)_needsRecomputeOfPreferredAttributesForVisibleEstimatedItemsDuringUpdate;
-(void)_invalidateLayoutUsingContext:(id)arg1 ;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(id)_decorationViewForLayoutAttributes:(id)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(void)_prepareToAnimateFromCollectionViewItems:(id)arg1 atContentOffset:(CGPoint)arg2 toItems:(id)arg3 atContentOffset:(CGPoint)arg4 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_finalizeCollectionViewItemAnimations;
-(void)finalizeAnimatedBoundsChange;
-(/*^block*/id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3 ;
-(void)_prepareForTransitionToLayout:(id)arg1 ;
-(void)_prepareForTransitionFromLayout:(id)arg1 ;
-(CGPoint)transitionContentOffsetForProposedContentOffset:(CGPoint)arg1 keyItemIndexPath:(id)arg2 ;
-(BOOL)_supportsAdvancedTransitionAnimations;
-(void)_finalizeLayoutTransition;
-(void)_didFinishLayoutTransitionAnimations:(BOOL)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(CGPoint)_contentOffsetForScrollingToSection:(long long)arg1 ;
-(UIEdgeInsets)_focusFastScrollingIndexBarInsets;
-(CGPoint)updatesContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)_reorderingTargetItemIndexPathForPosition:(CGPoint)arg1 withPreviousIndexPath:(id)arg2 ;
-(id)_invalidationContextForReorderingTargetPosition:(CGPoint)arg1 targetIndexPaths:(id)arg2 withPreviousPosition:(CGPoint)arg3 previousIndexPaths:(id)arg4 ;
-(id)_invalidationContextForEndingReorderingItemToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 reorderingCancelled:(BOOL)arg3 ;
-(long long)developmentLayoutDirection;
-(BOOL)_wantsRightToLeftHorizontalMirroringIfNeeded;
-(void)_setFrame:(CGRect)arg1 ;
-(void)_setSublayoutType:(long long)arg1 ;
-(void)_setCompositionLayout:(id)arg1 ;
-(void)_setSections:(id)arg1 ;
-(void)_setLayoutOffset:(CGPoint)arg1 ;
-(void)_setLayoutOffsetEdges:(unsigned long long)arg1 ;
-(void)_setSiblingLayout:(id)arg1 ;
-(void)_setItems:(id)arg1 ;
-(void)_setElementKinds:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromLayout:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toLayout:(id)arg2 ;
-(id)_siblingLayout;
-(BOOL)_isPrepared;
-(CGPoint)_layoutOffset;
-(unsigned long long)_layoutOffsetEdges;
-(id)_layoutAttributesForReorderedItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(id)_compositionLayout;
-(/*^block*/id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 ;
-(void)finalizeLayoutTransition;
-(id)_indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(id)_indexPathsToInsertForSupplementaryViewOfKind:(id)arg1 ;
-(id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1 ;
-(CGPoint)_offsetInTopParentLayout:(id*)arg1 ;
-(id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(CGPoint)arg2 ;
-(id)invalidationContextForEndingInteractiveMovementOfItemsToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 movementCancelled:(BOOL)arg3 ;
-(id)_orthogonalScrollingTrace;
-(id)snapshottedLayoutAttributeForItemAtIndexPath:(id)arg1 ;
-(void)registerNib:(id)arg1 forDecorationViewOfKind:(id)arg2 ;
-(void)_setCollectionViewBoundsSize:(CGSize)arg1 ;
-(void)_setDynamicAnimator:(id)arg1 ;
-(void)_setExternalObjectTable:(id)arg1 forNibLoadingOfDecorationViewOfKind:(id)arg2 ;
-(void)_setPrepared:(BOOL)arg1 ;
-(CGSize)_fallbackItemSize;
-(id)_layoutAttributesForElementsInProjectedRect:(CGRect)arg1 withProjectionVector:(CGVector)arg2 projectionDistance:(double)arg3 ;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(long long)_sublayoutType;
@end

