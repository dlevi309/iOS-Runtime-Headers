/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>

@class HKStrokeStyle, HKFillStyle;

@interface HKActivityGoalSeries : HKGraphSeries {

	HKStrokeStyle* _strokeStyle;
	HKFillStyle* _fillStyle;

}
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK12)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(BOOL)supportsMultiTouchSelection;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2 ;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2 ;
-(void)_enumerateCoordinateListByRemovingOffscreenPoints:(id)arg1 withTransform:(CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 axisRect:(CGRect)arg4 block:(/*^block*/id)arg5 ;
-(void)_enumerateCoordinateList:(id)arg1 withTransform:(CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 axisRect:(CGRect)arg4 block:(/*^block*/id)arg5 ;
-(id)initWithStrokeStyle:(id)arg1 fillStyle:(id)arg2 ;
@end

