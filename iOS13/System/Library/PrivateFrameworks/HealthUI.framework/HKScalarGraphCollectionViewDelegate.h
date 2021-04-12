/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKScalarGraphCollectionViewDelegate <NSObject>
@optional
-(void)graphCollectionView:(id)arg1 didChangeVisibleIndex:(long long)arg2;

@required
-(long long)numberOfItemsInCollection;
-(id)headerViewForLollipop;
-(id)lollipopControllerForGraphCollectionView;
-(id)graphViewControllerForIndex:(long long)arg1;
-(id)graphSeriesForIndex:(long long)arg1;

@end

