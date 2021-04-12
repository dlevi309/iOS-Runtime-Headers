/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class CLKDevice, NSDictionary, NSNumber, UIColor, NSArray, NSDateFormatter, UILabel;

@interface NTKWellnessRichComplicationChartView : UIView {

	CLKDevice* _device;
	NSDictionary* _moveChartPoints;
	NSNumber* _maxMoveValue;
	NSDictionary* _exerciseChartPoints;
	NSNumber* _maxExerciseValue;
	NSDictionary* _standChartPoints;
	UIColor* _chartLineColor;
	double _moveChartBottomLineY;
	double _exerciseChartBottomLineY;
	double _standChartBottomLineY;
	NSArray* _chartLineXPositions;
	CGGradientRef _moveBarGradient;
	UIColor* _moveBarFadedColor;
	CGGradientRef _exerciseBarGradient;
	UIColor* _exerciseBarFadedColor;
	CGGradientRef _standBarGradient;
	NSDateFormatter* _hourFormatter;
	UILabel* _midnightHourLabel;
	UILabel* _sixAMHourLabel;
	UILabel* _noonHourLabel;
	UILabel* _sixPMHourLabel;

}
-(void)dealloc;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)_registerForNotifications;
-(id)initForDevice:(id)arg1 ;
-(void)_createHourFormatter;
-(void)_updateHourLabelsText;
-(id)_timeStringByRemovingSpacesFromTimeString:(id)arg1 ;
-(void)_currentLocaleChangeOccurred;
-(id)_generateChartPointsForQuantityStatisticsInfo:(id)arg1 withUnit:(id)arg2 accumulateFractionalValues:(BOOL)arg3 ;
-(id)_generateStandChartPointsForStandHourInfo:(id)arg1 ;
-(id)_keyForDate:(id)arg1 ;
-(void)_drawChartsBarsInContext:(CGContextRef)arg1 lineNumber:(unsigned long long)arg2 xPosition:(double)arg3 ;
-(double)_movePointRelativeHeightForValue:(double)arg1 ;
-(double)_exercisePointRelativeHeightForValue:(double)arg1 ;
-(void)setMoveGraphData:(id)arg1 ;
-(void)setExerciseGraphData:(id)arg1 ;
-(void)setStandGraphData:(id)arg1 ;
@end

