/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>

@class HKStrokeStyle, UIImage;

@interface HKMinMaxSeries : HKGraphSeries {

	HKStrokeStyle* _unselectedStrokeStyle;
	HKStrokeStyle* _selectedStrokeStyle;
	UIImage* _unselectedPointMarkerImage;
	UIImage* _selectedPointMarkerImage;

}

@property (nonatomic,retain) HKStrokeStyle * unselectedStrokeStyle;              //@synthesize unselectedStrokeStyle=_unselectedStrokeStyle - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * selectedStrokeStyle;                //@synthesize selectedStrokeStyle=_selectedStrokeStyle - In the implementation block
@property (nonatomic,retain) UIImage * unselectedPointMarkerImage;               //@synthesize unselectedPointMarkerImage=_unselectedPointMarkerImage - In the implementation block
@property (nonatomic,retain) UIImage * selectedPointMarkerImage;                 //@synthesize selectedPointMarkerImage=_selectedPointMarkerImage - In the implementation block
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK12)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(BOOL)supportsMultiTouchSelection;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2 ;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(void)setUnselectedPointMarkerImage:(UIImage *)arg1 ;
-(void)setUnselectedStrokeStyle:(HKStrokeStyle *)arg1 ;
-(void)setSelectedPointMarkerImage:(UIImage *)arg1 ;
-(void)setSelectedStrokeStyle:(HKStrokeStyle *)arg1 ;
-(UIImage *)selectedPointMarkerImage;
-(BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2 ;
-(HKStrokeStyle *)unselectedStrokeStyle;
-(HKStrokeStyle *)selectedStrokeStyle;
-(void)_drawStrokeWithBlockCoordinates:(id)arg1 pointTransform:(CGAffineTransform)arg2 context:(CGContextRef)arg3 axisRect:(CGRect)arg4 ;
-(void)_drawPointMarkersWithBlockCoordinates:(id)arg1 pointTransform:(CGAffineTransform)arg2 context:(CGContextRef)arg3 ;
-(UIImage *)unselectedPointMarkerImage;
@end

