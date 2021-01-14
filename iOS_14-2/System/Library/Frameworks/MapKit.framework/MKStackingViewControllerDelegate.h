/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKStackingViewControllerDelegate <NSObject>
@optional
-(double)stackingViewControllerHeightForTitleView:(id)arg1;
-(double)stackingViewController:(id)arg1 heightForSeparatorBetweenUpperViewController:(id)arg2 andLowerViewController:(id)arg3;
-(double)stackingViewController:(id)arg1 minimumVisibleSurfacePercentForAnalyticsSelection:(id)arg2;
-(void)stackingViewController:(id)arg1 didShowMinimumVisibleSurfacePercentForAnalyticsSelection:(id)arg2;
-(void)stackingViewControllerWillBeginScroll:(id)arg1;
-(void)stackingViewControllerDidEndScroll:(id)arg1;
-(void)stackingViewControllerDidLayoutViewControllers:(id)arg1;

@end

