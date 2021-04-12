/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <FitnessUI/FIUIChartNumericSeries.h>

@class NSArray, UIColor;

@interface FIUIChartHorizontalLineSeries : FIUIChartNumericSeries {

	NSArray* _dataPoints;
	UIColor* _color;
	double _lineWidth;
	double _sidePadding;

}

@property (nonatomic,retain) UIColor * color;                 //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double lineWidth;                //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double sidePadding;              //@synthesize sidePadding=_sidePadding - In the implementation block
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)layoutSubviews;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(double)sidePadding;
-(void)setSidePadding:(double)arg1 ;
@end

