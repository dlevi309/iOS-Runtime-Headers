/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <UIKitCore/_UICollectionViewLayoutInteractionStateModuleHost.h>

@protocol _UICollectionCompositionalLayoutSolverResolveResult, UITableConstants;
@class _UICollectionViewListLayoutVisualProvider, NSSet, UIColor, _UICollectionViewListSnapshotter, _UICollectionViewListSeparatorDiff, _UICollectionCompositionalLayoutSolverUpdate, _UICollectionViewLayoutInteractionStateModule, _UIUpdateVisibleCellsContext, UIVisualEffect, _UICollectionCompositionalLayoutSolver, NSMutableDictionary, NSArray, NSString;

@interface _UICollectionViewListLayout : UICollectionViewLayout <_UICollectionViewLayoutInteractionStateModuleHost> {

	struct {
		unsigned prepareSnapshotNeeded : 1;
		unsigned prepareSolverNeeded : 1;
		unsigned usesCustomSeparatorColor : 1;
		unsigned usesCustomSeparatorStyle : 1;
	}  _tableLayoutFlags;
	_UICollectionViewListLayoutVisualProvider* _visualProvider;
	NSSet* _floatingElementKinds;
	UIColor* _separatorColor;
	UIColor* _darkenedSeparatorColor;
	UIEdgeInsets _sectionContentInset;
	UIEdgeInsets _previousLayoutMargins;
	_UICollectionViewListSnapshotter* _dataSourceSnapshot;
	_UICollectionViewListSnapshotter* _previousDataSourceSnapshot;
	_UICollectionViewListSeparatorDiff* _currentUpdateDiff;
	_UICollectionCompositionalLayoutSolverUpdate* _currentUpdate;
	id<_UICollectionCompositionalLayoutSolverResolveResult> _currentResolveResult;
	_UICollectionViewLayoutInteractionStateModule* _interactionStateModule;
	_UIUpdateVisibleCellsContext* _updateVisibleCellsContext;
	BOOL _cellLayoutMarginsFollowReadableWidth;
	BOOL _insetsContentViewsToSafeArea;
	BOOL _separatorInsetIsRelativeToCellEdges;
	BOOL _insetTopAndBottomSeparator;
	double _rowHeight;
	double _sectionHeaderHeight;
	double _sectionFooterHeight;
	double _estimatedRowHeight;
	double _estimatedSectionHeaderHeight;
	double _estimatedSectionFooterHeight;
	id<UITableConstants> _constants;
	double _globalHeaderHeight;
	double _globalFooterHeight;
	long long _separatorStyle;
	UIVisualEffect* _separatorEffect;
	long long _appearanceStyle;
	double _estimatedGlobalHeaderHeight;
	double _estimatedGlobalFooterHeight;
	_UICollectionCompositionalLayoutSolver* _solver;
	NSMutableDictionary* _layoutSections;
	UIEdgeInsets _separatorInset;

}

@property (getter=_constants,nonatomic,retain) id<UITableConstants> constants;                                                          //@synthesize constants=_constants - In the implementation block
@property (setter=_setSolver:,getter=_solver,nonatomic,retain) _UICollectionCompositionalLayoutSolver * solver;                         //@synthesize solver=_solver - In the implementation block
@property (getter=_layoutSections,nonatomic,readonly) NSMutableDictionary * layoutSections;                                             //@synthesize layoutSections=_layoutSections - In the implementation block
@property (getter=_delegateActual,nonatomic,readonly) id<_UICollectionViewDelegateListLayout> delegateActual; 
@property (getter=_delegateProxy,nonatomic,readonly) id<_UICollectionViewDelegateListLayout> delegateProxy; 
@property (getter=_dataSourceActual,nonatomic,readonly) id<UICollectionViewDataSource> dataSourceActual; 
@property (getter=_dataSourceProxy,nonatomic,readonly) id<UICollectionViewDataSource> dataSourceProxy; 
@property (getter=_insetTopAndBottomSeparator,nonatomic,readonly) BOOL insetTopAndBottomSeparator;                                      //@synthesize insetTopAndBottomSeparator=_insetTopAndBottomSeparator - In the implementation block
@property (setter=_setFloatingElementKinds:,getter=_floatingElementKinds,nonatomic,retain) NSArray * floatingElementKinds; 
@property (assign,nonatomic) UIEdgeInsets separatorInset;                                                                               //@synthesize separatorInset=_separatorInset - In the implementation block
@property (assign,nonatomic) double rowHeight;                                                                                          //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double sectionHeaderHeight;                                                                                //@synthesize sectionHeaderHeight=_sectionHeaderHeight - In the implementation block
@property (assign,nonatomic) double sectionFooterHeight;                                                                                //@synthesize sectionFooterHeight=_sectionFooterHeight - In the implementation block
@property (assign,nonatomic) double globalHeaderHeight;                                                                                 //@synthesize globalHeaderHeight=_globalHeaderHeight - In the implementation block
@property (assign,nonatomic) double globalFooterHeight;                                                                                 //@synthesize globalFooterHeight=_globalFooterHeight - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                                                                                  //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor; 
@property (nonatomic,retain) UIVisualEffect * separatorEffect;                                                                          //@synthesize separatorEffect=_separatorEffect - In the implementation block
@property (nonatomic,readonly) long long appearanceStyle;                                                                               //@synthesize appearanceStyle=_appearanceStyle - In the implementation block
@property (assign,nonatomic) BOOL cellLayoutMarginsFollowReadableWidth;                                                                 //@synthesize cellLayoutMarginsFollowReadableWidth=_cellLayoutMarginsFollowReadableWidth - In the implementation block
@property (assign,nonatomic) BOOL insetsContentViewsToSafeArea;                                                                         //@synthesize insetsContentViewsToSafeArea=_insetsContentViewsToSafeArea - In the implementation block
@property (assign,nonatomic) BOOL separatorInsetIsRelativeToCellEdges;                                                                  //@synthesize separatorInsetIsRelativeToCellEdges=_separatorInsetIsRelativeToCellEdges - In the implementation block
@property (assign,nonatomic) double estimatedRowHeight;                                                                                 //@synthesize estimatedRowHeight=_estimatedRowHeight - In the implementation block
@property (assign,nonatomic) double estimatedSectionHeaderHeight;                                                                       //@synthesize estimatedSectionHeaderHeight=_estimatedSectionHeaderHeight - In the implementation block
@property (assign,nonatomic) double estimatedSectionFooterHeight;                                                                       //@synthesize estimatedSectionFooterHeight=_estimatedSectionFooterHeight - In the implementation block
@property (assign,nonatomic) double estimatedGlobalHeaderHeight;                                                                        //@synthesize estimatedGlobalHeaderHeight=_estimatedGlobalHeaderHeight - In the implementation block
@property (assign,nonatomic) double estimatedGlobalFooterHeight;                                                                        //@synthesize estimatedGlobalFooterHeight=_estimatedGlobalFooterHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layoutAttributesClass;
+(Class)invalidationContextClass;
-(id)_updatePinnedSectionSupplementaryItemsForCurrentVisibleBounds;
-(void)_willPerformUpdateVisibleCellsPass;
-(void)_prepareForCollectionViewUpdates:(id)arg1 withDataSourceTranslator:(id)arg2 ;
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(BOOL)separatorInsetIsRelativeToCellEdges;
-(UIEdgeInsets)separatorInset;
-(BOOL)canBeEdited;
-(UIVisualEffect *)separatorEffect;
-(void)setSeparatorInsetIsRelativeToCellEdges:(BOOL)arg1 ;
-(BOOL)_estimatesSupplementaryItems;
-(BOOL)insetsContentViewsToSafeArea;
-(void)_traitCollectionDidChangeFromPreviousCollection:(id)arg1 newTraitCollection:(id)arg2 ;
-(BOOL)allowsMultipleSelection;
-(id)_interactionStateModule:(id)arg1 layoutSectionForIndex:(long long)arg2 ;
-(BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(BOOL)_shouldInvalidateLayoutForBoundsSizeChange:(CGRect)arg1 ;
-(void)setSectionHeaderHeight:(double)arg1 ;
-(double)estimatedRowHeight;
-(void)_darkenedColorsChanged:(id)arg1 ;
-(double)estimatedSectionHeaderHeight;
-(id)indexPathsToInsertForDecorationViewOfKind:(id)arg1 ;
-(void)_transformCellLayoutAttributes:(id)arg1 ;
-(void)_setCollectionView:(id)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(void)_transformSupplementaryLayoutAttributes:(id)arg1 ;
-(double)_interactionStateModule:(id)arg1 spacingAfterLayoutSection:(long long)arg2 ;
-(id)_solver;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1 ;
-(long long)_numberOfRowsInSection:(long long)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(void)setEstimatedSectionHeaderHeight:(double)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)_invalidationContextForUpdatedLayoutMargins:(UIEdgeInsets)arg1 ;
-(double)sectionHeaderHeight;
-(id)_constants;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(void)setConstants:(id<UITableConstants>)arg1 ;
-(void)setEstimatedRowHeight:(double)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(BOOL)_estimatesSizes;
-(void)setSectionFooterHeight:(double)arg1 ;
-(double)sectionFooterHeight;
-(void)_prepareForPreferredAttributesQueryForView:(id)arg1 withLayoutAttributes:(id)arg2 ;
-(double)estimatedSectionFooterHeight;
-(void)_transformDecorationLayoutAttributes:(id)arg1 ;
-(id)_dataSourceActual;
-(void)setEstimatedSectionFooterHeight:(double)arg1 ;
-(BOOL)_wantsUntrackedAnimationCleanupForAuxillaryItems;
-(UIEdgeInsets)_preferredLayoutMargins;
-(id)_delegateActual;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(long long)separatorStyle;
-(id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(id)_scrollView;
-(BOOL)_separatorInsetIsRelativeToCellEdges;
-(void)_didPerformUpdateVisibleCellsPassWithLayoutOffset:(CGPoint)arg1 ;
-(void)_postProcessPreferredAttributes:(id)arg1 forView:(id)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(long long)_tableStyle;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(double)_separatorHeight;
-(id)init;
-(void)setCellLayoutMarginsFollowReadableWidth:(BOOL)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)setRowHeight:(double)arg1 ;
-(BOOL)_shouldDrawThickSeparators;
-(id)_accessoryBaseColor;
-(id)_preferredLayoutSectionForLayoutSection:(id)arg1 atIndex:(long long)arg2 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(BOOL)isEditing;
-(BOOL)cellLayoutMarginsFollowReadableWidth;
-(id)initWithAppearanceStyle:(long long)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)_delegateProxy;
-(double)rowHeight;
-(CGPoint)_contentOffsetFromProposedContentOffset:(CGPoint)arg1 forScrollingToItemAtIndexPath:(id)arg2 atScrollPosition:(unsigned long long)arg3 ;
-(BOOL)_sectionContentInsetFollowsLayoutMargins;
-(void)_updateConstants;
-(long long)appearanceStyle;
-(BOOL)_shouldApplyReadableWidthInsets;
-(id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(CGPoint)arg2 previousIndexPaths:(id)arg3 previousPosition:(CGPoint)arg4 ;
-(void)_setSolver:(id)arg1 ;
-(id)_floatingElementKinds;
-(void)_constantsDidChange;
-(UIColor *)separatorColor;
-(id)_layoutSections;
-(BOOL)allowsMultipleSelectionDuringEditing;
-(void)setEditing:(BOOL)arg1 ;
-(void)_prepareSolver;
-(void)_updateSolver;
-(void)_prepareSnapshot;
-(void)_setFloatingElementKinds:(id)arg1 ;
-(id)_layoutSectionAtIndex:(long long)arg1 ;
-(double)globalHeaderHeight;
-(long long)_numberOfSections;
-(void)_configureDefaultGradientMask;
-(double)_sectionSpacingForAppearanceStyle;
-(UIEdgeInsets)_globalInsetsForAppearanceStyle;
-(id)_sectionConfigurationForSection:(long long)arg1 ;
-(void)_addPinningBehaviorToLayout:(id)arg1 forSection:(long long)arg2 ;
-(double)_effectiveEstimatedGlobalHeaderHeight;
-(double)_effectiveEstimatedGlobalFooterHeight;
-(void)_enrichCellLayoutAttributes:(id)arg1 ;
-(void)_enrichHeaderFooterLayoutAttributes:(id)arg1 ;
-(void)_separatorColorDidChange;
-(double)globalFooterHeight;
-(double)_defaultGlobalHeaderHeight;
-(id)_globalSupplementaryItems;
-(double)_defaultGlobalFooterHeight;
-(id)_actualLayoutSectionAtIndex:(long long)arg1 ;
-(void)setGlobalHeaderHeight:(double)arg1 ;
-(void)setGlobalFooterHeight:(double)arg1 ;
-(double)estimatedGlobalHeaderHeight;
-(void)setEstimatedGlobalHeaderHeight:(double)arg1 ;
-(double)estimatedGlobalFooterHeight;
-(void)setEstimatedGlobalFooterHeight:(double)arg1 ;
-(BOOL)_insetTopAndBottomSeparator;
-(id)_multiselectCheckmarkColor;
-(id)_layoutContainer;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)dealloc;
-(id)_dataSourceProxy;
@end

