/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKDashboardItemPresenter <NSObject>
@optional
-(BOOL)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
-(void)cellDidDisappear:(id)arg1 foritem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
-(void)cellWillAppear:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
-(void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;
-(BOOL)cellIsStackableForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
-(BOOL)cellIsIndependentForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
-(void)prefetchForItem:(id)arg1 inCollectionView:(id)arg2;

@required
-(Class)itemClass;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
-(CGSize*)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;

@end

