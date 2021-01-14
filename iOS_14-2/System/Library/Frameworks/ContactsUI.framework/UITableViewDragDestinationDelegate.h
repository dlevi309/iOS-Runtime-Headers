/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol UITableViewDragDestinationDelegate <NSObject>
@optional
-(BOOL)_tableView:(id)arg1 canHandleDropSession:(id)arg2;
-(void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2;
-(id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
-(long long)__tableView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;
-(void)_tableView:(id)arg1 dropSessionDidEnter:(id)arg2;
-(void)_tableView:(id)arg1 dropSessionDidExit:(id)arg2;
-(void)_tableView:(id)arg1 dropSessionDidEnd:(id)arg2;

@end

