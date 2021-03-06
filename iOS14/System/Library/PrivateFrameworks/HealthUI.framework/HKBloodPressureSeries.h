/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>

@class HKBloodPressureSeriesPresentationStyle;

@interface HKBloodPressureSeries : HKGraphSeries {

	HKBloodPressureSeriesPresentationStyle* _selectedPresentationStyle;
	HKBloodPressureSeriesPresentationStyle* _unselectedPresentationStyle;

}

@property (nonatomic,retain) HKBloodPressureSeriesPresentationStyle * selectedPresentationStyle;                //@synthesize selectedPresentationStyle=_selectedPresentationStyle - In the implementation block
@property (nonatomic,retain) HKBloodPressureSeriesPresentationStyle * unselectedPresentationStyle;              //@synthesize unselectedPresentationStyle=_unselectedPresentationStyle - In the implementation block
+(id)defaultSeriesWithSystolicColor:(id)arg1 ;
+(id)systolicImageCompatibleWithFont:(id)arg1 withColor:(id)arg2 ;
+(id)diastolicImageCompatibleWithFont:(id)arg1 withColor:(id)arg2 ;
+(void)_drawSystolicSymbolWithColor:(id)arg1 atLocation:(CGPoint)arg2 width:(double)arg3 context:(CGContextRef)arg4 ;
+(void)_drawDiastolicSymbolWithColor:(id)arg1 atLocation:(CGPoint)arg2 width:(double)arg3 context:(CGContextRef)arg4 ;
+(CGRect)_rectCenteredAt:(CGPoint)arg1 width:(double)arg2 ;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK12)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(BOOL)supportsMultiTouchSelection;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2 ;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2 ;
-(void)setUnselectedPresentationStyle:(HKBloodPressureSeriesPresentationStyle *)arg1 ;
-(HKBloodPressureSeriesPresentationStyle *)selectedPresentationStyle;
-(HKBloodPressureSeriesPresentationStyle *)unselectedPresentationStyle;
-(void)_drawRangeBackgroundInContext:(CGContextRef)arg1 coordinate:(id)arg2 width:(double)arg3 symbolType:(long long)arg4 symbolColor:(id)arg5 fillColor:(id)arg6 ;
-(void)_drawRangeDotsInContext:(CGContextRef)arg1 coordinate:(id)arg2 width:(double)arg3 symbolType:(long long)arg4 symbolColor:(id)arg5 fillColor:(id)arg6 ;
-(void)_drawBloodPressureSymbol:(long long)arg1 withColor:(id)arg2 atLocation:(CGPoint)arg3 width:(double)arg4 context:(CGContextRef)arg5 ;
-(void)setSelectedPresentationStyle:(HKBloodPressureSeriesPresentationStyle *)arg1 ;
@end

