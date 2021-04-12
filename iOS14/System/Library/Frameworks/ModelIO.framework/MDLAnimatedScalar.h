/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedScalar : MDLAnimatedValue
-(unsigned long long)precision;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(float)floatAtTime:(double)arg1 ;
-(double)doubleAtTime:(double)arg1 ;
-(unsigned long long)getFloatArray:(float*)arg1 maxCount:(unsigned long long)arg2 ;
-(VtValue*)defaultVtValue;
-(unsigned long long)getDoubleArray:(double*)arg1 maxCount:(unsigned long long)arg2 ;
-(void)setFloat:(float)arg1 atTime:(double)arg2 ;
-(void)setDouble:(double)arg1 atTime:(double)arg2 ;
-(void)resetWithFloatArray:(const float*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(void)resetWithDoubleArray:(const double*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
@end

