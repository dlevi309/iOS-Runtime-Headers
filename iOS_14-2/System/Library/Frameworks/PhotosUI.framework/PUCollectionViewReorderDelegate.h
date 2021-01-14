/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUCollectionViewReorderDelegate <NSObject>
@optional
-(BOOL)collectionView:(id)arg1 canReorderItemAtIndexPath:(id)arg2;
-(id)collectionView:(id)arg1 targetIndexPathForMoveFromIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;

@required
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

