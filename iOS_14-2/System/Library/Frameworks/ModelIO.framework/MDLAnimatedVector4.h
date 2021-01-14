/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedVector4 : MDLAnimatedValue
-(unsigned long long)precision;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(VtValue*)defaultVtValue;
-(void)setFloat4:(double)arg1 ;
-(void)setDouble4:(double)arg1 ;
-(2)float4AtTime:(double)arg1 ;
-(2)double4AtTime:(double)arg1 ;
-(void)resetWithFloat4Array:(const 1*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(void)resetWithDouble4Array:(const 1*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)getFloat4Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDouble4Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
@end

