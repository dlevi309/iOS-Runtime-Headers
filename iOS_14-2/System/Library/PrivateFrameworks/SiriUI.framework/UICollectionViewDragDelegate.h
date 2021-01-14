/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@protocol UICollectionViewDragDelegate <NSObject>
@optional
-(BOOL)collectionView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;
-(void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;
-(void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;
-(id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;
-(id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4;
-(BOOL)collectionView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2;

@required
-(id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;

@end

