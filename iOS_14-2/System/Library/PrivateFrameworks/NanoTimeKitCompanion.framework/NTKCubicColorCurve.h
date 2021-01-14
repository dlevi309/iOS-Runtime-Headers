/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKColorCurve.h>

@class NTKCubicSpline;

@interface NTKCubicColorCurve : NTKColorCurve {

	NTKCubicSpline* _spline;
	* _colors;
	float* _fractions;
	unsigned long long _count;

}
-(void)dealloc;
-(id)colorForFraction:(float)arg1 ;
-(2)rgbfColorForFraction:(double)arg1 ;
-(id)initWithCubicColorCurveElements:(id)arg1 ;
-(id)initWithColorCurveElements:(id)arg1 ;
@end

