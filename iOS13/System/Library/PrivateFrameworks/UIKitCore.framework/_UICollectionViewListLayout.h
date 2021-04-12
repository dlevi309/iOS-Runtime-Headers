/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@protocol _UICollectionCompositionalLayoutSolverResolveResult, UITableConstants;
@class _UICollectionViewListLayoutVisualProvider, NSSet, UIColor, _UICollectionViewListSnapshotter, _UICollectionViewListSeparatorDiff, _UICollectionCompositionalLayoutSolverUpdate, _UIUpdateVisibleCellsContext, UIVisualEffect, _UICollectionCompositionalLayoutSolver, NSMutableDictionary, NSArray;

@interface _UICollectionViewListLayout : UICollectionViewLayout {

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
	_UIUpdateVisibleCellsContext* _updateVisibleCellsContext;
	BOOL _shouldDrawAdditionalSeparators;
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

@property (getter=_constants,nonatomic,retain) id<UITableConstants> constants;                                                                                   //@synthesize constants=_constants - In the implementation block
@property (setter=_setSolver:,getter=_solver,nonatomic,retain) _UICollectionCompositionalLayoutSolver * solver;                                                  //@synthesize solver=_solver - In the implementation block
@property (getter=_layoutSections,nonatomic,readonly) NSMutableDictionary * layoutSections;                                                                      //@synthesize layoutSections=_layoutSections - In the implementation block
@property (getter=_delegateActual,nonatomic,readonly) id<_UICollectionViewDelegateListLayout> delegateActual; 
@property (getter=_delegateProxy,nonatomic,readonly) id<_UICollectionViewDelegateListLayout> delegateProxy; 
@property (getter=_dataSourceActual,nonatomic,readonly) id<UICollectionViewDataSource> dataSourceActual; 
@property (getter=_dataSourceProxy,nonatomic,readonly) id<UICollectionViewDataSource> dataSourceProxy; 
@property (getter=_insetTopAndBottomSeparator,nonatomic,readonly) BOOL insetTopAndBottomSeparator;                                                               //@synthesize insetTopAndBottomSeparator=_insetTopAndBottomSeparator - In the implementation block
@property (setter=_setFloatingElementKinds:,getter=_floatingElementKinds,nonatomic,retain) NSArray * floatingElementKinds; 
@property (assign,setter=_setShouldDrawAdditionalSeparators:,getter=_shouldDrawAdditionalSeparators,nonatomic) BOOL shouldDrawAdditionalSeparators;              //@synthesize shouldDrawAdditionalSeparators=_shouldDrawAdditionalSeparators - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorInset;                                                                                                        //@synthesize separatorInset=_separatorInset - In the implementation block
@property (assign,nonatomic) double rowHeight;                                                                                                                   //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double sectionHeaderHeight;                                                                                                         //@synthesize sectionHeaderHeight=_sectionHeaderHeight - In the implementation block
@property (assign,nonatomic) double sectionFooterHeight;                                                                                                         //@synthesize sectionFooterHeight=_sectionFooterHeight - In the implementation block
@property (assign,nonatomic) double globalHeaderHeight;                                                                                                          //@synthesize globalHeaderHeight=_globalHeaderHeight - In the implementation block
@property (assign,nonatomic) double globalFooterHeight;                                                                                                          //@synthesize globalFooterHeight=_globalFooterHeight - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                                                                                                           //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor; 
@property (nonatomic,retain) UIVisualEffect * separatorEffect;                                                                                                   //@synthesize separatorEffect=_separatorEffect - In the implementation block
@property (nonatomic,readonly) long long appearanceStyle;                                                                                                        //@synthesize appearanceStyle=_appearanceStyle - In the implementation block
@property (assign,nonatomic) BOOL cellLayoutMarginsFollowReadableWidth;                                                                                          //@synthesize cellLayoutMarginsFollowReadableWidth=_cellLayoutMarginsFollowReadableWidth - In the implementation block
@property (assign,nonatomic) BOOL insetsContentViewsToSafeArea;                                                                                                  //@synthesize insetsContentViewsToSafeArea=_insetsContentViewsToSafeArea - In the implementation block
@property (assign,nonatomic) BOOL separatorInsetIsRelativeToCellEdges;                                                                                           //@synthesize separatorInsetIsRelativeToCellEdges=_separatorInsetIsRelativeToCellEdges - In the implementation block
@property (assign,nonatomic) double estimatedRowHeight;                                                                                                          //@synthesize estimatedRowHeight=_estimatedRowHeight - In the implementation block
@property (assign,nonatomic) double estimatedSectionHeaderHeight;                                                                                                //@synthesize estimatedSectionHeaderHeight=_estimatedSectionHeaderHeight - In the implementation block
@property (assign,nonatomic) double estimatedSectionFooterHeight;                                                                                                //@synthesize estimatedSectionFooterHeight=_estimatedSectionFooterHeight - In the implementation block
@property (assign,nonatomic) double estimatedGlobalHeaderHeight;                                                                                                 //@synthesize estimatedGlobalHeaderHeight=_estimatedGlobalHeaderHeight - In the implementation block
@property (assign,nonatomic) double estimatedGlobalFooterHeight;                                                                                                 //@synthesize estimatedGlobalFooterHeight=_estimatedGlobalFooterHeight - In the implementation block
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(id)init;
-(void)dealloc;
-(id)_layoutSections;
-(id)_scrollView;
-(BOOL)isEditing;
-(UIColor *)separatorColor;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(BOOL)_shouldInvalidateLayoutForBoundsSizeChange:(CGRect)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)_updatePinnedSectionSupplementaryItemsForCurrentVisibleBounds;
-(void)finalizeCollectionViewUpdates;
-(id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1 ;
-(id)indexPathsToInsertForDecorationViewOfKind:(id)arg1 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(BOOL)_estimatesSizes;
-(id)_invalidationContextForUpdatedLayoutMargins:(UIEdgeInsets)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)_dataSourceProxy;
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
-(void)_traitCollectionDidChangeFromPreviousCollection:(id)arg1 newTraitCollection:(id)arg2 ;
-(id)_solver;
-(id)_globalSupplementaryItems;
-(void)_updateConstants;
-(id)_constants;
-(void)_constantsDidChange;
-(long long)_tableStyle;
-(BOOL)_sectionContentInsetFollowsLayoutMargins;
-(id)_accessoryBaseColor;
-(id)_multiselectCheckmarkColor;
-(BOOL)canBeEdited;
-(void)setEditing:(BOOL)arg1 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(UIVisualEffect *)separatorEffect;
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(long long)appearanceStyle;
-(id)initWithAppearanceStyle:(long long)arg1 ;
-(BOOL)_separatorInsetIsRelativeToCellEdges;
-(long long)separatorStyle;
-(void)setSeparatorStyle:(long long)arg1 ;
-(UIEdgeInsets)separatorInset;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(BOOL)separatorInsetIsRelativeToCellEdges;
-(void)setSeparatorInsetIsRelativeToCellEdges:(BOOL)arg1 ;
-(BOOL)insetsContentViewsToSafeArea;
-(void)setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(BOOL)allowsMultipleSelection;
-(BOOL)allowsMultipleSelectionDuringEditing;
-(BOOL)_shouldDrawThickSeparators;
-(long long)_numberOfSections;
-(double)rowHeight;
-(double)sectionHeaderHeight;
-(double)sectionFooterHeight;
-(double)estimatedRowHeight;
-(double)estimatedSectionHeaderHeight;
-(double)estimatedSectionFooterHeight;
-(BOOL)cellLayoutMarginsFollowReadableWidth;
-(long long)_numberOfRowsInSection:(long long)arg1 ;
-(void)_setFloatingElementKinds:(id)arg1 ;
-(void)_darkenedColorsChanged:(id)arg1 ;
-(void)_setCollectionView:(id)arg1 ;
-(id)_floatingElementKinds;
-(id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(CGPoint)arg2 previousIndexPaths:(id)arg3 previousPosition:(CGPoint)arg4 ;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(BOOL)_shouldApplyReadableWidthInsets;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)_delegateActual;
-(id)_delegateProxy;
-(id)_dataSourceActual;
-(CGPoint)_contentOffsetFromProposedContentOffset:(CGPoint)arg1 forScrollingToItemAtIndexPath:(id)arg2 atScrollPosition:(unsigned long long)arg3 ;
-(UIEdgeInsets)_preferredLayoutMargins;
-(void)setRowHeight:(double)arg1 ;
-(void)setSectionHeaderHeight:(double)arg1 ;
-(void)setSectionFooterHeight:(double)arg1 ;
-(void)setEstimatedRowHeight:(double)arg1 ;
-(void)setEstimatedSectionHeaderHeight:(double)arg1 ;
-(void)setEstimatedSectionFooterHeight:(double)arg1 ;
-(void)setConstants:(id<UITableConstants>)arg1 ;
-(void)setCellLayoutMarginsFollowReadableWidth:(BOOL)arg1 ;
-(double)_separatorHeight;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)_prepareSnapshot;
-(void)_prepareSolver;
-(void)_configureDefaultGradientMask;
-(id)_layoutContainer;
-(id)_layoutSectionAtIndex:(long long)arg1 ;
-(double)_sectionSpacingForAppearanceStyle;
-(UIEdgeInsets)_globalInsetsForAppearanceStyle;
-(id)_sectionConfigurationForSection:(long long)arg1 ;
-(void)_addPinningBehaviorToLayout:(id)arg1 forSection:(long long)arg2 ;
-(id)_preferredLayoutSectionForLayoutSection:(id)arg1 atIndex:(long long)arg2 ;
-(double)_effectiveEstimatedGlobalHeaderHeight;
-(double)_effectiveEstimatedGlobalFooterHeight;
-(void)_updateSolver;
-(void)_enrichCellLayoutAttributes:(id)arg1 ;
-(void)_enrichHeaderFooterLayoutAttributes:(id)arg1 ;
-(void)_separatorColorDidChange;
-(double)_defaultGlobalHeaderHeight;
-(double)_defaultGlobalFooterHeight;
-(id)_actualLayoutSectionAtIndex:(long long)arg1 ;
-(void)setGlobalHeaderHeight:(double)arg1 ;
-(void)setGlobalFooterHeight:(double)arg1 ;
-(BOOL)_shouldDrawAdditionalSeparators;
-(void)_setShouldDrawAdditionalSeparators:(BOOL)arg1 ;
-(double)globalHeaderHeight;
-(double)globalFooterHeight;
-(double)estimatedGlobalHeaderHeight;
-(void)setEstimatedGlobalHeaderHeight:(double)arg1 ;
-(double)estimatedGlobalFooterHeight;
-(void)setEstimatedGlobalFooterHeight:(double)arg1 ;
-(void)_setSolver:(id)arg1 ;
-(BOOL)_insetTopAndBottomSeparator;
@end

