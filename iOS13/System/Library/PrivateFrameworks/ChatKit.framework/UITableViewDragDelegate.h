/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol UITableViewDragDelegate <NSObject>
@optional
-(id)tableView:(id)arg1 dragPreviewParametersForRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4;
-(void)tableView:(id)arg1 dragSessionWillBegin:(id)arg2;
-(void)tableView:(id)arg1 dragSessionDidEnd:(id)arg2;
-(BOOL)tableView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;
-(BOOL)tableView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2;

@required
-(id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;

@end

