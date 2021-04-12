/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKScalarGraphCollectionViewDelegate <NSObject>
@optional
-(void)graphCollectionView:(id)arg1 didChangeVisibleIndex:(long long)arg2;

@required
-(long long)numberOfItemsInCollection;
-(id)graphSeriesForIndex:(long long)arg1;
-(id)graphViewControllerForIndex:(long long)arg1;
-(id)lollipopControllerForGraphCollectionView;
-(id)headerViewForLollipop;

@end

