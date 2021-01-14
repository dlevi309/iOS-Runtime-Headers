/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICollectionViewDragSourceControllerDelegate <NSObject>
@required
-(void)dragSourceController:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;
-(void)dragSourceController:(id)arg1 didEndForItemsAtIndexPaths:(id)arg2;
-(void)dragSourceControllerSessionWillBegin:(id)arg1;
-(void)dragSourceController:(id)arg1 willBeginAnimatingCancelForItemsAtIndexPaths:(id)arg2 withAnimator:(id)arg3;
-(void)dragSourceController:(id)arg1 didCompleteLiftForItemsAtIndexPaths:(id)arg2;
-(void)dragSourceController:(id)arg1 willEndForItemsAtIndexPaths:(id)arg2 withDropOperation:(unsigned long long)arg3;
-(void)dragSourceController:(id)arg1 didCancelLiftForItemsAtIndexPaths:(id)arg2;
-(void)dragSourceController:(id)arg1 willBeginLiftForItemsAtIndexPaths:(id)arg2;
-(void)dragSourceController:(id)arg1 didCompleteAnimatingCancelForItemsAtIndexPaths:(id)arg2;
-(void)dragSourceController:(id)arg1 didUpdateItemCountOfSelectedItems:(long long)arg2;
-(void)dragSourceController:(id)arg1 didSupplyCancellationPreviewForItemAtIndexPath:(id)arg2;

@end

