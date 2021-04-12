/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKBarSeries.h>

@class NSArray, HKStrokeStyle;

@interface HKSleepDurationSeries : HKBarSeries {

	NSArray* _defaultFillStyles;
	NSArray* _highlightedFillStyles;
	HKStrokeStyle* _goalLineStokeStyle;
	/*^block*/id _startOfDayTransform;

}

@property (nonatomic,copy) NSArray * defaultFillStyles;                     //@synthesize defaultFillStyles=_defaultFillStyles - In the implementation block
@property (nonatomic,copy) NSArray * highlightedFillStyles;                 //@synthesize highlightedFillStyles=_highlightedFillStyles - In the implementation block
@property (nonatomic,copy) HKStrokeStyle * goalLineStokeStyle;              //@synthesize goalLineStokeStyle=_goalLineStokeStyle - In the implementation block
@property (nonatomic,copy) id startOfDayTransform;                          //@synthesize startOfDayTransform=_startOfDayTransform - In the implementation block
-(id)_durationFormatter;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK9)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(BOOL)supportsMultiTouchSelection;
-(void)setGoalLineStokeStyle:(HKStrokeStyle *)arg1 ;
-(void)setDefaultFillStyles:(NSArray *)arg1 ;
-(void)setHighlightedFillStyles:(NSArray *)arg1 ;
-(NSArray *)defaultFillStyles;
-(NSArray *)highlightedFillStyles;
-(double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(CGRect)arg2 minimumSpacing:(double)arg3 ;
-(void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(CGRect)arg4 context:(CGContextRef)arg5 ;
-(void)_drawGoalLinePath:(id)arg1 context:(CGContextRef)arg2 ;
-(void)_addAnnotationForValue:(double)arg1 ;
-(HKStrokeStyle *)goalLineStokeStyle;
-(id)startOfDayTransform;
-(void)setStartOfDayTransform:(id)arg1 ;
-(long long)visibleBarCountWithZoomLevelConfiguration:(id)arg1 ;
-(void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(CGAffineTransform)arg3 context:(CGContextRef)arg4 axisRect:(CGRect)arg5 ;
@end

