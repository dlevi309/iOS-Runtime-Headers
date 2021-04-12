/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedScalar : MDLAnimatedValue
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)precision;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(float)floatAtTime:(double)arg1 ;
-(double)doubleAtTime:(double)arg1 ;
-(VtValue*)defaultVtValue;
-(unsigned long long)getFloatArray:(float*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDoubleArray:(double*)arg1 maxCount:(unsigned long long)arg2 ;
-(void)setFloat:(float)arg1 atTime:(double)arg2 ;
-(void)setDouble:(double)arg1 atTime:(double)arg2 ;
-(void)resetWithFloatArray:(const float*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(void)resetWithDoubleArray:(const double*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
@end

