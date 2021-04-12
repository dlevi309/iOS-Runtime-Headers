/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


#import <FitnessUI/FitnessUI-Structs.h>
@interface FIUIChartColor : NSObject {

	CGGradientRef _gradient;
	CGColorRef _color;
	double _threshold;

}

@property (assign,nonatomic) double threshold;              //@synthesize threshold=_threshold - In the implementation block
-(double)threshold;
-(void)setThreshold:(double)arg1 ;
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithThreshold:(double)arg1 startColor:(id)arg2 endColor:(id)arg3 ;
-(id)initWithThreshold:(double)arg1 color:(id)arg2 ;
@end

