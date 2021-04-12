/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@protocol UICollectionViewDragDelegate <NSObject>
@optional
-(void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;
-(BOOL)collectionView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;
-(BOOL)collectionView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2;
-(id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4;
-(id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4;
-(id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;
-(id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;

@required
-(id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
-(id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;

@end

