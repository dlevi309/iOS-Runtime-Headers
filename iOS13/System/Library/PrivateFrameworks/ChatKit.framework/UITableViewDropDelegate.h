/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol UITableViewDropDelegate <NSObject>
@optional
-(BOOL)tableView:(id)arg1 canHandleDropSession:(id)arg2;
-(void)tableView:(id)arg1 dropSessionDidEnter:(id)arg2;
-(id)tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
-(void)tableView:(id)arg1 dropSessionDidExit:(id)arg2;
-(void)tableView:(id)arg1 dropSessionDidEnd:(id)arg2;
-(id)tableView:(id)arg1 dropPreviewParametersForRowAtIndexPath:(id)arg2;

@required
-(void)tableView:(id)arg1 performDropWithCoordinator:(id)arg2;

@end

