/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>

@class HKStrokeStyle, NSArray;

@interface HKSleepPeriodSeries : HKGraphSeries {

	HKStrokeStyle* _strokeStyle;
	HKStrokeStyle* _tiledStrokeStyle;
	NSArray* _defaultFillStyles;
	NSArray* _highlightedFillStyles;
	HKStrokeStyle* _goalLineStokeStyle;
	/*^block*/id _startOfDayTransform;
	CGSize _cornerRadii;

}

@property (assign,nonatomic) CGSize cornerRadii;                            //@synthesize cornerRadii=_cornerRadii - In the implementation block
@property (nonatomic,copy) HKStrokeStyle * strokeStyle;                     //@synthesize strokeStyle=_strokeStyle - In the implementation block
@property (nonatomic,copy) HKStrokeStyle * tiledStrokeStyle;                //@synthesize tiledStrokeStyle=_tiledStrokeStyle - In the implementation block
@property (nonatomic,copy) NSArray * defaultFillStyles;                     //@synthesize defaultFillStyles=_defaultFillStyles - In the implementation block
@property (nonatomic,copy) NSArray * highlightedFillStyles;                 //@synthesize highlightedFillStyles=_highlightedFillStyles - In the implementation block
@property (nonatomic,copy) HKStrokeStyle * goalLineStokeStyle;              //@synthesize goalLineStokeStyle=_goalLineStokeStyle - In the implementation block
@property (nonatomic,copy) id startOfDayTransform;                          //@synthesize startOfDayTransform=_startOfDayTransform - In the implementation block
+(id)_sleepCircleImageWithWidth:(double)arg1 diameter:(double)arg2 color:(id)arg3 ;
+(id)asleepImageCompatibleWithFont:(id)arg1 withColor:(id)arg2 ;
+(id)inBedImageCompatibleWithFont:(id)arg1 withColor:(id)arg2 ;
-(void)clearCaches;
-(void)setCornerRadii:(CGSize)arg1 ;
-(CGSize)cornerRadii;
-(void)setStrokeStyle:(HKStrokeStyle *)arg1 ;
-(HKStrokeStyle *)strokeStyle;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK0)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(BOOL)supportsMultiTouchSelection;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2 ;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(void)setGoalLineStokeStyle:(HKStrokeStyle *)arg1 ;
-(void)setDefaultFillStyles:(NSArray *)arg1 ;
-(void)setHighlightedFillStyles:(NSArray *)arg1 ;
-(void)setTiledStrokeStyle:(HKStrokeStyle *)arg1 ;
-(void)_assertCoordinateCompatibility:(id)arg1 ;
-(double)_minimumYForCoordinate:(id)arg1 ;
-(double)_maximumYForCoordinate:(id)arg1 ;
-(BOOL)shouldInvertAxis;
-(BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2 ;
-(NSArray *)defaultFillStyles;
-(NSArray *)highlightedFillStyles;
-(long long)_visibleBarCountWithZoomLevelConfiguration:(id)arg1 ;
-(void)_drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(CGAffineTransform)arg3 context:(CGContextRef)arg4 axisRect:(CGRect)arg5 ;
-(HKStrokeStyle *)tiledStrokeStyle;
-(double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(CGRect)arg2 minimumSpacing:(double)arg3 ;
-(void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(CGRect)arg4 context:(CGContextRef)arg5 ;
-(void)_drawGoalLinePath:(id)arg1 context:(CGContextRef)arg2 ;
-(void)_addAnnotationForValue:(double)arg1 ;
-(HKStrokeStyle *)goalLineStokeStyle;
-(id)stringFromTimeSinceNoon:(id)arg1 ;
-(id)startOfDayTransform;
-(void)setStartOfDayTransform:(id)arg1 ;
@end

