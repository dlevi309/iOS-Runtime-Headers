/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol UICollectionViewDropDelegate <NSObject>
@optional
-(id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;
-(void)collectionView:(id)arg1 dropSessionDidExit:(id)arg2;
-(BOOL)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
-(void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;
-(id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;

@required
-(void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;

@end

