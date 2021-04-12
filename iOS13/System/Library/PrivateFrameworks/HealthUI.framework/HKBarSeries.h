/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>

@class HKStrokeStyle, HKFillStyle;

@interface HKBarSeries : HKGraphSeries {

	HKStrokeStyle* _unselectedStrokeStyle;
	HKStrokeStyle* _selectedStrokeStyle;
	HKFillStyle* _unselectedFillStyle;
	HKFillStyle* _selectedFillStyle;
	HKStrokeStyle* _tiledStrokeStyle;
	CGSize _cornerRadii;

}

@property (nonatomic,retain) HKStrokeStyle * unselectedStrokeStyle;              //@synthesize unselectedStrokeStyle=_unselectedStrokeStyle - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * selectedStrokeStyle;                //@synthesize selectedStrokeStyle=_selectedStrokeStyle - In the implementation block
@property (nonatomic,retain) HKFillStyle * unselectedFillStyle;                  //@synthesize unselectedFillStyle=_unselectedFillStyle - In the implementation block
@property (nonatomic,retain) HKFillStyle * selectedFillStyle;                    //@synthesize selectedFillStyle=_selectedFillStyle - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * tiledStrokeStyle;                   //@synthesize tiledStrokeStyle=_tiledStrokeStyle - In the implementation block
@property (assign,nonatomic) CGSize cornerRadii;                                 //@synthesize cornerRadii=_cornerRadii - In the implementation block
-(void)setCornerRadii:(CGSize)arg1 ;
-(CGSize)cornerRadii;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK9)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(BOOL)supportsMultiTouchSelection;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2 ;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(void)setUnselectedStrokeStyle:(HKStrokeStyle *)arg1 ;
-(void)setTiledStrokeStyle:(HKStrokeStyle *)arg1 ;
-(void)setSelectedStrokeStyle:(HKStrokeStyle *)arg1 ;
-(BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2 ;
-(HKStrokeStyle *)unselectedStrokeStyle;
-(HKStrokeStyle *)selectedStrokeStyle;
-(HKStrokeStyle *)tiledStrokeStyle;
-(double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(CGRect)arg2 minimumSpacing:(double)arg3 ;
-(long long)visibleBarCountWithZoomLevelConfiguration:(id)arg1 ;
-(void)setUnselectedFillStyle:(HKFillStyle *)arg1 ;
-(void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(CGAffineTransform)arg3 context:(CGContextRef)arg4 axisRect:(CGRect)arg5 ;
-(void)setSelectedFillStyle:(HKFillStyle *)arg1 ;
-(HKFillStyle *)selectedFillStyle;
-(HKFillStyle *)unselectedFillStyle;
-(void)_drawPath:(id)arg1 withFillStyle:(id)arg2 strokeStyle:(id)arg3 axisRect:(CGRect)arg4 context:(CGContextRef)arg5 ;
@end

