/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>

@interface HealthRecordsUI.MedicalRecordChartSeries : HKGraphSeries {

	 selectedStrokeStyle;
	 unselectedStrokeStyle;

}

@property (readonly,nonatomic) SCD_Struct_He4 selectedPathRange; 
-(id)init;
-(SCD_Struct_He4)selectedPathRange;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_He2)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(BOOL)supportsMultiTouchSelection;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2 ;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
@end

