/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithColorCurveElements:(id)arg1 ;
@end

