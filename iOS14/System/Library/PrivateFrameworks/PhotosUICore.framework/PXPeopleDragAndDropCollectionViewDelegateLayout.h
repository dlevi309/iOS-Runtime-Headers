/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXPeopleDragAndDropCollectionViewDelegateLayout <UICollectionViewDelegateFlowLayout>
@optional
-(BOOL)collectionView:(id)arg1 shouldMergeDragIndexPath:(id)arg2 targetIndexPath:(id)arg3;

@required
-(void)collectionView:(id)arg1 didBeginMergeWithDragIndexPath:(id)arg2 targetIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 didCancelMergeWithDragIndexPath:(id)arg2 targetIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 didMergeDragIndexPath:(id)arg2 targetIndexPath:(id)arg3;

@end

