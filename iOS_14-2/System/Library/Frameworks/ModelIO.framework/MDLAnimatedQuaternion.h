/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedQuaternion : MDLAnimatedValue
-(unsigned long long)precision;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(SCD_Struct_MD29)floatQuaternionAtTime:(double)arg1 ;
-(SCD_Struct_MD29)doubleQuaternionAtTime:(double)arg1 ;
-(VtValue*)defaultVtValue;
-(unsigned long long)getFloatQuaternionArray:(SCD_Struct_MD29*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDoubleQuaternionArray:(SCD_Struct_MD29*)arg1 maxCount:(unsigned long long)arg2 ;
-(void)setFloatQuaternion:(SCD_Struct_MD29)arg1 atTime:(double)arg2 ;
-(void)setDoubleQuaternion:(SCD_Struct_MD29)arg1 atTime:(double)arg2 ;
-(void)resetWithFloatQuaternionArray:(const SCD_Struct_MD29*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(void)resetWithDoubleQuaternionArray:(const SCD_Struct_MD29*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
@end

