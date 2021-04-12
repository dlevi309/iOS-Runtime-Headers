/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol UICollectionViewDropDelegate <NSObject>
@optional
-(BOOL)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
-(void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;
-(void)collectionView:(id)arg1 dropSessionDidExit:(id)arg2;
-(void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;
-(id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2;
-(id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;

@required
-(void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;

@end

