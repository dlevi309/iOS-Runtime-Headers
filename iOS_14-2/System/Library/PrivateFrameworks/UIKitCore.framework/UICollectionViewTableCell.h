/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UITable_UITableViewCellDelegate.h>

@class UITableViewCell, UIView, UIShadowView, NSMutableSet, UITableViewCollectionCell, UICollectionViewLayout, UICollectionViewTableLayout, UICollectionViewTableLayoutAttributes, UIImageView, UILabel, UIScrollView, UIColor, NSString;

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
@property (getter=_rowSpacing,nonatomic,readonly) double rowSpacing; 
@property (getter=_rawSeparatorInset,nonatomic,readonly) UIEdgeInsets rawSeparatorInset; 
@property (getter=_popoverControllerStyle,nonatomic,readonly) long long popoverControllerStyle; 
@property (getter=_isInModalViewController,nonatomic,readonly) BOOL inModalViewController; 
@property (getter=_wasEditing,nonatomic,readonly) BOOL wasEditing; 
@property (getter=_isEditingForSwipeDeletion,nonatomic,readonly) BOOL editingForSwipeDeletion; 
@property (setter=_setSwipeToDeleteCell:,getter=_swipeToDeleteCell,nonatomic,retain) UITableViewCell * swipeToDeleteCell;                                                                              //@synthesize swipeToDeleteCell=_swipeToDeleteCell - In the implementation block
@property (getter=_scrollView,nonatomic,readonly) UIScrollView * scrollView; 
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
@property (getter=_sectionContentInsetFollowsLayoutMargins,nonatomic,readonly) BOOL sectionContentInsetFollowsLayoutMargins; 
@property (getter=_accessoryBaseColor,nonatomic,readonly) UIColor * accessoryBaseColor; 
@property (getter=_multiselectCheckmarkColor,nonatomic,readonly) UIColor * multiselectCheckmarkColor; 
@property (nonatomic,readonly) BOOL canBeEdited; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_tableStyle,nonatomic,readonly) long long tableStyle; 
-(UIEdgeInsets)separatorInset;
-(BOOL)canBeEdited;
-(BOOL)insetsContentViewsToSafeArea;
-(BOOL)allowsMultipleSelection;
-(double)_sectionCornerRadius;
-(void)_setupForEditing:(BOOL)arg1 atIndexPath:(id)arg2 multiselect:(BOOL)arg3 editingStyle:(long long)arg4 shouldIndentWhileEditing:(BOOL)arg5 showsReorderControl:(BOOL)arg6 accessoryType:(long long)arg7 updateSeparators:(BOOL)arg8 ;
-(double)estimatedRowHeight;
-(double)estimatedSectionHeaderHeight;
-(long long)_numberOfRowsInSection:(long long)arg1 ;
-(BOOL)overlapsSectionHeaderViews;
-(double)sectionHeaderHeight;
-(BOOL)_shouldHaveHeaderViewForSection:(long long)arg1 ;
-(double)sectionFooterHeight;
-(BOOL)usesVariableMargins;
-(double)estimatedSectionFooterHeight;
-(UIEdgeInsets)_rawSectionContentInset;
-(double)_topPadding;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(id)_scrollView;
-(void)_updateCollectionViewInteractiveMovementTargetPositionForTouch:(id)arg1 ;
-(BOOL)_separatorInsetIsRelativeToCellEdges;
-(UIEdgeInsets)_rawSeparatorInset;
-(void)_swipeToDeleteCell:(id)arg1 ;
-(long long)_tableStyle;
-(double)_indexBarExtentFromEdge;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)indentationWidth;
-(double)_rowSpacing;
-(UIImageView *)imageView;
-(void)_highlightCell:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 highlight:(BOOL)arg4 ;
-(void)setBackgroundView:(id)arg1 ;
-(UIView *)accessoryView;
-(id)backgroundView;
-(BOOL)isSelected;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(UICollectionViewLayout *)currentLayout;
-(BOOL)_shouldDrawThickSeparators;
-(id)_accessoryBaseColor;
-(void)setCurrentLayout:(UICollectionViewLayout *)arg1 ;
-(BOOL)_shouldHaveFooterViewForSection:(long long)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_setOffsetForRevealingDeleteConfirmationButton:(double)arg1 ;
-(void)prepareForReuse;
-(BOOL)isEditing;
-(id)backgroundColor;
-(void)_prepareHighlightForCell:(id)arg1 withInteraction:(id)arg2 ;
-(void)_endReorderingForCell:(id)arg1 wasCancelled:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_updateInternalCellForTableLayout:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)_offsetForRevealingDeleteConfirmationButton;
-(BOOL)cellLayoutMarginsFollowReadableWidth;
-(BOOL)isInTableLayout;
-(long long)focusStyle;
-(UITableViewCollectionCell *)tableViewCell;
-(id)_tableLayout;
-(BOOL)borderShadowVisible;
-(void)layoutSubviews;
-(BOOL)shouldIndentWhileEditing;
-(void)_commonSetupTableCell;
-(id)_swipeToDeleteCell;
-(BOOL)_isInteractiveMoveShadowInstalled;
-(void)setShouldIndentWhileEditing:(BOOL)arg1 ;
-(void)_insertInteractiveMoveShadowViews;
-(void)_removeInteractiveMoveShadowViews;
-(double)_bottomPadding;
-(void)_layoutTableViewCell;
-(BOOL)_isCellReorderable:(id)arg1 ;
-(void)_layoutInteractiveMoveShadow;
-(BOOL)_wasEditing;
-(UIView *)swipeableView;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setBorderShadowVisible:(BOOL)arg1 ;
-(id)_tableAttributes;
-(id)selectedBackgroundView;
-(void)setSelectedBackgroundView:(id)arg1 ;
-(void)updateCellForTableLayout:(BOOL)arg1 ;
-(void)_updateEditing;
-(BOOL)transitioningLayouts;
-(void)setFocusStyle:(long long)arg1 ;
-(void)setTransitioningLayouts:(BOOL)arg1 ;
-(UILabel *)detailTextLabel;
-(id)_reorderingCell;
-(double)rowHeight;
-(UIEdgeInsets)_sectionContentInset;
-(void)setInteractiveMoveEffectsVisible:(BOOL)arg1 ;
-(void)_animateDeletionOfRowAtIndexPath:(id)arg1 ;
-(UIView *)multipleSelectionBackgroundView;
-(void)setMultipleSelectionBackgroundView:(UIView *)arg1 ;
-(long long)editingAccessoryType;
-(void)setEditingAccessoryType:(long long)arg1 ;
-(void)_trackAnimator:(id)arg1 ;
-(UIView *)editingAccessoryView;
-(void)setEditingAccessoryView:(UIView *)arg1 ;
-(BOOL)showingDeleteConfirmation;
-(BOOL)_canFocusCell:(id)arg1 ;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_sectionContentInsetFollowsLayoutMargins;
-(void)didTransitionToState:(unsigned long long)arg1 ;
-(void)_cellDidShowSelectedBackground:(id)arg1 ;
-(BOOL)isHighlighted;
-(void)_cellDidHideSelectedBackground:(id)arg1 ;
-(void)_cellDidBecomeFocused:(id)arg1 ;
-(void)_cellDidBecomeUnfocused:(id)arg1 ;
-(BOOL)_shouldShowMenuForCell:(id)arg1 ;
-(void)_userSelectCell:(id)arg1 ;
-(BOOL)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3 ;
-(void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3 ;
-(CGRect)_calloutTargetRectForCell:(id)arg1 ;
-(BOOL)_isReorderControlActiveForCell:(id)arg1 ;
-(BOOL)_beginReorderingForCell:(id)arg1 touch:(id)arg2 ;
-(void)_draggingReorderingCell:(id)arg1 yDelta:(double)arg2 touch:(id)arg3 ;
-(void)_didInsertRowForTableCell:(id)arg1 ;
-(id)_titleForDeleteConfirmationButton:(id)arg1 ;
-(void)_animateDeletionOfRowWithCell:(id)arg1 ;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)_updateCell:(id)arg1 withValue:(id)arg2 ;
-(void)_accessoryButtonAction:(id)arg1 ;
-(void)_highlightDidEndForCell:(id)arg1 withInteraction:(id)arg2 ;
-(long long)_popoverControllerStyle;
-(BOOL)_isInModalViewController;
-(void)setAccessoryType:(long long)arg1 ;
-(BOOL)_isEditingForSwipeDeletion;
-(void)_setSwipeToDeleteCell:(id)arg1 ;
-(void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(UIEdgeInsets)_contentViewInset;
-(void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(double)_selectionAnimationDuration;
-(BOOL)interactiveMoveEffectsVisible;
-(long long)indentationLevel;
-(void)awakeFromNib;
-(BOOL)allowsMultipleSelectionDuringEditing;
-(void)setEditing:(BOOL)arg1 ;
-(void)setShowsReorderControl:(BOOL)arg1 ;
-(long long)accessoryType;
-(void)setTableViewCell:(UITableViewCollectionCell *)arg1 ;
-(UIEdgeInsets)_cellSafeAreaInsets;
-(BOOL)showsReorderControl;
-(UILabel *)textLabel;
-(long long)_numberOfSections;
-(double)_backgroundInset;
-(long long)editingStyle;
-(void)setIndentationLevel:(long long)arg1 ;
-(id)_multiselectCheckmarkColor;
-(long long)selectionStyle;
-(void)setIndentationWidth:(double)arg1 ;
-(CGRect)_indexFrame;
-(BOOL)_isShowingIndex;
-(void)setHighlighted:(BOOL)arg1 ;
@end

