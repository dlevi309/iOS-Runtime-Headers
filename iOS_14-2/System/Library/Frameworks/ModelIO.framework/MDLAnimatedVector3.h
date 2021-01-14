/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedVector3 : MDLAnimatedValue
-(unsigned long long)precision;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(2)float3AtTime:(double)arg1 ;
-(2)double3AtTime:(double)arg1 ;
-(VtValue*)defaultVtValue;
-(unsigned long long)getFloat3Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDouble3Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(void)setFloat3:(double)arg1 ;
-(void)setDouble3:(double)arg1 ;
-(void)resetWithFloat3Array:(const 1*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(void)resetWithDouble3Array:(const 1*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
@end

