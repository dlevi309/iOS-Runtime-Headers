/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKSeriesDelegate
@required
-(BOOL)seriesDrawingDuringTiling;
-(CGRect*)screenRectForSeries:(id)arg1;
-(void)autoscaleStateChangedForSeries:(id)arg1;
-(UIEdgeInsets*)virtualMarginInsets;
-(void)seriesDidInvalidatePaths:(id)arg1 newDataArrived:(BOOL)arg2;
-(BOOL)seriesDrawingDuringScrolling;
-(BOOL)seriesDrawingDuringAutoscale;

@end

