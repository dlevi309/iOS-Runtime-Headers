/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <FitnessUI/FIUIChartSeries.h>

@class NSArray, NSMutableArray, UIColor, NSDictionary;

@interface FIUIChartFloatingBarSeries : FIUIChartSeries {

	NSArray* _barRects;
	NSMutableArray* _barLabelTopPoints;
	NSMutableArray* _barLabelBottomPoints;
	NSMutableArray* _barLabels;
	UIColor* _barColor;
	double _cornerRadius;
	NSDictionary* _labelAttributes;

}

@property (nonatomic,retain) UIColor * barColor;                          //@synthesize barColor=_barColor - In the implementation block
@property (assign,nonatomic) double cornerRadius;                         //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) NSDictionary * labelAttributes;              //@synthesize labelAttributes=_labelAttributes - In the implementation block
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(double)cornerRadius;
-(UIColor *)barColor;
-(void)setBarColor:(UIColor *)arg1 ;
-(NSDictionary *)labelAttributes;
-(void)setLabelAttributes:(NSDictionary *)arg1 ;
-(void)_loadFromDataSet;
@end

