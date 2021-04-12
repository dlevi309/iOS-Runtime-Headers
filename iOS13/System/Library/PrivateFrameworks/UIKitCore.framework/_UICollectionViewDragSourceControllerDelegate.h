/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICollectionViewDragSourceControllerDelegate <NSObject>
@required
-(void)dragSourceController:(id)arg1 willBeginLiftForItemsAtIndexPaths:(id)arg2;
-(void)dragSourceController:(id)arg1 didCompleteLiftForItemsAtIndexPaths:(id)arg2;
-(void)dragSourceController:(id)arg1 didCancelLiftForItemsAtIndexPaths:(id)arg2;
-(void)dragSourceControllerSessionWillBegin:(id)arg1;
-(void)dragSourceController:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;
-(void)dragSourceController:(id)arg1 didSupplyCancellationPreviewForItemAtIndexPath:(id)arg2;
-(void)dragSourceController:(id)arg1 willBeginAnimatingCancelForItemsAtIndexPaths:(id)arg2 withAnimator:(id)arg3;
-(void)dragSourceController:(id)arg1 didCompleteAnimatingCancelForItemsAtIndexPaths:(id)arg2;
-(void)dragSourceController:(id)arg1 willEndForItemsAtIndexPaths:(id)arg2 withDropOperation:(unsigned long long)arg3;
-(void)dragSourceController:(id)arg1 didEndForItemsAtIndexPaths:(id)arg2;
-(void)dragSourceController:(id)arg1 didUpdateItemCountOfSelectedItems:(long long)arg2;

@end

