/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITableViewDragSourceDelegate <NSObject>
@optional
-(long long)__tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
-(id)_tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
-(id)_tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4;
-(void)_tableView:(id)arg1 dragSessionWillBegin:(id)arg2;
-(void)_tableView:(id)arg1 dragSessionDidEnd:(id)arg2;

@end

