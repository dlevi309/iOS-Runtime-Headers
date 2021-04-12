/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UITableViewDragControllerDelegate <NSObject>
@required
-(void)_dragSessionDidEnd:(id)arg1;
-(void)_animateDragCancelForCell:(id)arg1;
-(void)_prepareToLiftRowsAtIndexPaths:(id)arg1;
-(BOOL)_canBeginDragAtPoint:(CGPoint)arg1 indexPath:(id)arg2;
-(BOOL)_dragSessionAllowsSystemDrag:(id)arg1;
-(void)_dragSessionWillBegin:(id)arg1;
-(id)_dragPreviewParametersForIndexPath:(id)arg1;
-(void)_updateAppearanceOfVisibleRowsForDragState;
-(void)_endAnimatingDropOfCell:(id)arg1;
-(id)_rowsToIncludeInDragSession:(id)arg1 atIndexPath:(id)arg2 withDataOwner:(long long)arg3;
-(id)_itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2;
-(id)_itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(CGPoint)arg3 withDataOwner:(long long)arg4;
-(void)_animateLiftOfRowsAtIndexPaths:(id)arg1;
-(id)_beginAnimatingDropOfCell:(id)arg1 isCanceling:(BOOL)arg2;
-(BOOL)_dragSessionAllowsMoveOperation:(id)arg1;
-(BOOL)_dragSessionIsRestrictedToDraggingApplication:(id)arg1;
-(long long)_dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2;

@end

