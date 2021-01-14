/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITableViewDragSourceDelegate <NSObject>
@optional
-(id)_tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
-(id)_tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4;
-(void)_tableView:(id)arg1 dragSessionWillBegin:(id)arg2;
-(void)_tableView:(id)arg1 dragSessionDidEnd:(id)arg2;
-(long long)__tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;

@end

