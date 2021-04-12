/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UICollectionViewTableAttributes.h>
#import <UIKit/UITable_Internal.h>
#import <UIKit/UISwipeActionHost.h>

@protocol UITableConstants;
@class UIColor, NSSet, NSMutableArray, NSMutableSet, UIVisualEffect, UITableViewRowData, UISwipeActionController, NSIndexPath, NSString, UIView, UIScrollView;

@interface UICollectionViewTableLayout : UICollectionViewLayout <UIGestureRecognizerDelegate, UICollectionViewTableAttributes, UITable_Internal, UISwipeActionHost> {

	NSSet* _floatingElementKinds;
	UIColor* _separatorColor;
	UIColor* _darkenedSeparatorColor;
	UIEdgeInsets _sectionContentInset;
	UIEdgeInsets _previousLayoutMargins;
	NSMutableArray* _indexPathCache;
	NSMutableSet* _preferredAttributesCache;
	NSMutableSet* _headerPreferredAttributesCache;
	NSMutableSet* _footerPreferredAttributesCache;
	double _memoizedScale;
	BOOL _usesVariableMargins;
	BOOL _overlapsSectionHeaderViews;
	BOOL _showingIndex;
	BOOL _cellLayoutMarginsFollowReadableWidth;
	BOOL _insetsContentViewsToSafeArea;
	BOOL _separatorInsetIsRelativeToCellEdges;
	BOOL _showsAdditionalSeparators;
	double _rowHeight;
	double _sectionHeaderHeight;
	double _sectionFooterHeight;
	double _estimatedRowHeight;
	double _estimatedSectionHeaderHeight;
	double _estimatedSectionFooterHeight;
	double _backgroundInset;
	double _topPadding;
	double _bottomPadding;
	UIColor* _accessoryBaseColor;
	UIColor* _multiselectCheckmarkColor;
	id<UITableConstants> _constants;
	double _rowSpacing;
	long long _separatorStyle;
	UIVisualEffect* _separatorEffect;
	UITableViewRowData* _rowData;
	NSMutableArray* _deleteIndexPaths;
	NSMutableArray* _insertIndexPaths;
	UISwipeActionController* _swipeActionController;
	NSIndexPath* _deletedIndexPath;
	CGRect _indexFrame;
	UIEdgeInsets _separatorInset;

}

@property (getter=_constants,nonatomic,retain) id<UITableConstants> constants;                                                                             //@synthesize constants=_constants - In the implementation block
@property (nonatomic,retain) UITableViewRowData * rowData;                                                                                                 //@synthesize rowData=_rowData - In the implementation block
@property (nonatomic,retain) NSMutableArray * deleteIndexPaths;                                                                                            //@synthesize deleteIndexPaths=_deleteIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * insertIndexPaths;                                                                                            //@synthesize insertIndexPaths=_insertIndexPaths - In the implementation block
@property (getter=_delegateActual,nonatomic,readonly) id<UICollectionViewDelegateTableLayout> delegateActual; 
@property (getter=_delegateProxy,nonatomic,readonly) id<UICollectionViewDelegateTableLayout> delegateProxy; 
@property (getter=_dataSourceActual,nonatomic,readonly) id<UICollectionViewDataSourceTableLayout> dataSourceActual; 
@property (setter=_setSwipeActionController:,getter=_swipeActionController,nonatomic,retain) UISwipeActionController * swipeActionController;              //@synthesize swipeActionController=_swipeActionController - In the implementation block
@property (nonatomic,retain) NSIndexPath * deletedIndexPath;                                                                                               //@synthesize deletedIndexPath=_deletedIndexPath - In the implementation block
@property (assign,setter=_setShowsAdditionalSeparators:,getter=_showsAdditionalSeparators,nonatomic) BOOL showsAdditionalSeparators;                       //@synthesize showsAdditionalSeparators=_showsAdditionalSeparators - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorInset;                                                                                                  //@synthesize separatorInset=_separatorInset - In the implementation block
@property (assign,nonatomic) double rowHeight;                                                                                                             //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double sectionHeaderHeight;                                                                                                   //@synthesize sectionHeaderHeight=_sectionHeaderHeight - In the implementation block
@property (assign,nonatomic) double sectionFooterHeight;                                                                                                   //@synthesize sectionFooterHeight=_sectionFooterHeight - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                                                                                                     //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,copy) UIColor * separatorColor; 
@property (nonatomic,retain) UIVisualEffect * separatorEffect;                                                                                             //@synthesize separatorEffect=_separatorEffect - In the implementation block
@property (assign,nonatomic) BOOL cellLayoutMarginsFollowReadableWidth;                                                                                    //@synthesize cellLayoutMarginsFollowReadableWidth=_cellLayoutMarginsFollowReadableWidth - In the implementation block
@property (assign,nonatomic) BOOL insetsContentViewsToSafeArea;                                                                                            //@synthesize insetsContentViewsToSafeArea=_insetsContentViewsToSafeArea - In the implementation block
@property (assign,nonatomic) BOOL separatorInsetIsRelativeToCellEdges;                                                                                     //@synthesize separatorInsetIsRelativeToCellEdges=_separatorInsetIsRelativeToCellEdges - In the implementation block
@property (assign,nonatomic) double estimatedRowHeight;                                                                                                    //@synthesize estimatedRowHeight=_estimatedRowHeight - In the implementation block
@property (assign,nonatomic) double estimatedSectionHeaderHeight;                                                                                          //@synthesize estimatedSectionHeaderHeight=_estimatedSectionHeaderHeight - In the implementation block
@property (assign,nonatomic) double estimatedSectionFooterHeight;                                                                                          //@synthesize estimatedSectionFooterHeight=_estimatedSectionFooterHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (getter=_headerFooterLeadingMarginWidth,nonatomic,readonly) double headerFooterLeadingMarginWidth; 
@property (getter=_headerFooterTrailingMarginWidth,nonatomic,readonly) double headerFooterTrailingMarginWidth; 
@property (getter=_defaultSectionHeaderHeight,nonatomic,readonly) double defaultSectionHeaderHeight; 
@property (getter=_defaultSectionFooterHeight,nonatomic,readonly) double defaultSectionFooterHeight; 
@property (getter=_sidePadding,nonatomic,readonly) double sidePadding; 
@property (getter=_contentInset,nonatomic,readonly) UIEdgeInsets _contentInset; 
@property (getter=_tableContentInset,nonatomic,readonly) UIEdgeInsets tableContentInset; 
@property (getter=_sectionHeaderPadding,nonatomic,readonly) double sectionHeaderPadding; 
@property (getter=_sectionFooterPadding,nonatomic,readonly) double sectionFooterPadding; 
@property (getter=_rowSpacing,nonatomic,readonly) double rowSpacing;                                                                                       //@synthesize rowSpacing=_rowSpacing - In the implementation block
@property (getter=_isTableHeaderAutohiding,nonatomic,readonly) BOOL isTableHeaderAutohiding; 
@property (getter=_heightForTableHeader,nonatomic,readonly) double heightForTableHeader; 
@property (getter=_heightForTableFooter,nonatomic,readonly) double heightForTableFooter; 
@property (getter=_providesRowHeights,nonatomic,readonly) BOOL providesRowHeights; 
@property (getter=_estimatesHeights,nonatomic,readonly) BOOL estimatesHeights; 
@property (getter=_estimatesRowHeights,nonatomic,readonly) BOOL estimatesRowHeights; 
@property (getter=_estimatesSectionHeaderHeights,nonatomic,readonly) BOOL estimatesSectionHeaderHeights; 
@property (getter=_estimatesSectionFooterHeights,nonatomic,readonly) BOOL estimatesSectionFooterHeights; 
@property (getter=_tableHeaderView,nonatomic,readonly) UIView * tableHeaderView; 
@property (getter=_tableFooterView,nonatomic,readonly) UIView * tableFooterView; 
@property (getter=_shouldUseSearchBarHeaderBehavior,nonatomic,readonly) BOOL shouldUseSearchBarHeaderBehavior; 
@property (getter=_shouldUseNewHeaderFooterBehavior,nonatomic,readonly) BOOL shouldUseNewHeaderFooterBehavior; 
@property (getter=_scrollView,nonatomic,readonly) UIScrollView * scrollView; 
@property (getter=_numberOfSections,nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) BOOL allowsMultipleSelection; 
@property (nonatomic,readonly) BOOL allowsMultipleSelectionDuringEditing; 
@property (nonatomic,readonly) BOOL usesVariableMargins;                                                                                                   //@synthesize usesVariableMargins=_usesVariableMargins - In the implementation block
@property (nonatomic,readonly) BOOL overlapsSectionHeaderViews;                                                                                            //@synthesize overlapsSectionHeaderViews=_overlapsSectionHeaderViews - In the implementation block
@property (getter=_backgroundInset,nonatomic,readonly) double backgroundInset;                                                                             //@synthesize backgroundInset=_backgroundInset - In the implementation block
@property (getter=_cellSafeAreaInsets,nonatomic,readonly) UIEdgeInsets cellSafeAreaInsets; 
@property (getter=_topPadding,nonatomic,readonly) double topPadding;                                                                                       //@synthesize topPadding=_topPadding - In the implementation block
@property (getter=_bottomPadding,nonatomic,readonly) double bottomPadding;                                                                                 //@synthesize bottomPadding=_bottomPadding - In the implementation block
@property (getter=_isShowingIndex,nonatomic,readonly) BOOL showingIndex;                                                                                   //@synthesize showingIndex=_showingIndex - In the implementation block
@property (getter=_indexFrame,nonatomic,readonly) CGRect indexFrame;                                                                                       //@synthesize indexFrame=_indexFrame - In the implementation block
@property (getter=_indexBarExtentFromEdge,nonatomic,readonly) double indexBarExtentFromEdge; 
@property (getter=_sectionContentInset,nonatomic,readonly) UIEdgeInsets sectionContentInset; 
@property (getter=_rawSectionContentInset,nonatomic,readonly) UIEdgeInsets rawSectionContentInset; 
@property (getter=_sectionCornerRadius,nonatomic,readonly) double sectionCornerRadius; 
@property (getter=_sectionContentInsetFollowsLayoutMargins,nonatomic,readonly) BOOL sectionContentInsetFollowsLayoutMargins; 
@property (getter=_accessoryBaseColor,nonatomic,readonly) UIColor * accessoryBaseColor;                                                                    //@synthesize accessoryBaseColor=_accessoryBaseColor - In the implementation block
@property (getter=_multiselectCheckmarkColor,nonatomic,readonly) UIColor * multiselectCheckmarkColor;                                                      //@synthesize multiselectCheckmarkColor=_multiselectCheckmarkColor - In the implementation block
@property (nonatomic,readonly) BOOL canBeEdited; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (getter=_tableStyle,nonatomic,readonly) long long tableStyle; 
@property (getter=_rawSeparatorInset,nonatomic,readonly) UIEdgeInsets rawSeparatorInset; 
+(Class)layoutAttributesClass;
+(Class)invalidationContextClass;
-(CGRect)_visibleRect;
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(id)_tableHeaderView;
-(BOOL)separatorInsetIsRelativeToCellEdges;
-(UIEdgeInsets)separatorInset;
-(BOOL)canBeEdited;
-(UIVisualEffect *)separatorEffect;
-(void)setSeparatorInsetIsRelativeToCellEdges:(BOOL)arg1 ;
-(BOOL)insetsContentViewsToSafeArea;
-(BOOL)allowsMultipleSelection;
-(double)_sectionCornerRadius;
-(BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(void)setSectionHeaderHeight:(double)arg1 ;
-(UIEdgeInsets)_tableContentInset;
-(double)estimatedRowHeight;
-(id)_tableFooterView;
-(BOOL)_shouldDisplayExtraSeparatorsAtOffset:(double*)arg1 ;
-(void)_darkenedColorsChanged:(id)arg1 ;
-(id)_layoutAttributesForCellWithIndexPath:(id)arg1 ;
-(double)estimatedSectionHeaderHeight;
-(void)resetSwipedRowWithCompletion:(/*^block*/id)arg1 ;
-(id)_indexPathsBelowIndexPath:(id)arg1 ;
-(void)_setCollectionView:(id)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(long long)_titleAlignmentForHeaderInSection:(long long)arg1 ;
-(BOOL)_shouldUseSearchBarHeaderBehavior;
-(double)_headerFooterLeadingMarginWidth;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(double)_defaultSectionFooterHeight;
-(void)_setSwipeActionController:(id)arg1 ;
-(long long)_numberOfRowsInSection:(long long)arg1 ;
-(id)itemContainerViewForSwipeActionController:(id)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)overlapsSectionHeaderViews;
-(void)setEstimatedSectionHeaderHeight:(double)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)_setShowsAdditionalSeparators:(BOOL)arg1 ;
-(id)_invalidationContextForUpdatedLayoutMargins:(UIEdgeInsets)arg1 ;
-(double)sectionHeaderHeight;
-(id)_constants;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(BOOL)_estimatesSectionFooterHeights;
-(void)setConstants:(id<UITableConstants>)arg1 ;
-(void)setEstimatedRowHeight:(double)arg1 ;
-(id)_titleForFooterInSection:(long long)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(NSRange)_sectionRangeForBounds:(CGRect)arg1 ;
-(BOOL)_shouldHaveHeaderViewForSection:(long long)arg1 ;
-(BOOL)_estimatesSizes;
-(void)setSectionFooterHeight:(double)arg1 ;
-(BOOL)swipeActionController:(id)arg1 mayBeginSwipeForItemAtIndexPath:(id)arg2 ;
-(double)sectionFooterHeight;
-(BOOL)_shouldIndentWhileEditingForRowAtIndexPath:(id)arg1 ;
-(BOOL)usesVariableMargins;
-(double)estimatedSectionFooterHeight;
-(id)_dataSourceActual;
-(BOOL)_shouldDrawSeparatorAtTop:(BOOL)arg1 ofSection:(long long)arg2 ;
-(void)setEstimatedSectionFooterHeight:(double)arg1 ;
-(UIEdgeInsets)_preferredLayoutMargins;
-(id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(void)setRowData:(UITableViewRowData *)arg1 ;
-(UIEdgeInsets)_rawSectionContentInset;
-(double)_topPadding;
-(long long)_indentationLevelForRowAtIndexPath:(id)arg1 ;
-(id)_delegateActual;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(long long)separatorStyle;
-(id)_scrollView;
-(void)setInsertIndexPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)insertIndexPaths;
-(double)_sidePadding;
-(double)_heightForFooterInSection:(long long)arg1 ;
-(long long)_editingStyleForRowAtIndexPath:(id)arg1 ;
-(BOOL)_separatorInsetIsRelativeToCellEdges;
-(BOOL)_shouldDrawTopSeparatorDueToMergedBarForSectionAtIndex:(long long)arg1 ;
-(void)_prepareForRowDataHeaderFooterSizing;
-(UIEdgeInsets)_contentInset;
-(UITableViewRowData *)rowData;
-(double)_dataSourceHeightForFooterInSection:(long long)arg1 ;
-(BOOL)_estimatesHeights;
-(NSIndexPath *)deletedIndexPath;
-(UIEdgeInsets)_rawSeparatorInset;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)contextualActionForDeletingRowAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_swipeToDeleteCell:(id)arg1 ;
-(void)prepareLayout;
-(id)_layoutAttributesForSeparatorWithIndexPath:(id)arg1 ;
-(id)gestureRecognizerViewForSwipeActionController:(id)arg1 ;
-(long long)_tableStyle;
-(double)_indexBarExtentFromEdge;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)_separatorColorChanged;
-(BOOL)_wantsSwipes;
-(double)_estimatedHeightForFooterInSection:(long long)arg1 ;
-(id)init;
-(void)setCellLayoutMarginsFollowReadableWidth:(BOOL)arg1 ;
-(double)_rowSpacing;
-(BOOL)_shouldStripHeaderTopPaddingForSection:(long long)arg1 ;
-(double)_defaultCellHeight;
-(void)setRowHeight:(double)arg1 ;
-(CGRect)_extraSeparatorFrameForIndexPath:(id)arg1 offset:(double)arg2 ;
-(void)prepareForTransitionToLayout:(id)arg1 ;
-(void)_setSectionContentInset:(UIEdgeInsets)arg1 ;
-(double)_dataSourceHeightForRowAtIndexPath:(id)arg1 ;
-(BOOL)_shouldDrawThickSeparators;
-(id)_accessoryBaseColor;
-(id)swipeActionForDeletingRowAtIndexPath:(id)arg1 ;
-(BOOL)_shouldHaveFooterViewForSection:(long long)arg1 ;
-(void)_invalidateIndexPathsBelowIndexPath:(id)arg1 withInvalidationContext:(id)arg2 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(BOOL)_estimatesRowHeights;
-(id)_swipeActionController;
-(void)swipeActionController:(id)arg1 didCompleteAction:(id)arg2 cancelled:(BOOL)arg3 atIndexPath:(id)arg4 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)_cellAccessoryButtonTappedAtIndexPath:(id)arg1 ;
-(id)_detailTextForHeaderInSection:(long long)arg1 ;
-(BOOL)isEditing;
-(UIColor *)backgroundColor;
-(BOOL)_hasHeaderFooterBelowRowAtIndexPath:(id)arg1 ;
-(BOOL)cellLayoutMarginsFollowReadableWidth;
-(NSMutableArray *)deleteIndexPaths;
-(void)_setHeight:(double)arg1 forRowAtIndexPath:(id)arg2 usingPresentationValues:(BOOL)arg3 ;
-(double)_sectionFooterPadding;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)swipeActionController:(id)arg1 viewForItemAtIndexPath:(id)arg2 ;
-(id)_layoutAttributesForSectionElementKind:(id)arg1 atSection:(long long)arg2 ;
-(void)_applyContentSizeDeltaImmediately:(double)arg1 ;
-(double)_maxTitleWidthForFooterInSection:(long long)arg1 ;
-(void)setDeleteIndexPaths:(NSMutableArray *)arg1 ;
-(double)_bottomPadding;
-(id)_delegateProxy;
-(BOOL)_isTableHeaderAutohiding;
-(double)rowHeight;
-(UIEdgeInsets)_sectionContentInset;
-(double)_dataSourceHeightForHeaderInSection:(long long)arg1 ;
-(BOOL)_estimatesSectionHeaderHeights;
-(CGPoint)_contentOffsetFromProposedContentOffset:(CGPoint)arg1 forScrollingToItemAtIndexPath:(id)arg2 atScrollPosition:(unsigned long long)arg3 ;
-(BOOL)_sectionContentInsetFollowsLayoutMargins;
-(BOOL)_shouldHaveViewForElementOfKind:(id)arg1 atSection:(long long)arg2 useRowData:(BOOL)arg3 ;
-(id)_titleForHeaderInSection:(long long)arg1 ;
-(id)swipeActionController:(id)arg1 leadingSwipeConfigurationForItemAtIndexPath:(id)arg2 ;
-(long long)layoutDirectionForSwipeActionController:(id)arg1 ;
-(double)_defaultSectionHeaderHeight;
-(BOOL)_shouldApplyReadableWidthInsets;
-(double)_heightForFooterInSection:(long long)arg1 useRowData:(BOOL)arg2 ;
-(id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(CGPoint)arg2 previousIndexPaths:(id)arg3 previousPosition:(CGPoint)arg4 ;
-(double)_heightForTableFooter;
-(void)setDeletedIndexPath:(NSIndexPath *)arg1 ;
-(id)_floatingElementKinds;
-(double)_estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(void)_coalesceContentSizeUpdateWithDelta:(double)arg1 ;
-(double)_sectionHeaderPadding;
-(BOOL)_shouldUseNewHeaderFooterBehavior;
-(void)swipeActionController:(id)arg1 willPerformAction:(id)arg2 atIndexPath:(id)arg3 ;
-(UIColor *)separatorColor;
-(long long)_titleAlignmentForFooterInSection:(long long)arg1 ;
-(BOOL)_providesRowHeights;
-(double)_heightForTableHeader;
-(CGRect)_frameForSectionElementKind:(id)arg1 atSection:(long long)arg2 visibleRect:(CGRect)arg3 floating:(BOOL*)arg4 canGuess:(BOOL)arg5 ;
-(BOOL)_shouldHaveGlobalViewForElementOfKind:(id)arg1 ;
-(BOOL)allowsMultipleSelectionDuringEditing;
-(void)prepareForTransitionFromLayout:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(id)swipeActionController:(id)arg1 indexPathForTouchLocation:(CGPoint)arg2 ;
-(double)_headerFooterTrailingMarginWidth;
-(long long)_accessoryTypeForCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(double)_estimatedHeightForHeaderInSection:(long long)arg1 ;
-(void)_setFloatingElementKinds:(id)arg1 ;
-(BOOL)_showsAdditionalSeparators;
-(UIEdgeInsets)_cellSafeAreaInsets;
-(id)_layoutAttributesForViewElementKind:(id)arg1 ;
-(long long)_numberOfSections;
-(double)_maxTitleWidthForHeaderInSection:(long long)arg1 ;
-(double)_backgroundInset;
-(double)_heightForRowAtIndexPath:(id)arg1 ;
-(double)_heightForHeaderInSection:(long long)arg1 ;
-(void)swipeActionController:(id)arg1 willBeginSwipeForItemAtIndexPath:(id)arg2 ;
-(BOOL)_needsRecomputeOfPreferredAttributesForVisibleEstimatedItemsDuringUpdate;
-(id)swipeActionController:(id)arg1 trailingSwipeConfigurationForItemAtIndexPath:(id)arg2 ;
-(void)swipeActionController:(id)arg1 didEndSwipeForItemAtIndexPath:(id)arg2 ;
-(id)_multiselectCheckmarkColor;
-(CGRect)_indexFrame;
-(double)_heightForHeaderInSection:(long long)arg1 useRowData:(BOOL)arg2 ;
-(BOOL)_canReorderRowAtIndexPath:(id)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(BOOL)_isShowingIndex;
-(void)dealloc;
-(void)swipeActionController:(id)arg1 animateView:(id)arg2 actionsView:(id)arg3 forDestructiveAction:(id)arg4 atIndexPath:(id)arg5 withSwipeInfo:(SCD_Struct_UI41)arg6 completion:(/*^block*/id)arg7 ;
@end

