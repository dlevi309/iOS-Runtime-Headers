/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK9)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(BOOL)supportsMultiTouchSelection;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2 ;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(void)setUnselectedStrokeStyle:(HKStrokeStyle *)arg1 ;
-(void)setSelectedStrokeStyle:(HKStrokeStyle *)arg1 ;
-(void)_drawStrokeWithBlockCoordinates:(id)arg1 pointTransform:(CGAffineTransform)arg2 context:(CGContextRef)arg3 axisRect:(CGRect)arg4 ;
-(BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2 ;
-(HKStrokeStyle *)unselectedStrokeStyle;
-(HKStrokeStyle *)selectedStrokeStyle;
-(UIImage *)selectedPointMarkerImage;
-(void)setSelectedPointMarkerImage:(UIImage *)arg1 ;
-(void)_drawPointMarkersWithBlockCoordinates:(id)arg1 pointTransform:(CGAffineTransform)arg2 context:(CGContextRef)arg3 ;
-(UIImage *)unselectedPointMarkerImage;
-(void)setUnselectedPointMarkerImage:(UIImage *)arg1 ;
@end

