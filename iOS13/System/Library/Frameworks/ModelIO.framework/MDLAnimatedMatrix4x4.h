/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedMatrix4x4 : MDLAnimatedValue
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)precision;
-(void)setFloat4x4:(SCD_Struct_MD1)arg1 atTime:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(SCD_Struct_MD1)float4x4AtTime:(double)arg1 ;
-(SCD_Struct_MD1)double4x4AtTime:(double)arg1 ;
-(VtValue*)defaultVtValue;
-(unsigned long long)getFloat4x4Array:(SCD_Struct_MD1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDouble4x4Array:(SCD_Struct_MD1*)arg1 maxCount:(unsigned long long)arg2 ;
-(void)setDouble4x4:(SCD_Struct_MD1)arg1 atTime:(double)arg2 ;
-(void)resetWithFloat4x4Array:(const SCD_Struct_MD1*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(void)resetWithDouble4x4Array:(const SCD_Struct_MD1*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
@end

