/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <UIKitCore/_UICollectionViewLayoutInteractionStateModuleHost.h>

@protocol _UICollectionCompositionalLayoutSolverResolveResult;
@class UICollectionViewCompositionalLayoutConfiguration, _UICollectionViewLayoutInteractionStateModule, NSCollectionLayoutSection, _UICollectionCompositionalLayoutSolver, _UIDataSourceSnapshotter, _UIUpdateVisibleCellsContext, _UICollectionCompositionalLayoutSolverUpdate, NSString;

@interface UICollectionViewCompositionalLayout : UICollectionViewLayout <_UICollectionViewLayoutInteractionStateModuleHost> {

	UICollectionViewCompositionalLayoutConfiguration* _configuration;
	_UICollectionViewLayoutInteractionStateModule* _interactionStateModule;
	BOOL _defersInitialSolveUntilPrepare;
	BOOL _shouldAdjustContentInsetModeForCollectionViewNeverMode;
	BOOL _isInUpdateVisibleCellsPass;
	BOOL _deferredLastInvalidationNextInvalidationRequiresFullResolve;
	BOOL _layoutRTL;
	BOOL _roundsToScreenScale;
	NSCollectionLayoutSection* _layoutSectionTemplate;
	/*^block*/id _layoutSectionProvider;
	_UICollectionCompositionalLayoutSolver* _solver;
	_UIDataSourceSnapshotter* _dataSourceSnapshotter;
	unsigned long long _edgesForSafeAreaPropagation;
	_UIUpdateVisibleCellsContext* _updateVisibleCellsContext;
	_UICollectionCompositionalLayoutSolverUpdate* _currentUpdate;
	id<_UICollectionCompositionalLayoutSolverResolveResult> _currentResolveResult;
	/*^block*/id _dynamicsConfigurationHandler;
	CGSize _memoizedPreviousSolvedViewBoundsSize;
	UIEdgeInsets _memoizedDynamicAnimatorWorldAdjustingInsets;
	UIEdgeInsets _memoizedPreviousLayoutMargins;
	CGRect _contentFrame;

}

@property (nonatomic,retain) NSCollectionLayoutSection * layoutSectionTemplate;                                         //@synthesize layoutSectionTemplate=_layoutSectionTemplate - In the implementation block
@property (nonatomic,copy) id layoutSectionProvider;                                                                    //@synthesize layoutSectionProvider=_layoutSectionProvider - In the implementation block
@property (nonatomic,retain) _UICollectionCompositionalLayoutSolver * solver;                                           //@synthesize solver=_solver - In the implementation block
@property (assign,nonatomic) BOOL defersInitialSolveUntilPrepare;                                                       //@synthesize defersInitialSolveUntilPrepare=_defersInitialSolveUntilPrepare - In the implementation block
@property (assign,nonatomic) UIEdgeInsets memoizedDynamicAnimatorWorldAdjustingInsets;                                  //@synthesize memoizedDynamicAnimatorWorldAdjustingInsets=_memoizedDynamicAnimatorWorldAdjustingInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets memoizedPreviousLayoutMargins;                                                //@synthesize memoizedPreviousLayoutMargins=_memoizedPreviousLayoutMargins - In the implementation block
@property (assign,nonatomic) CGSize memoizedPreviousSolvedViewBoundsSize;                                               //@synthesize memoizedPreviousSolvedViewBoundsSize=_memoizedPreviousSolvedViewBoundsSize - In the implementation block
@property (nonatomic,retain) _UIDataSourceSnapshotter * dataSourceSnapshotter;                                          //@synthesize dataSourceSnapshotter=_dataSourceSnapshotter - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                                                                       //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) BOOL shouldAdjustContentInsetModeForCollectionViewNeverMode;                               //@synthesize shouldAdjustContentInsetModeForCollectionViewNeverMode=_shouldAdjustContentInsetModeForCollectionViewNeverMode - In the implementation block
@property (assign,nonatomic) unsigned long long edgesForSafeAreaPropagation;                                            //@synthesize edgesForSafeAreaPropagation=_edgesForSafeAreaPropagation - In the implementation block
@property (assign,nonatomic) BOOL isInUpdateVisibleCellsPass;                                                           //@synthesize isInUpdateVisibleCellsPass=_isInUpdateVisibleCellsPass - In the implementation block
@property (assign,nonatomic) BOOL deferredLastInvalidationNextInvalidationRequiresFullResolve;                          //@synthesize deferredLastInvalidationNextInvalidationRequiresFullResolve=_deferredLastInvalidationNextInvalidationRequiresFullResolve - In the implementation block
@property (nonatomic,retain) _UIUpdateVisibleCellsContext * updateVisibleCellsContext;                                  //@synthesize updateVisibleCellsContext=_updateVisibleCellsContext - In the implementation block
@property (nonatomic,retain) _UICollectionCompositionalLayoutSolverUpdate * currentUpdate;                              //@synthesize currentUpdate=_currentUpdate - In the implementation block
@property (nonatomic,retain) id<_UICollectionCompositionalLayoutSolverResolveResult> currentResolveResult;              //@synthesize currentResolveResult=_currentResolveResult - In the implementation block
@property (assign,nonatomic) BOOL layoutRTL;                                                                            //@synthesize layoutRTL=_layoutRTL - In the implementation block
@property (assign,nonatomic) BOOL roundsToScreenScale;                                                                  //@synthesize roundsToScreenScale=_roundsToScreenScale - In the implementation block
@property (nonatomic,copy) id dynamicsConfigurationHandler;                                                             //@synthesize dynamicsConfigurationHandler=_dynamicsConfigurationHandler - In the implementation block
@property (nonatomic,copy) UICollectionViewCompositionalLayoutConfiguration * configuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layoutWithListConfiguration:(id)arg1 ;
-(id)initWithSection:(id)arg1 sectionProvider:(/*^block*/id)arg2 configuration:(id)arg3 ;
-(id)_updatePinnedSectionSupplementaryItemsForCurrentVisibleBounds;
-(id)initWithLayoutSection:(id)arg1 scrollDirection:(long long)arg2 ;
-(BOOL)_invokeVisibleBoundsUpdateForDynamicAnimatorForNewVisibleBounds:(CGRect)arg1 preparingLayout:(BOOL)arg2 ;
-(void)_willPerformUpdateVisibleCellsPass;
-(void)_createSwipeActionsModuleIfNeeded;
-(void)_prepareForCollectionViewUpdates:(id)arg1 withDataSourceTranslator:(id)arg2 ;
-(CGPoint)_offsetForOrthogonalScrollingSection:(long long)arg1 ;
-(BOOL)_shouldConfigureForPagingForOrthogonalScrollingSection:(long long)arg1 ;
-(void)setDataSourceSnapshotter:(_UIDataSourceSnapshotter *)arg1 ;
-(double)_orthogonalScrollingDecelerationRateForSection:(long long)arg1 ;
-(CGRect)_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg1 frame:(CGRect)arg2 ;
-(id)dynamicsConfigurationHandler;
-(double)_orthogonalScrollingPagingDimensionForSection:(long long)arg1 ;
-(id)_propertyAnimatorForCollectionViewUpdates:(id)arg1 withCustomAnimator:(id)arg2 ;
-(id)_containerFromCollectionView;
-(void)setUpdateVisibleCellsContext:(_UIUpdateVisibleCellsContext *)arg1 ;
-(id)_boundsChangeResolve;
-(void)setLayoutSectionProvider:(id)arg1 ;
-(BOOL)canBeEdited;
-(CGRect)contentFrame;
-(id)_orthogonalScrollingSections;
-(CGVector)_scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1 ;
-(BOOL)_orthogonalScrollingElementShouldAppearAboveForAttributes:(id)arg1 ;
-(BOOL)_estimatesSupplementaryItems;
-(void)_traitCollectionDidChangeFromPreviousCollection:(id)arg1 newTraitCollection:(id)arg2 ;
-(void)_computeAndUpdateAdjustedContentFrame;
-(id)_interactionStateModule:(id)arg1 layoutSectionForIndex:(long long)arg2 ;
-(id<_UICollectionCompositionalLayoutSolverResolveResult>)currentResolveResult;
-(void)setCurrentResolveResult:(id<_UICollectionCompositionalLayoutSolverResolveResult>)arg1 ;
-(id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg1 ;
-(void)setSolver:(_UICollectionCompositionalLayoutSolver *)arg1 ;
-(NSCollectionLayoutSection *)layoutSectionTemplate;
-(BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
-(CGRect)_orthogonalScrollingContentRectForSection:(long long)arg1 ;
-(id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg1 ;
-(void)setDefersInitialSolveUntilPrepare:(BOOL)arg1 ;
-(BOOL)_shouldInvalidateLayoutForBoundsSizeChange:(CGRect)arg1 ;
-(BOOL)_shouldAdjustTargetContentOffsetToValidateContentExtents;
-(id)initWithSection:(id)arg1 configuration:(id)arg2 ;
-(void)_fullResolve;
-(CGSize)memoizedPreviousSolvedViewBoundsSize;
-(void)setMemoizedPreviousLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)_didEndSwiping;
-(void)setIsInUpdateVisibleCellsPass:(BOOL)arg1 ;
-(BOOL)_wantsAnimationsForOffscreenAuxillaries;
-(BOOL)_allowsItemInteractionsToBegin;
-(id)indexPathsToInsertForDecorationViewOfKind:(id)arg1 ;
-(void)setLayoutSectionTemplate:(NSCollectionLayoutSection *)arg1 ;
-(BOOL)_overridesSafeAreaPropagationToDescendants;
-(BOOL)_orthogonalScrollingUsesTargetContentOffsetForSection:(long long)arg1 ;
-(void)_transformCellLayoutAttributes:(id)arg1 ;
-(void)_setCollectionView:(id)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(void)setContentFrame:(CGRect)arg1 ;
-(void)_transformSupplementaryLayoutAttributes:(id)arg1 ;
-(void)setMemoizedDynamicAnimatorWorldAdjustingInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)memoizedDynamicAnimatorWorldAdjustingInsets;
-(BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2 ;
-(void)_prepareForTransitionToLayout:(id)arg1 ;
-(double)_interactionStateModule:(id)arg1 spacingAfterLayoutSection:(long long)arg2 ;
-(void)_willBeginSwiping;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)setCurrentUpdate:(_UICollectionCompositionalLayoutSolverUpdate *)arg1 ;
-(void)setMemoizedPreviousSolvedViewBoundsSize:(CGSize)arg1 ;
-(BOOL)isInUpdateVisibleCellsPass;
-(void)setRoundsToScreenScale:(BOOL)arg1 ;
-(id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1 ;
-(void)_handlePreferredSizingCustomizationsInvalidation:(id)arg1 ;
-(unsigned long long)_layoutAxis;
-(id)_invokeVisibleItemsInvalidationHandlerIfNeededForVisibleBounds:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_setOffset:(CGPoint)arg1 forOrthogonalScrollingSection:(long long)arg2 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(void)setShouldAdjustContentInsetModeForCollectionViewNeverMode:(BOOL)arg1 ;
-(id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(CGRect)arg1 ;
-(CGRect)_orthogonalScrollingLayoutRectForSection:(long long)arg1 ;
-(CGSize)collectionViewContentSize;
-(_UIDataSourceSnapshotter *)dataSourceSnapshotter;
-(BOOL)layoutRTL;
-(id)_invalidationContextForUpdatedLayoutMargins:(UIEdgeInsets)arg1 ;
-(id)_dataSourceSnapshotter;
-(BOOL)shouldAdjustContentInsetModeForCollectionViewNeverMode;
-(BOOL)_adjustCollectionViewContentInsetBehaviorForLayoutAxisIfNeeded:(unsigned long long)arg1 container:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(id)initWithSectionProvider:(/*^block*/id)arg1 ;
-(id)_marginsChangeResolve;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)_solveForPinnedSupplementaryItemsIfNeededWithContext:(id)arg1 ;
-(void)setEdgesForSafeAreaPropagation:(unsigned long long)arg1 ;
-(BOOL)_hasOrthogonalScrollingSections;
-(BOOL)_estimatesSizes;
-(BOOL)_disallowsFadeCellsForBoundsChange;
-(CGPoint)_orthogonalScrollingTargetContentOffsetForOffset:(CGPoint)arg1 section:(long long)arg2 ;
-(void)_prepareForPreferredAttributesQueryForView:(id)arg1 withLayoutAttributes:(id)arg2 ;
-(void)_transformDecorationLayoutAttributes:(id)arg1 ;
-(unsigned long long)edgesForSafeAreaPropagation;
-(BOOL)roundsToScreenScale;
-(unsigned long long)_orthogonalScrollingAxis;
-(BOOL)_wantsUntrackedAnimationCleanupForAuxillaryItems;
-(BOOL)_preparedForBoundsChanges;
-(void)setDynamicsConfigurationHandler:(id)arg1 ;
-(BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2 ;
-(UIEdgeInsets)memoizedPreviousLayoutMargins;
-(_UICollectionCompositionalLayoutSolverUpdate *)currentUpdate;
-(NSDirectionalEdgeInsets)_orthogonalScrollingContentInsetsForSection:(long long)arg1 ;
-(id)_endInteractiveReorderingResolveWithContext:(id)arg1 ;
-(id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(double)_alignedContentMarginGivenMargin:(double)arg1 ;
-(_UIUpdateVisibleCellsContext *)updateVisibleCellsContext;
-(BOOL)defersInitialSolveUntilPrepare;
-(void)_handleSwipeActionsInvalidationWithContext:(id)arg1 ;
-(id)_updateResolve;
-(id)_contentInsetsEnvironmentFromCollectionViewForInsetsReference:(long long)arg1 ;
-(id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithLayoutSection:(id)arg1 ;
-(void)_didPerformUpdateVisibleCellsPassWithLayoutOffset:(CGPoint)arg1 ;
-(void)_backgroundChangedForInteractionAtIndexPath:(id)arg1 ;
-(CGPoint)_targetPositionForInteractiveMovementOfItemAtIndexPath:(id)arg1 withProposedTargetPosition:(CGPoint)arg2 ;
-(unsigned long long)_edgesForSafeAreaPropagationToDescendants;
-(id)_layoutSectionForSectionIndex:(unsigned long long)arg1 ;
-(void)setDeferredLastInvalidationNextInvalidationRequiresFullResolve:(BOOL)arg1 ;
-(void)_postProcessPreferredAttributes:(id)arg1 forView:(id)arg2 ;
-(id)initWithSectionProvider:(/*^block*/id)arg1 configuration:(id)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(_UICollectionCompositionalLayoutSolver *)solver;
-(BOOL)_orthogonalScrollingShouldCenterCustomPagingSizeForSection:(long long)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutSectionProvider;
-(void)prepareLayout;
-(BOOL)_viewBoundsPermitsLayout:(CGRect)arg1 ;
-(BOOL)_supportsSwipeActionsForIndexPath:(id)arg1 ;
-(id)initWithSection:(id)arg1 ;
-(BOOL)deferredLastInvalidationNextInvalidationRequiresFullResolve;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)boundarySupplementaryItems;
-(void)setLayoutRTL:(BOOL)arg1 ;
-(long long)scrollDirection;
-(void)setBoundarySupplementaryItems:(id)arg1 ;
-(BOOL)isEditing;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(UICollectionViewCompositionalLayoutConfiguration *)configuration;
-(void)setEditing:(BOOL)arg1 ;
-(void)setConfiguration:(UICollectionViewCompositionalLayoutConfiguration *)arg1 ;
@end

