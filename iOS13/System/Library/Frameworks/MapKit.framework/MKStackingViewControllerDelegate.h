/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

