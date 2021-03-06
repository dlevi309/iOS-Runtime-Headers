/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol UITableViewDropDelegate <NSObject>
@optional
-(void)tableView:(id)arg1 dropSessionDidExit:(id)arg2;
-(BOOL)tableView:(id)arg1 canHandleDropSession:(id)arg2;
-(void)tableView:(id)arg1 dropSessionDidEnter:(id)arg2;
-(id)tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
-(void)tableView:(id)arg1 dropSessionDidEnd:(id)arg2;
-(id)tableView:(id)arg1 dropPreviewParametersForRowAtIndexPath:(id)arg2;

@required
-(void)tableView:(id)arg1 performDropWithCoordinator:(id)arg2;

@end

