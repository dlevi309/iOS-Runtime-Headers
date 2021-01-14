/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKSeriesDelegate
@required
-(UIEdgeInsets*)virtualMarginInsets;
-(BOOL)measuringStartupTime;
-(BOOL)seriesDrawingDuringAutoscale;
-(BOOL)seriesDrawingDuringScrolling;
-(void)seriesDidInvalidatePaths:(id)arg1 newDataArrived:(BOOL)arg2;
-(BOOL)seriesDrawingDuringTiling;
-(CGPoint*)seriesContentOffset;
-(CGRect*)screenRectForSeries:(id)arg1;
-(void)autoscaleStateChangedForSeries:(id)arg1;
-(BOOL)rangeIsVisible:(id)arg1;
-(void)nonemptyDrawComplete;

@end

