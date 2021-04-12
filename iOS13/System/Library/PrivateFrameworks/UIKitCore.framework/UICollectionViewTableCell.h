/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UITable_UITableViewCellDelegate.h>

@class UITableViewCell, UIView, UIShadowView, NSMutableSet, UITableViewCollectionCell, UICollectionViewLayout, UICollectionViewTableLayout, UICollectionViewTableLayoutAttributes, UIImageView, UILabel, NSString, UIScrollView, UIColor;

@interface UICollectionViewTableCell : UICollectionViewCell <UITable_UITableViewCellDelegate> {

	UIView* _swipeableView;
	UIShadowView* _borderShadowTopView;
	UIShadowView* _borderShadowBottomView;
	UIView* _selectedBackgroundViewToRestoreWhenInteractiveMoveEnds;
	long long _accessoryType;
	NSMutableSet* _trackedAnimators;
	BOOL _editing;
	double _reorderingCenterX;
	BOOL _interactiveMoveEffectsVisible;
	BOOL _borderShadowVisible;
	BOOL _transitioningLayouts;
	UITableViewCell* _swipeToDeleteCell;
	UITableViewCollectionCell* _tableViewCell;
	UICollectionViewLayout* _currentLayout;
	double _offsetForRevealingDeleteConfirmationButton;

}

@property (getter=_tableLayout,nonatomic,readonly) UICollectionViewTableLayout * tableLayout; 
@property (getter=_tableAttributes,nonatomic,readonly) UICollectionViewTableLayoutAttributes * tableAttributes; 
@property (nonatomic,retain) UITableViewCollectionCell * tableViewCell;                                                                                                                                //@synthesize tableViewCell=_tableViewCell - In the implementation block
@property (assign,nonatomic) BOOL interactiveMoveEffectsVisible;                                                                                                                                       //@synthesize interactiveMoveEffectsVisible=_interactiveMoveEffectsVisible - In the implementation block
@property (assign,nonatomic) BOOL borderShadowVisible;                                                                                                                                                 //@synthesize borderShadowVisible=_borderShadowVisible - In the implementation block
@property (assign,nonatomic) BOOL transitioningLayouts;                                                                                                                                                //@synthesize transitioningLayouts=_transitioningLayouts - In the implementation block
@property (assign,nonatomic,__weak) UICollectionViewLayout * currentLayout;                                                                                                                            //@synthesize currentLayout=_currentLayout - In the implementation block
@property (nonatomic,readonly) UIView * swipeableView; 
@property (assign,setter=_setOffsetForRevealingDeleteConfirmationButton:,getter=_offsetForRevealingDeleteConfirmationButton,nonatomic) double offsetForRevealingDeleteConfirmationButton;              //@synthesize offsetForRevealingDeleteConfirmationButton=_offsetForRevealingDeleteConfirmationButton - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,retain) UIView * multipleSelectionBackgroundView; 
@property (assign,nonatomic) long long selectionStyle; 
@property (nonatomic,readonly) long long editingStyle; 
@property (assign,nonatomic) BOOL showsReorderControl; 
@property (assign,nonatomic) BOOL shouldIndentWhileEditing; 
@property (assign,nonatomic) long long accessoryType; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) long long editingAccessoryType; 
@property (nonatomic,retain) UIView * editingAccessoryView; 
@property (assign,nonatomic) long long indentationLevel; 
@property (assign,nonatomic) double indentationWidth; 
@property (assign,nonatomic) UIEdgeInsets separatorInset; 
@property (nonatomic,readonly) BOOL showingDeleteConfirmation; 
@property (getter=isInTableLayout,nonatomic,readonly) BOOL inTableLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canBeEdited; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (getter=_scrollView,nonatomic,readonly) UIScrollView * scrollView; 
@property (getter=_tableStyle,nonatomic,readonly) long long tableStyle; 
@property (getter=_sectionContentInsetFollowsLayoutMargins,nonatomic,readonly) BOOL sectionContentInsetFollowsLayoutMargins; 
@property (getter=_accessoryBaseColor,nonatomic,readonly) UIColor * accessoryBaseColor; 
@property (getter=_multiselectCheckmarkColor,nonatomic,readonly) UIColor * multiselectCheckmarkColor; 
@property (getter=_numberOfSections,nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) BOOL allowsMultipleSelection; 
@property (nonatomic,readonly) BOOL allowsMultipleSelectionDuringEditing; 
@property (nonatomic,readonly) double rowHeight; 
@property (nonatomic,readonly) double sectionHeaderHeight; 
@property (nonatomic,readonly) double sectionFooterHeight; 
@property (nonatomic,readonly) double estimatedRowHeight; 
@property (nonatomic,readonly) double estimatedSectionHeaderHeight; 
@property (nonatomic,readonly) double estimatedSectionFooterHeight; 
@property (getter=_separatorInsetIsRelativeToCellEdges,nonatomic,readonly) BOOL separatorInsetIsRelativeToCellEdges; 
@property (nonatomic,readonly) BOOL usesVariableMargins; 
@property (nonatomic,readonly) BOOL overlapsSectionHeaderViews; 
@property (getter=_backgroundInset,nonatomic,readonly) double backgroundInset; 
@property (getter=_cellSafeAreaInsets,nonatomic,readonly) UIEdgeInsets cellSafeAreaInsets; 
@property (nonatomic,readonly) BOOL cellLayoutMarginsFollowReadableWidth; 
@property (getter=_topPadding,nonatomic,readonly) double topPadding; 
@property (getter=_bottomPadding,nonatomic,readonly) double bottomPadding; 
@property (getter=_isShowingIndex,nonatomic,readonly) BOOL showingIndex; 
@property (getter=_indexFrame,nonatomic,readonly) CGRect indexFrame; 
@property (getter=_indexBarExtentFromEdge,nonatomic,readonly) double indexBarExtentFromEdge; 
@property (getter=_sectionContentInset,nonatomic,readonly) UIEdgeInsets sectionContentInset; 
@property (getter=_rawSectionContentInset,nonatomic,readonly) UIEdgeInsets rawSectionContentInset; 
@property (getter=_sectionCornerRadius,nonatomic,readonly) double sectionCornerRadius; 
@property (getter=_rowSpacing,nonatomic,readonly) double rowSpacing; 
@property (getter=_rawSeparatorInset,nonatomic,readonly) UIEdgeInsets rawSeparatorInset; 
@property (getter=_popoverControllerStyle,nonatomic,readonly) long long popoverControllerStyle; 
@property (getter=_isInModalViewController,nonatomic,readonly) BOOL inModalViewController; 
@property (getter=_wasEditing,nonatomic,readonly) BOOL wasEditing; 
@property (getter=_isEditingForSwipeDeletion,nonatomic,readonly) BOOL editingForSwipeDeletion; 
@property (setter=_setSwipeToDeleteCell:,getter=_swipeToDeleteCell,nonatomic,retain) UITableViewCell * swipeToDeleteCell;                                                                              //@synthesize swipeToDeleteCell=_swipeToDeleteCell - In the implementation block
-(void)prepareForReuse;
-(BOOL)isSelected;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)backgroundView;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)_scrollView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)setBackgroundView:(id)arg1 ;
-(double)_indexBarExtentFromEdge;
-(BOOL)isEditing;
-(UICollectionViewLayout *)currentLayout;
-(void)setCurrentLayout:(UICollectionViewLayout *)arg1 ;
-(UILabel *)textLabel;
-(void)setSelectedBackgroundView:(id)arg1 ;
-(long long)selectionStyle;
-(id)selectedBackgroundView;
-(long long)_tableStyle;
-(BOOL)_sectionContentInsetFollowsLayoutMargins;
-(id)_accessoryBaseColor;
-(id)_multiselectCheckmarkColor;
-(BOOL)canBeEdited;
-(void)setEditing:(BOOL)arg1 ;
-(void)setSelectionStyle:(long long)arg1 ;
-(UIEdgeInsets)_contentViewInset;
-(BOOL)_separatorInsetIsRelativeToCellEdges;
-(double)_backgroundInset;
-(UIEdgeInsets)separatorInset;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(BOOL)insetsContentViewsToSafeArea;
-(long long)indentationLevel;
-(void)setIndentationLevel:(long long)arg1 ;
-(long long)accessoryType;
-(void)setAccessoryType:(long long)arg1 ;
-(long long)editingStyle;
-(BOOL)shouldIndentWhileEditing;
-(void)setShouldIndentWhileEditing:(BOOL)arg1 ;
-(BOOL)showsReorderControl;
-(void)setShowsReorderControl:(BOOL)arg1 ;
-(UITableViewCollectionCell *)tableViewCell;
-(void)setTableViewCell:(UITableViewCollectionCell *)arg1 ;
-(void)_commonSetupTableCell;
-(void)awakeFromNib;
-(BOOL)borderShadowVisible;
-(BOOL)_isInteractiveMoveShadowInstalled;
-(void)_insertInteractiveMoveShadowViews;
-(void)_removeInteractiveMoveShadowViews;
-(void)_layoutTableViewCell;
-(void)_layoutInteractiveMoveShadow;
-(id)_tableLayout;
-(void)setBorderShadowVisible:(BOOL)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(id)_tableAttributes;
-(BOOL)isInTableLayout;
-(void)_updateInternalCellForTableLayout:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateCellForTableLayout:(BOOL)arg1 ;
-(void)_updateEditing;
-(BOOL)transitioningLayouts;
-(BOOL)allowsMultipleSelection;
-(BOOL)allowsMultipleSelectionDuringEditing;
-(void)_setupForEditing:(BOOL)arg1 atIndexPath:(id)arg2 multiselect:(BOOL)arg3 editingStyle:(long long)arg4 shouldIndentWhileEditing:(BOOL)arg5 showsReorderControl:(BOOL)arg6 accessoryType:(long long)arg7 updateSeparators:(BOOL)arg8 ;
-(void)setTransitioningLayouts:(BOOL)arg1 ;
-(UIView *)swipeableView;
-(void)_setOffsetForRevealingDeleteConfirmationButton:(double)arg1 ;
-(void)_swipeToDeleteCell:(id)arg1 ;
-(void)setInteractiveMoveEffectsVisible:(BOOL)arg1 ;
-(void)_updateCollectionViewInteractiveMovementTargetPositionForTouch:(id)arg1 ;
-(void)_animateDeletionOfRowAtIndexPath:(id)arg1 ;
-(BOOL)_shouldDrawThickSeparators;
-(double)_rowSpacing;
-(UIEdgeInsets)_rawSeparatorInset;
-(long long)_numberOfSections;
-(double)rowHeight;
-(double)sectionHeaderHeight;
-(double)sectionFooterHeight;
-(double)estimatedRowHeight;
-(double)estimatedSectionHeaderHeight;
-(double)estimatedSectionFooterHeight;
-(BOOL)usesVariableMargins;
-(BOOL)overlapsSectionHeaderViews;
-(UIEdgeInsets)_cellSafeAreaInsets;
-(BOOL)cellLayoutMarginsFollowReadableWidth;
-(double)_topPadding;
-(double)_bottomPadding;
-(BOOL)_isShowingIndex;
-(CGRect)_indexFrame;
-(UIEdgeInsets)_sectionContentInset;
-(UIEdgeInsets)_rawSectionContentInset;
-(double)_sectionCornerRadius;
-(long long)_numberOfRowsInSection:(long long)arg1 ;
-(BOOL)_shouldHaveHeaderViewForSection:(long long)arg1 ;
-(BOOL)_shouldHaveFooterViewForSection:(long long)arg1 ;
-(UILabel *)detailTextLabel;
-(UIView *)multipleSelectionBackgroundView;
-(void)setMultipleSelectionBackgroundView:(UIView *)arg1 ;
-(long long)editingAccessoryType;
-(void)setEditingAccessoryType:(long long)arg1 ;
-(UIView *)editingAccessoryView;
-(void)setEditingAccessoryView:(UIView *)arg1 ;
-(double)indentationWidth;
-(void)setIndentationWidth:(double)arg1 ;
-(BOOL)showingDeleteConfirmation;
-(long long)focusStyle;
-(void)setFocusStyle:(long long)arg1 ;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(void)didTransitionToState:(unsigned long long)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_cellDidShowSelectedBackground:(id)arg1 ;
-(void)_cellDidHideSelectedBackground:(id)arg1 ;
-(BOOL)_canFocusCell:(id)arg1 ;
-(void)_cellDidBecomeFocused:(id)arg1 ;
-(void)_cellDidBecomeUnfocused:(id)arg1 ;
-(BOOL)_shouldShowMenuForCell:(id)arg1 ;
-(BOOL)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3 ;
-(void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3 ;
-(CGRect)_calloutTargetRectForCell:(id)arg1 ;
-(id)_reorderingCell;
-(BOOL)_isCellReorderable:(id)arg1 ;
-(BOOL)_isReorderControlActiveForCell:(id)arg1 ;
-(BOOL)_beginReorderingForCell:(id)arg1 touch:(id)arg2 ;
-(void)_draggingReorderingCell:(id)arg1 yDelta:(double)arg2 touch:(id)arg3 ;
-(void)_endReorderingForCell:(id)arg1 wasCancelled:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_didInsertRowForTableCell:(id)arg1 ;
-(id)_titleForDeleteConfirmationButton:(id)arg1 ;
-(void)_animateDeletionOfRowWithCell:(id)arg1 ;
-(void)_highlightCell:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 highlight:(BOOL)arg4 ;
-(void)_updateCell:(id)arg1 withValue:(id)arg2 ;
-(void)_accessoryButtonAction:(id)arg1 ;
-(void)_userSelectCell:(id)arg1 ;
-(void)_prepareHighlightForCell:(id)arg1 withInteraction:(id)arg2 ;
-(void)_highlightDidEndForCell:(id)arg1 withInteraction:(id)arg2 ;
-(long long)_popoverControllerStyle;
-(BOOL)_isInModalViewController;
-(BOOL)_wasEditing;
-(BOOL)_isEditingForSwipeDeletion;
-(id)_swipeToDeleteCell;
-(void)_setSwipeToDeleteCell:(id)arg1 ;
-(void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)_trackAnimator:(id)arg1 ;
-(double)_selectionAnimationDuration;
-(BOOL)interactiveMoveEffectsVisible;
-(double)_offsetForRevealingDeleteConfirmationButton;
@end

