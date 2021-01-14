/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIStorePageCollectionViewDelegate <UICollectionViewDelegateFlowLayout>
@optional
-(void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
-(id)backgroundColorForSection:(long long)arg1;
-(void)collectionView:(id)arg1 didEndEditingItemAtIndexPath:(id)arg2;
-(BOOL)collectionView:(id)arg1 canScrollCellAtIndexPath:(id)arg2;
-(UIEdgeInsets*)collectionView:(id)arg1 layout:(id)arg2 pinningContentInsetForItemAtIndexPath:(id)arg3;
-(long long)collectionView:(id)arg1 layout:(id)arg2 pinningStyleForItemAtIndexPath:(id)arg3;
-(long long)collectionView:(id)arg1 layout:(id)arg2 pinningGroupForItemAtIndexPath:(id)arg3;
-(long long)collectionView:(id)arg1 layout:(id)arg2 pinningTransitionStyleForItemAtIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 willBeginEditingItemAtIndexPath:(id)arg2;
-(id)indexPathsForPinningItemsInCollectionView:(id)arg1 layout:(id)arg2;
-(id)indexPathsForGradientItemsInCollectionView:(id)arg1 layout:(id)arg2;

@end

