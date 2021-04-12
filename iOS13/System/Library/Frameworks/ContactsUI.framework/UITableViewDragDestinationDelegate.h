/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol UITableViewDragDestinationDelegate <NSObject>
@optional
-(long long)__tableView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;
-(void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2;
-(BOOL)_tableView:(id)arg1 canHandleDropSession:(id)arg2;
-(void)_tableView:(id)arg1 dropSessionDidEnter:(id)arg2;
-(id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
-(void)_tableView:(id)arg1 dropSessionDidExit:(id)arg2;
-(void)_tableView:(id)arg1 dropSessionDidEnd:(id)arg2;

@end

