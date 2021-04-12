/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UITableViewDropCoordinatorDelegate <_UITableViewPlaceholderContextDelegate>
@required
-(id)tableView;
-(id)animateDragItem:(id)arg1 toTarget:(id)arg2;
-(id)animateDragItem:(id)arg1 toCell:(id)arg2 withPreviewParameters:(id)arg3;
-(id)animateDragItem:(id)arg1 intoRowAtIndexPath:(id)arg2 rect:(CGRect)arg3;
-(id)animateDragItem:(id)arg1 toRowAtIndexPath:(id)arg2;
-(void)insertPlaceholderAtIndexPath:(id)arg1 withContext:(id)arg2 previewParametersProvider:(/*^block*/id)arg3;

@end

