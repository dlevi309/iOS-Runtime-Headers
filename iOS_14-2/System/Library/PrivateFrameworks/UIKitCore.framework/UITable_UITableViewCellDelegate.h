/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UITableViewCell;


@protocol UITable_UITableViewCellDelegate <UITable>
@property (getter=_rowSpacing,nonatomic,readonly) double rowSpacing; 
@property (getter=_rawSeparatorInset,nonatomic,readonly) UIEdgeInsets rawSeparatorInset; 
@property (getter=_popoverControllerStyle,nonatomic,readonly) long long popoverControllerStyle; 
@property (getter=_isInModalViewController,nonatomic,readonly) BOOL inModalViewController; 
@property (getter=_wasEditing,nonatomic,readonly) BOOL wasEditing; 
@property (getter=_isEditingForSwipeDeletion,nonatomic,readonly) BOOL editingForSwipeDeletion; 
@property (setter=_setSwipeToDeleteCell:,getter=_swipeToDeleteCell,nonatomic,retain) UITableViewCell * swipeToDeleteCell; 
@required
-(UIEdgeInsets*)_rawSeparatorInset;
-(void)_swipeToDeleteCell:(id)arg1;
-(double)_rowSpacing;
-(void)_highlightCell:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 highlight:(BOOL)arg4;
-(BOOL)_shouldDrawThickSeparators;
-(void)_prepareHighlightForCell:(id)arg1 withInteraction:(id)arg2;
-(void)_endReorderingForCell:(id)arg1 wasCancelled:(BOOL)arg2 animated:(BOOL)arg3;
-(id)_swipeToDeleteCell;
-(BOOL)_isCellReorderable:(id)arg1;
-(BOOL)_wasEditing;
-(id)_reorderingCell;
-(void)_animateDeletionOfRowAtIndexPath:(id)arg1;
-(BOOL)_canFocusCell:(id)arg1;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
-(void)_cellDidShowSelectedBackground:(id)arg1;
-(void)_cellDidHideSelectedBackground:(id)arg1;
-(void)_cellDidBecomeFocused:(id)arg1;
-(void)_cellDidBecomeUnfocused:(id)arg1;
-(BOOL)_shouldShowMenuForCell:(id)arg1;
-(void)_userSelectCell:(id)arg1;
-(BOOL)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
-(void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
-(CGRect*)_calloutTargetRectForCell:(id)arg1;
-(BOOL)_isReorderControlActiveForCell:(id)arg1;
-(BOOL)_beginReorderingForCell:(id)arg1 touch:(id)arg2;
-(void)_draggingReorderingCell:(id)arg1 yDelta:(double)arg2 touch:(id)arg3;
-(void)_didInsertRowForTableCell:(id)arg1;
-(id)_titleForDeleteConfirmationButton:(id)arg1;
-(void)_animateDeletionOfRowWithCell:(id)arg1;
-(void)_updateCell:(id)arg1 withValue:(id)arg2;
-(void)_accessoryButtonAction:(id)arg1;
-(void)_highlightDidEndForCell:(id)arg1 withInteraction:(id)arg2;
-(long long)_popoverControllerStyle;
-(BOOL)_isInModalViewController;
-(BOOL)_isEditingForSwipeDeletion;
-(void)_setSwipeToDeleteCell:(id)arg1;

@end

