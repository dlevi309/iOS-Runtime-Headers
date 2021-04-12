/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(UIColor *)color;
-(void)layoutSubviews;
-(void)setColor:(UIColor *)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(double)sidePadding;
-(void)setSidePadding:(double)arg1 ;
@end

