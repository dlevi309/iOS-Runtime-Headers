/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <FitnessUI/FIUIChartNumericSeries.h>

@class NSDate, NSArray;

@interface FIUIChartUniformBarSeries : FIUIChartNumericSeries {

	NSDate* _minDate;
	double _barWidth;
	double _barSpacing;
	double _roundedCornerRadius;
	CGGradientRef _barGradient;
	NSArray* _plotPoints;

}

@property (nonatomic,retain) NSArray * plotPoints;                    //@synthesize plotPoints=_plotPoints - In the implementation block
@property (assign,nonatomic) NSDate * minDate;                        //@synthesize minDate=_minDate - In the implementation block
@property (assign,nonatomic) double barWidth;                         //@synthesize barWidth=_barWidth - In the implementation block
@property (assign,nonatomic) double barSpacing;                       //@synthesize barSpacing=_barSpacing - In the implementation block
@property (assign,nonatomic) double roundedCornerRadius;              //@synthesize roundedCornerRadius=_roundedCornerRadius - In the implementation block
@property (assign,nonatomic) CGGradientRef barGradient;               //@synthesize barGradient=_barGradient - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(double)roundedCornerRadius;
-(void)setMinDate:(NSDate *)arg1 ;
-(NSDate *)minDate;
-(void)setBarWidth:(double)arg1 ;
-(double)barWidth;
-(void)setBarSpacing:(double)arg1 ;
-(void)setRoundedCornerRadius:(double)arg1 ;
-(void)setBarGradient:(CGGradientRef)arg1 ;
-(double)xValueForPointFromChartPoint:(id)arg1 ;
-(double)yValueForPointFromChartPointValue:(id)arg1 ;
-(double)barSpacing;
-(CGGradientRef)barGradient;
-(NSArray *)plotPoints;
-(void)setPlotPoints:(NSArray *)arg1 ;
@end

