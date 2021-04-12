/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKGraphViewDelegate <NSObject>
@optional
-(void)graphView:(id)arg1 startupTime:(long long)arg2;

@required
-(void)graphViewDidBeginSelection:(id)arg1;
-(void)graphView:(id)arg1 didUpdateSelectedPoint:(id)arg2;
-(void)graphViewDidEndSelection:(id)arg1;
-(void)graphView:(id)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(id)arg4;
-(void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;
-(void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2;
-(long long)stackCountForGraphView:(id)arg1;
-(id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
-(void)graphViewSizeChanged:(id)arg1;
-(void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;
-(void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(BOOL)arg3;
-(id)seriesSelectionLineColorForGraphView:(id)arg1;
-(void)graphView:(id)arg1 didUpdateLegendViewsWithTopLegendFrame:(CGRect)arg2;
-(void)graphViewDidTapYAxis:(id)arg1;

@end

