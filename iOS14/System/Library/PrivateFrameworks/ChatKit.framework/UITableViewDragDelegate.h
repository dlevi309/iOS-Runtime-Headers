/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol UITableViewDragDelegate <NSObject>
@optional
-(void)tableView:(id)arg1 dragSessionWillBegin:(id)arg2;
-(void)tableView:(id)arg1 dragSessionDidEnd:(id)arg2;
-(id)tableView:(id)arg1 dragPreviewParametersForRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4;
-(BOOL)tableView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;
-(BOOL)tableView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2;

@required
-(id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;

@end

