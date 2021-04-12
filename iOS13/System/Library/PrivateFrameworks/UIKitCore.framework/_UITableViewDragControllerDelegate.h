/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UITableViewDragControllerDelegate <NSObject>
@required
-(long long)_dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2;
-(BOOL)_canBeginDragAtPoint:(CGPoint)arg1 indexPath:(id)arg2;
-(void)_dragSessionWillBegin:(id)arg1;
-(void)_updateAppearanceOfVisibleRowsForDragState;
-(id)_rowsToIncludeInDragSession:(id)arg1 atIndexPath:(id)arg2 withDataOwner:(long long)arg3;
-(id)_itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2;
-(id)_itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(CGPoint)arg3 withDataOwner:(long long)arg4;
-(id)_dragPreviewParametersForIndexPath:(id)arg1;
-(void)_prepareToLiftRowsAtIndexPaths:(id)arg1;
-(void)_animateLiftOfRowsAtIndexPaths:(id)arg1;
-(void)_dragSessionDidEnd:(id)arg1;
-(id)_beginAnimatingDropOfCell:(id)arg1 isCanceling:(BOOL)arg2;
-(void)_animateDragCancelForCell:(id)arg1;
-(void)_endAnimatingDropOfCell:(id)arg1;
-(BOOL)_dragSessionAllowsMoveOperation:(id)arg1;
-(BOOL)_dragSessionIsRestrictedToDraggingApplication:(id)arg1;
-(BOOL)_dragSessionAllowsSystemDrag:(id)arg1;

@end

