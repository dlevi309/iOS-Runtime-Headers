/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)setThreshold:(double)arg1 ;
-(id)initWithThreshold:(double)arg1 startColor:(id)arg2 endColor:(id)arg3 ;
-(id)initWithThreshold:(double)arg1 color:(id)arg2 ;
@end

